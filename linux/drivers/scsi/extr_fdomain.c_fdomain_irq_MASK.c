
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdomain {int work; int cur_cmd; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct fdomain *VAR_7 = VAR_6;


 if ((FUNC_0(VAR_7->base + VAR_3) & VAR_0) == 0)
  return VAR_2;

 FUNC_1(0, VAR_7->base + VAR_4);


 if (!VAR_7->cur_cmd)
  return VAR_2;

 FUNC_2(&VAR_7->work);

 return VAR_1;
}
