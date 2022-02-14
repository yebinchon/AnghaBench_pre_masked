
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_pioqueue {int mmio_base; } ;
struct b43legacy_pio_txpacket {int dummy; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_pio_txpacket*) ;

__attribute__((used)) static u16 FUNC_2(struct b43legacy_pioqueue *VAR_0,
      struct b43legacy_pio_txpacket *VAR_1)
{
 u16 VAR_2 = 0x0000;
 int VAR_3;





 switch (VAR_0->mmio_base) {
 case 131:
  break;
 case 130:
  VAR_2 = 0x1000;
  break;
 case 129:
  VAR_2 = 0x2000;
  break;
 case 128:
  VAR_2 = 0x3000;
  break;
 default:
  FUNC_0(1);
 }
 VAR_3 = FUNC_1(VAR_1);
 FUNC_0(!(((u16)VAR_3 & 0xF000) == 0x0000));
 VAR_2 |= (u16)VAR_3;

 return VAR_2;
}
