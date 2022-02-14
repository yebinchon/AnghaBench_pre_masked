
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct softing {int * dpram; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct softing *VAR_5 = (struct softing *)VAR_4;
 uint8_t VAR_6;

 VAR_6 = FUNC_0(&VAR_5->dpram[VAR_0]);
 FUNC_1(0, &VAR_5->dpram[VAR_0]);
 return VAR_6 ? VAR_2 : VAR_1;
}
