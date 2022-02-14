
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct odm_ra_info {size_t DecisionRate; int NscUp; int NscDown; } ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct odm_ra_info *VAR_2)
{
 u8 VAR_3;

 VAR_3 = VAR_2->DecisionRate;
 VAR_2->NscUp = (VAR_0[VAR_3] +
     VAR_1[VAR_3]) >> 1;
 VAR_2->NscDown = (VAR_0[VAR_3] +
       VAR_1[VAR_3]) >> 1;
}
