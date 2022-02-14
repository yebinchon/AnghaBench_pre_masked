
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_3, u32 VAR_4)
{
 if (FUNC_1(VAR_3)) {
  if (VAR_4 & VAR_1)
   return -VAR_0;
 } else {
  if (FUNC_0(VAR_4))
   FUNC_3("%s: unexpected status %#x after switch\n",
    FUNC_2(VAR_3), VAR_4);
  if (VAR_4 & VAR_2)
   return -VAR_0;
 }
 return 0;
}
