
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_5, u32 VAR_6, u32 VAR_7)
{
 u8 VAR_8 = FUNC_1(FUNC_10(VAR_4));

 FUNC_0(VAR_6 && !(VAR_6 & 7) && !(VAR_7 & 7) && VAR_7);

 if (!FUNC_3(VAR_8)) {
  FUNC_8(VAR_5, "QMAN_MCR isn't idle");
  FUNC_7(1);
 }


 FUNC_11(FUNC_6(0), VAR_6);





 FUNC_11(FUNC_6(1), VAR_6 + VAR_7 - 16);
 FUNC_9();
 FUNC_11(VAR_4, VAR_3);

 do {
  VAR_8 = FUNC_1(FUNC_10(VAR_4));
 } while (!FUNC_3(VAR_8));
 if (FUNC_5(VAR_8))
  return 0;
 if (FUNC_2(VAR_8))
  return -VAR_0;
 if (FUNC_4(VAR_8))
  return -VAR_1;
 FUNC_8(VAR_5, "Unexpected result from MCR_INIT_PFDR: %02x\n", VAR_8);
 return -VAR_2;
}
