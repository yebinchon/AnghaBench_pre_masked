
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_hardware {int shortslot; int chanspec; int LRL; int SRL; int LFBL; int SFBL; struct brcms_c_info* wlc; } ;
struct brcms_c_info {int defmacintmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct brcms_hardware *VAR_5)
{
 struct brcms_c_info *VAR_6 = VAR_5->wlc;


 VAR_6->defmacintmask = VAR_0;


 VAR_5->shortslot = 0;

 VAR_5->SFBL = VAR_4;
 VAR_5->LFBL = VAR_2;


 VAR_5->SRL = VAR_3;
 VAR_5->LRL = VAR_1;
 VAR_5->chanspec = FUNC_0(1);
}
