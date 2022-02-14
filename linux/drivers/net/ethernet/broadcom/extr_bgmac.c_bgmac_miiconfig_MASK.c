
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bgmac {int feature_flags; void* mac_duplex; int mac_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bgmac*,int ) ;
 int FUNC_1 (struct bgmac*,int ,int) ;
 int FUNC_2 (struct bgmac*) ;
 int FUNC_3 (struct bgmac*,int ) ;

__attribute__((used)) static void FUNC_4(struct bgmac *VAR_10)
{
 if (VAR_10->feature_flags & VAR_5) {
  if (!(VAR_10->feature_flags & VAR_6)) {
   FUNC_1(VAR_10, VAR_0,
     FUNC_0(VAR_10, VAR_0) |
     0x40 | VAR_1);
  }
  VAR_10->mac_speed = VAR_9;
  VAR_10->mac_duplex = VAR_7;
  FUNC_2(VAR_10);
 } else {
  u8 VAR_11;

  VAR_11 = (FUNC_3(VAR_10, VAR_2) &
   VAR_3) >> VAR_4;
  if (VAR_11 == 0 || VAR_11 == 1) {
   VAR_10->mac_speed = VAR_8;
   VAR_10->mac_duplex = VAR_7;
   FUNC_2(VAR_10);
  }
 }
}
