
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int arg; int flags; int* resp; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_command*,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_10, int VAR_11, unsigned VAR_12,
 unsigned VAR_13, u8 VAR_14, u8 *VAR_15)
{
 struct mmc_command VAR_16 = {};
 int VAR_17;

 if (VAR_12 > 7)
  return -VAR_0;


 if (VAR_13 & ~0x1FFFF)
  return -VAR_0;

 VAR_16.opcode = VAR_9;
 VAR_16.arg = VAR_11 ? 0x80000000 : 0x00000000;
 VAR_16.arg |= VAR_12 << 28;
 VAR_16.arg |= (VAR_11 && VAR_15) ? 0x08000000 : 0x00000000;
 VAR_16.arg |= VAR_13 << 9;
 VAR_16.arg |= VAR_14;
 VAR_16.flags = VAR_5 | VAR_4 | VAR_3;

 VAR_17 = FUNC_1(VAR_10, &VAR_16, 0);
 if (VAR_17)
  return VAR_17;

 if (FUNC_0(VAR_10)) {

 } else {
  if (VAR_16.resp[0] & VAR_6)
   return -VAR_1;
  if (VAR_16.resp[0] & VAR_7)
   return -VAR_0;
  if (VAR_16.resp[0] & VAR_8)
   return -VAR_2;
 }

 if (VAR_15) {
  if (FUNC_0(VAR_10))
   *VAR_15 = (VAR_16.resp[0] >> 8) & 0xFF;
  else
   *VAR_15 = VAR_16.resp[0] & 0xFF;
 }

 return 0;
}
