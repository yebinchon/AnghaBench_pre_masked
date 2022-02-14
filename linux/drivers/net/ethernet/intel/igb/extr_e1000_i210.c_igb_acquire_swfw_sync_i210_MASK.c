
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

s32 FUNC_6(struct e1000_hw *VAR_2, u16 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = VAR_3;
 u32 VAR_6 = VAR_3 << 16;
 s32 VAR_7 = 0;
 s32 VAR_8 = 0, VAR_9 = 200;

 while (VAR_8 < VAR_9) {
  if (FUNC_1(VAR_2)) {
   VAR_7 = -VAR_0;
   goto out;
  }

  VAR_4 = FUNC_4(VAR_1);
  if (!(VAR_4 & (VAR_6 | VAR_5)))
   break;


  FUNC_2(VAR_2);
  FUNC_3(5);
  VAR_8++;
 }

 if (VAR_8 == VAR_9) {
  FUNC_0("Driver can't access resource, SW_FW_SYNC timeout.\n");
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_4 |= VAR_5;
 FUNC_5(VAR_1, VAR_4);

 FUNC_2(VAR_2);
out:
 return VAR_7;
}
