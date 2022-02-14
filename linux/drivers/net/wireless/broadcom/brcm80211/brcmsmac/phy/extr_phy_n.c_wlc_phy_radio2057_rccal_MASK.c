
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int radiorev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct brcms_phy*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static u16 FUNC_4(struct brcms_phy *VAR_7)
{
 u16 VAR_8;
 int VAR_9;
 bool VAR_10;

 VAR_10 = ((VAR_7->pubpi.radiorev == 3)
       || (VAR_7->pubpi.radiorev == 4)
       || (VAR_7->pubpi.radiorev == 6));

 VAR_8 = 0;
 if (VAR_10) {
  FUNC_3(VAR_7, VAR_2, 0x61);
  FUNC_3(VAR_7, VAR_4, 0xc0);
 } else {
  FUNC_3(VAR_7, VAR_6, 0x61);

  FUNC_3(VAR_7, VAR_4, 0xe9);
 }
 FUNC_3(VAR_7, VAR_5, 0x6e);
 FUNC_3(VAR_7, VAR_3, 0x55);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_1(VAR_7, VAR_1);
  if (VAR_8 & 0x2)
   break;

  FUNC_2(500);
 }

 FUNC_3(VAR_7, VAR_3, 0x15);

 VAR_8 = 0;
 if (VAR_10) {
  FUNC_3(VAR_7, VAR_2, 0x69);
  FUNC_3(VAR_7, VAR_4, 0xb0);
 } else {
  FUNC_3(VAR_7, VAR_6, 0x69);

  FUNC_3(VAR_7, VAR_4, 0xd5);
 }
 FUNC_3(VAR_7, VAR_5, 0x6e);
 FUNC_3(VAR_7, VAR_3, 0x55);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_1(VAR_7, VAR_1);
  if (VAR_8 & 0x2)
   break;

  FUNC_2(500);
 }

 FUNC_3(VAR_7, VAR_3, 0x15);

 VAR_8 = 0;
 if (VAR_10) {
  FUNC_3(VAR_7, VAR_2, 0x73);

  FUNC_3(VAR_7, VAR_5, 0x28);
  FUNC_3(VAR_7, VAR_4, 0xb0);
 } else {
  FUNC_3(VAR_7, VAR_6, 0x73);
  FUNC_3(VAR_7, VAR_5, 0x6e);
  FUNC_3(VAR_7, VAR_4, 0x99);
 }
 FUNC_3(VAR_7, VAR_3, 0x55);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_1(VAR_7, VAR_1);
  if (VAR_8 & 0x2)
   break;

  FUNC_2(500);
 }

 if (FUNC_0(!(VAR_8 & 0x2), "HW error: radio calib4"))
  return 0;

 FUNC_3(VAR_7, VAR_3, 0x15);

 return VAR_8;
}
