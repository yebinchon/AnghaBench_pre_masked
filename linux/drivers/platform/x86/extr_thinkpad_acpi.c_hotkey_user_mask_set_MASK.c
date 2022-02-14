
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hotkey_mask_ff; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const) ;
 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_2(const u32 VAR_5)
{
 int VAR_6;



 if (!VAR_4.hotkey_mask_ff &&
     (VAR_5 == 0xffff || VAR_5 == 0xffffff ||
      VAR_5 == 0xffffffff)) {
  VAR_4.hotkey_mask_ff = 1;
  FUNC_1("setting the hotkey mask to 0x%08x is likely not the best way to go about it\n",
     VAR_5);
  FUNC_1("please consider using the driver defaults, and refer to up-to-date thinkpad-acpi documentation\n");
 }



 VAR_6 = FUNC_0((VAR_5 | VAR_1) & ~VAR_2);


 VAR_3 = VAR_5 & (VAR_0 | VAR_2);

 return VAR_6;
}
