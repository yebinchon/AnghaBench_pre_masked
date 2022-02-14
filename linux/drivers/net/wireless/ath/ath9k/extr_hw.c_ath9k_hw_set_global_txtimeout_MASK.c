
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int globaltxtimeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int ,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static bool FUNC_3(struct ath_hw *VAR_3, u32 VAR_4)
{
 if (VAR_4 > 0xFFFF) {
  FUNC_2(FUNC_1(VAR_3), VAR_2, "bad global tx timeout %u\n",
   VAR_4);
  VAR_3->globaltxtimeout = (u32) -1;
  return 0;
 } else {
  FUNC_0(VAR_3, VAR_0, VAR_1, VAR_4);
  VAR_3->globaltxtimeout = VAR_4;
  return 1;
 }
}
