
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned long VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(u32 VAR_3)
{
 static unsigned long VAR_4;
 static unsigned long VAR_5;

 FUNC_1();
 VAR_4++;
 if (VAR_4 == 1 || FUNC_3(VAR_1, VAR_5 + VAR_0)) {
  FUNC_0(VAR_2.fbdev->dev,
     "resetting (status %#010x,reset count %lu)\n",
     VAR_3, VAR_4);
  VAR_5 = VAR_1;
 }
 if (VAR_4 < 100) {
  FUNC_2();
 } else {
  VAR_4 = 0;
  FUNC_0(VAR_2.fbdev->dev,
   "too many reset attempts, giving up.\n");
 }
}
