
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt_fw_health {int* regs; scalar_t__* mapped_regs; } ;
struct bnxt {scalar_t__ bar0; struct bnxt_fw_health* fw_health; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_7)
{
 struct bnxt_fw_health *VAR_8 = VAR_7->fw_health;
 u32 VAR_9 = 0xffffffff;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  u32 VAR_11 = VAR_8->regs[VAR_10];

  if (FUNC_0(VAR_11) != VAR_0)
   continue;
  if (VAR_9 == 0xffffffff)
   VAR_9 = VAR_11 & VAR_4;
  if ((VAR_11 & VAR_4) != VAR_9)
   return -VAR_6;
  VAR_8->mapped_regs[VAR_10] = VAR_1 +
         (VAR_11 & VAR_5);
 }
 if (VAR_9 == 0xffffffff)
  return 0;

 FUNC_1(VAR_9, VAR_7->bar0 + VAR_3 +
    VAR_2);
 return 0;
}
