
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int) ;
 int FUNC_8 (struct bnx2x*) ;
 scalar_t__ FUNC_9 (struct bnx2x*,int) ;
 int FUNC_10 (struct bnx2x*,int*) ;
 int FUNC_11 (struct bnx2x*,int) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(struct bnx2x *VAR_9, bool VAR_10)
{
 int VAR_11 = 1000;
 u32 VAR_12 = 0;
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18 = 0;


 do {
  VAR_13 = FUNC_3(VAR_9, VAR_8);
  VAR_14 = FUNC_3(VAR_9, VAR_5);
  VAR_15 = FUNC_3(VAR_9, VAR_6);
  VAR_16 = FUNC_3(VAR_9, VAR_7);
  VAR_17 = FUNC_3(VAR_9, VAR_4);
  if (FUNC_2(VAR_9))
   VAR_18 = FUNC_3(VAR_9, VAR_3);

  if ((VAR_13 == 0x7e) && (VAR_14 == 0xa0) &&
      ((VAR_15 & 0x1) == 0x1) &&
      ((VAR_16 & 0x1) == 0x1) &&
      (VAR_17 == 0xffffffff) &&
      (!FUNC_2(VAR_9) || (VAR_18 == 0xffffffff)))
   break;
  FUNC_12(1000, 2000);
 } while (VAR_11-- > 0);

 if (VAR_11 <= 0) {
  FUNC_0("Tetris buffer didn't get empty or there are still outstanding read requests after 1s!\n");
  FUNC_0("sr_cnt=0x%08x, blk_cnt=0x%08x, port_is_idle_0=0x%08x, port_is_idle_1=0x%08x, pgl_exp_rom2=0x%08x\n",
     VAR_13, VAR_14, VAR_15, VAR_16,
     VAR_17);
  return -VAR_0;
 }

 FUNC_5();


 FUNC_11(VAR_9, 1);


 if (!FUNC_1(VAR_9) && FUNC_6(VAR_9))
  return -VAR_0;




 FUNC_4(VAR_9, VAR_1, 0);
 FUNC_5();




 FUNC_12(1000, 2000);



 if (VAR_10)
  FUNC_10(VAR_9, &VAR_12);


 FUNC_8(VAR_9);
 FUNC_5();


 FUNC_7(VAR_9, VAR_10);
 FUNC_5();


 if (!FUNC_1(VAR_9))
  FUNC_4(VAR_9, VAR_2, 0x7f);



 if (VAR_10 && FUNC_9(VAR_9, VAR_12))
  return -VAR_0;




 FUNC_11(VAR_9, 0);




 return 0;
}
