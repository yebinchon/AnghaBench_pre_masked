
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int qs_err_task; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nicvf*,int ,int ) ;
 int FUNC_1 (struct nicvf*,int ,int ) ;
 int FUNC_2 (struct nicvf*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct nicvf *VAR_4 = (struct nicvf *)VAR_3;

 FUNC_2(VAR_4);


 FUNC_1(VAR_4, VAR_1, 0);
 FUNC_3(&VAR_4->qs_err_task);
 FUNC_0(VAR_4, VAR_1, 0);

 return VAR_0;
}
