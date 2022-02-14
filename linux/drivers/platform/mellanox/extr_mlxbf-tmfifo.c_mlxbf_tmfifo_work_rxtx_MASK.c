
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxbf_tmfifo_vring {scalar_t__ vq; } ;
struct mlxbf_tmfifo_vdev {struct mlxbf_tmfifo_vring* vrings; } ;
struct mlxbf_tmfifo {struct mlxbf_tmfifo_vdev** vdev; TYPE_1__* irq_info; int pend_events; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxbf_tmfifo_vring*,int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct mlxbf_tmfifo *VAR_1, int VAR_2,
       int VAR_3, bool VAR_4)
{
 struct mlxbf_tmfifo_vdev *VAR_5;
 struct mlxbf_tmfifo_vring *VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_3, &VAR_1->pend_events) ||
     !VAR_1->irq_info[VAR_3].irq)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = VAR_1->vdev[VAR_7];
  if (VAR_5) {
   VAR_6 = &VAR_5->vrings[VAR_2];
   if (VAR_6->vq)
    FUNC_0(VAR_6, VAR_4);
  }
 }
}
