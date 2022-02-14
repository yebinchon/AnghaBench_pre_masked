
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnt_private {int bb_rx_conf; scalar_t__ short_slot_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnt_private*,int ,int,int) ;

void FUNC_1(struct vnt_private *VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_1, VAR_0, 0xE7, VAR_2);


 if (VAR_1->short_slot_time)
  VAR_1->bb_rx_conf &= 0xdf;
 else
  VAR_1->bb_rx_conf |= 0x20;

 FUNC_0(VAR_1, VAR_0, 0x0a, VAR_1->bb_rx_conf);
}
