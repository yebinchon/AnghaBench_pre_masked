
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_fastpath {int napi; int sb_info; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;

irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct qede_fastpath *VAR_4 = VAR_3;

 FUNC_1(VAR_4->sb_info, VAR_0, 0 );

 FUNC_0(&VAR_4->napi);
 return VAR_1;
}
