
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;
struct link_qual {int vgc_level; int rssi; int vgc_level_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*,int,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct rt2x00_dev *VAR_4,
      struct link_qual *VAR_5, u8 VAR_6)
{
 if (VAR_5->vgc_level != VAR_6) {
  if (FUNC_2(VAR_4, VAR_0) ||
      FUNC_2(VAR_4, VAR_1) ||
      FUNC_2(VAR_4, VAR_2)) {
   FUNC_1(VAR_4, 66,
             VAR_6);
  } else if (FUNC_2(VAR_4, VAR_3)) {
   FUNC_0(VAR_4, 83, VAR_5->rssi > -65 ? 0x4a : 0x7a);
   FUNC_1(VAR_4, 66, VAR_6);
  } else {
   FUNC_0(VAR_4, 66, VAR_6);
  }

  VAR_5->vgc_level = VAR_6;
  VAR_5->vgc_level_reg = VAR_6;
 }
}
