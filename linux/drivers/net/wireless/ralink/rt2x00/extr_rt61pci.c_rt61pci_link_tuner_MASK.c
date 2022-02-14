
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {scalar_t__ curr_band; int intf_associated; } ;
struct link_qual {int rssi; int vgc_level; int false_cca; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,struct link_qual*,int) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_1,
          struct link_qual *VAR_2, const u32 VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;




 if (VAR_1->curr_band == VAR_0) {
  VAR_5 = 0x28;
  VAR_4 = 0x48;
  if (FUNC_0(VAR_1)) {
   VAR_5 += 0x10;
   VAR_4 += 0x10;
  }
 } else {
  VAR_5 = 0x20;
  VAR_4 = 0x40;
  if (FUNC_1(VAR_1)) {
   VAR_5 += 0x10;
   VAR_4 += 0x10;
  }
 }





 if (!VAR_1->intf_associated)
  goto dynamic_cca_tune;




 if (VAR_2->rssi >= -35) {
  FUNC_2(VAR_1, VAR_2, 0x60);
  return;
 }




 if (VAR_2->rssi >= -58) {
  FUNC_2(VAR_1, VAR_2, VAR_4);
  return;
 }




 if (VAR_2->rssi >= -66) {
  FUNC_2(VAR_1, VAR_2, VAR_5 + 0x10);
  return;
 }




 if (VAR_2->rssi >= -74) {
  FUNC_2(VAR_1, VAR_2, VAR_5 + 0x08);
  return;
 }





 VAR_4 -= 2 * (-74 - VAR_2->rssi);
 if (VAR_5 > VAR_4)
  VAR_4 = VAR_5;

 if (VAR_2->vgc_level > VAR_4) {
  FUNC_2(VAR_1, VAR_2, VAR_4);
  return;
 }

dynamic_cca_tune:





 if ((VAR_2->false_cca > 512) && (VAR_2->vgc_level < VAR_4))
  FUNC_2(VAR_1, VAR_2, ++VAR_2->vgc_level);
 else if ((VAR_2->false_cca < 100) && (VAR_2->vgc_level > VAR_5))
  FUNC_2(VAR_1, VAR_2, --VAR_2->vgc_level);
}
