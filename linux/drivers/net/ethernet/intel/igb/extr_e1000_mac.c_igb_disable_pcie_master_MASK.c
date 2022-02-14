
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

s32 FUNC_4(struct e1000_hw *VAR_7)
{
 u32 VAR_8;
 s32 VAR_9 = VAR_5;
 s32 VAR_10 = 0;

 if (VAR_7->bus.type != VAR_6)
  goto out;

 VAR_8 = FUNC_1(VAR_0);
 VAR_8 |= VAR_1;
 FUNC_3(VAR_0, VAR_8);

 while (VAR_9) {
  if (!(FUNC_1(VAR_3) &
        VAR_4))
   break;
  FUNC_2(100);
  VAR_9--;
 }

 if (!VAR_9) {
  FUNC_0("Master requests are pending.\n");
  VAR_10 = -VAR_2;
  goto out;
 }

out:
 return VAR_10;
}
