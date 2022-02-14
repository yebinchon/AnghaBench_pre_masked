
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;

s32 FUNC_4(struct igc_hw *VAR_6)
{
 s32 VAR_7 = VAR_5;
 s32 VAR_8 = 0;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_0);
 VAR_9 |= VAR_1;
 FUNC_3(VAR_0, VAR_9);

 while (VAR_7) {
  if (!(FUNC_1(VAR_3) &
      VAR_4))
   break;
  FUNC_2(2000, 3000);
  VAR_7--;
 }

 if (!VAR_7) {
  FUNC_0("Master requests are pending.\n");
  VAR_8 = -VAR_2;
  goto out;
 }

out:
 return VAR_8;
}
