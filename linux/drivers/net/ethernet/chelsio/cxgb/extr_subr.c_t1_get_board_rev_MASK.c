
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct board_info {scalar_t__ chip_term; } ;
struct adapter_params {scalar_t__ chip_version; int is_asic; int chip_revision; } ;
struct TYPE_3__ {scalar_t__ regs; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(adapter_t *VAR_6, const struct board_info *VAR_7,
       struct adapter_params *VAR_8)
{
 VAR_8->chip_version = VAR_7->chip_term;
 VAR_8->is_asic = (VAR_8->chip_version != VAR_1);
 if (VAR_8->chip_version == VAR_2 ||
     VAR_8->chip_version == VAR_3 ||
     VAR_8->chip_version == VAR_1) {
  u32 VAR_9 = FUNC_1(VAR_6->regs + VAR_0);

  VAR_9 = FUNC_0(VAR_9);
  if (VAR_9 == 2)
   VAR_8->chip_revision = VAR_4;
  else if (VAR_9 == 3)
   VAR_8->chip_revision = VAR_5;
  else
   return -1;
 } else
  return -1;
 return 0;
}
