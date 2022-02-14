
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vnt_private {int bb_rx_conf; } ;






 int VAR_0 ;
 int FUNC_0 (struct vnt_private*,int ,int ,int ,int ,int *) ;

int FUNC_1(struct vnt_private *VAR_1, u8 VAR_2)
{
 switch (VAR_2) {
 case 129:
 case 128:
  break;
 case 131:
  VAR_1->bb_rx_conf &= 0xFC;
  break;
 case 130:
  VAR_1->bb_rx_conf &= 0xFE;
  VAR_1->bb_rx_conf |= 0x02;
  break;
 }

 return FUNC_0(VAR_1, VAR_0,
          (u16)VAR_2, 0, 0, ((void*)0));
}
