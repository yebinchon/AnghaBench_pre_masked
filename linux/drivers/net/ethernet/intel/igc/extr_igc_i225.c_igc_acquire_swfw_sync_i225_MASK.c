
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct igc_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct igc_hw*) ;
 int FUNC_2 (struct igc_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

s32 FUNC_6(struct igc_hw *VAR_2, u16 VAR_3)
{
 s32 VAR_4 = 0, VAR_5 = 200;
 u32 VAR_6 = VAR_3 << 16;
 u32 VAR_7 = VAR_3;
 s32 VAR_8 = 0;
 u32 VAR_9;

 while (VAR_4 < VAR_5) {
  if (FUNC_1(VAR_2)) {
   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_9 = FUNC_4(VAR_1);
  if (!(VAR_9 & (VAR_6 | VAR_7)))
   break;


  FUNC_2(VAR_2);
  FUNC_3(5);
  VAR_4++;
 }

 if (VAR_4 == VAR_5) {
  FUNC_0("Driver can't access resource, SW_FW_SYNC timeout.\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_9 |= VAR_7;
 FUNC_5(VAR_1, VAR_9);

 FUNC_2(VAR_2);
out:
 return VAR_8;
}
