
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct redrat3_irdata {int num_periods; int mod_freq_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct redrat3_irdata *VAR_2)
{
 u32 VAR_3 = 0;
 u16 VAR_4 = FUNC_0(VAR_2->mod_freq_count);

 if (VAR_4 != 0)
  VAR_3 = (VAR_0 * FUNC_0(VAR_2->num_periods)) /
   (VAR_4 * VAR_1);

 return VAR_3;
}
