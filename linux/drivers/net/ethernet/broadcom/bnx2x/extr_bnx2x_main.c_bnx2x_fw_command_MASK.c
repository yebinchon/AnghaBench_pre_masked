
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnx2x {int fw_seq; int fw_mb_mutex; } ;
struct TYPE_2__ {int fw_mb_header; int drv_mb_header; int drv_mb_param; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ,int) ;
 int FUNC_6 (struct bnx2x*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

u32 FUNC_10(struct bnx2x *VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7 = FUNC_1(VAR_4);
 u32 VAR_8;
 u32 VAR_9 = 0;
 u32 VAR_10 = 1;
 u8 VAR_11 = FUNC_2(VAR_4) ? 100 : 10;

 FUNC_8(&VAR_4->fw_mb_mutex);
 VAR_8 = ++VAR_4->fw_seq;
 FUNC_5(VAR_4, VAR_3[VAR_7].drv_mb_param, VAR_6);
 FUNC_5(VAR_4, VAR_3[VAR_7].drv_mb_header, (VAR_5 | VAR_8));

 FUNC_3(VAR_0, "wrote command (%x) to FW MB param 0x%08x\n",
   (VAR_5 | VAR_8), VAR_6);

 do {

  FUNC_7(VAR_11);

  VAR_9 = FUNC_4(VAR_4, VAR_3[VAR_7].fw_mb_header);


 } while ((VAR_8 != (VAR_9 & VAR_2)) && (VAR_10++ < 500));

 FUNC_3(VAR_0, "[after %d ms] read (%x) seq is (%x) from FW MB\n",
    VAR_10*VAR_11, VAR_9, VAR_8);


 if (VAR_8 == (VAR_9 & VAR_2))
  VAR_9 &= VAR_1;
 else {

  FUNC_0("FW failed to respond!\n");
  FUNC_6(VAR_4);
  VAR_9 = 0;
 }
 FUNC_9(&VAR_4->fw_mb_mutex);

 return VAR_9;
}
