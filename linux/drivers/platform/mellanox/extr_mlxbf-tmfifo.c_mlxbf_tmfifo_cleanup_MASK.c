
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxbf_tmfifo {int is_ready; int work; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxbf_tmfifo*,int) ;
 int FUNC_3 (struct mlxbf_tmfifo*) ;

__attribute__((used)) static void FUNC_4(struct mlxbf_tmfifo *VAR_1)
{
 int VAR_2;

 VAR_1->is_ready = 0;
 FUNC_1(&VAR_1->timer);
 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->work);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_2(VAR_1, VAR_2);
}
