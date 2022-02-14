
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;
typedef scalar_t__ BCM_5710_FW_MAJOR_VERSION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (struct bnx2x*,int ) ;
 int VAR_7 ;

int FUNC_4(struct bnx2x *VAR_8, u32 VAR_9, bool VAR_10)
{

 if (VAR_9 != VAR_6 &&
     VAR_9 != VAR_5) {

  u32 VAR_11 = (BCM_5710_FW_MAJOR_VERSION) +
   (VAR_1 << 8) +
   (VAR_2 << 16) +
   (VAR_0 << 24);


  u32 VAR_12 = FUNC_3(VAR_8, VAR_7);

  FUNC_2(VAR_3, "loaded fw %x, my fw %x\n",
     VAR_12, VAR_11);


  if (VAR_11 != VAR_12) {
   if (VAR_10)
    FUNC_1("bnx2x with FW %x was already loaded which mismatches my %x FW. Aborting\n",
       VAR_12, VAR_11);
   else
    FUNC_0("bnx2x with FW %x was already loaded which mismatches my %x FW, possibly due to MF UNDI\n",
            VAR_12, VAR_11);
   return -VAR_4;
  }
 }
 return 0;
}
