
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxbf_tmfifo_vring {int vdev_id; struct mlxbf_tmfifo* fifo; } ;
struct mlxbf_tmfifo {struct mlxbf_tmfifo_vring** vring; int * vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxbf_tmfifo*,int) ;
 int FUNC_2 (struct mlxbf_tmfifo*) ;
 int FUNC_3 (struct mlxbf_tmfifo*,int) ;
 int FUNC_4 (struct mlxbf_tmfifo_vring*,int,int*) ;

__attribute__((used)) static void FUNC_5(struct mlxbf_tmfifo_vring *VAR_2, bool VAR_3)
{
 int VAR_4 = 0, VAR_5 = VAR_2->vdev_id;
 struct mlxbf_tmfifo *VAR_6;
 bool VAR_7;

 VAR_6 = VAR_2->fifo;


 if (!VAR_6->vdev[VAR_5])
  return;


 if (VAR_6->vring[VAR_3] && VAR_6->vring[VAR_3] != VAR_2)
  return;


 if (FUNC_0(VAR_5 != VAR_1 && VAR_5 != VAR_0))
  return;

 do {

  if (VAR_4 == 0) {
   if (VAR_3)
    VAR_4 = FUNC_2(VAR_6);
   else
    VAR_4 = FUNC_3(VAR_6, VAR_5);
   if (VAR_4 <= 0)
    break;
  }


  if (!VAR_3 && VAR_5 == VAR_0) {
   FUNC_1(VAR_6, VAR_4);
   break;
  }


  VAR_7 = FUNC_4(VAR_2, VAR_3, &VAR_4);
 } while (VAR_7);
}
