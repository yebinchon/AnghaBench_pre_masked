
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct vnt_private {int bb_rx_conf; scalar_t__* bb_vga; scalar_t__ short_slot_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnt_private*,int ,int,scalar_t__*) ;
 int FUNC_1 (struct vnt_private*,int ,int,int) ;

int FUNC_2(struct vnt_private *VAR_1)
{
 int VAR_2 = 0;
 u8 VAR_3 = 0;

 if (VAR_1->short_slot_time)
  VAR_1->bb_rx_conf &= 0xdf;
 else
  VAR_1->bb_rx_conf |= 0x20;

 VAR_2 = FUNC_0(VAR_1, VAR_0, 0xe7, &VAR_3);
 if (VAR_2)
  goto end;

 if (VAR_3 == VAR_1->bb_vga[0])
  VAR_1->bb_rx_conf |= 0x20;

 VAR_2 = FUNC_1(VAR_1, VAR_0, 0x0a,
     VAR_1->bb_rx_conf);

end:
 return VAR_2;
}
