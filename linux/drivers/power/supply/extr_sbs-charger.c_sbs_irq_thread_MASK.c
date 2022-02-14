
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbs_info {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sbs_info*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct sbs_info *VAR_4 = VAR_3;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);

 return VAR_5 ? VAR_0 : VAR_1;
}
