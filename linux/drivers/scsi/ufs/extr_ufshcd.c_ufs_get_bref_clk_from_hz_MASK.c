
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum ufs_ref_clk_freq { ____Placeholder_ufs_ref_clk_freq } ufs_ref_clk_freq ;
struct TYPE_2__ {long freq_hz; int val; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static enum ufs_ref_clk_freq
FUNC_0(unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].freq_hz; VAR_3++)
  if (VAR_1[VAR_3].freq_hz == VAR_2)
   return VAR_1[VAR_3].val;

 return VAR_0;
}
