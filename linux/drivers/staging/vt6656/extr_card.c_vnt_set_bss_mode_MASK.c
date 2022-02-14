
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnt_private {scalar_t__ rf_type; scalar_t__ bb_type; int* bb_vga; int packet_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct vnt_private*,int ,int,int) ;
 int FUNC_1 (struct vnt_private*) ;
 int FUNC_2 (struct vnt_private*,scalar_t__) ;
 int FUNC_3 (struct vnt_private*,int ) ;
 int FUNC_4 (struct vnt_private*,int) ;
 int FUNC_5 (struct vnt_private*) ;

void FUNC_6(struct vnt_private *VAR_5)
{
 if (VAR_5->rf_type == VAR_4 && VAR_5->bb_type == VAR_0)
  FUNC_2(VAR_5, VAR_2);
 else
  FUNC_2(VAR_5, VAR_5->bb_type);

 VAR_5->packet_type = FUNC_1(VAR_5);

 if (VAR_5->bb_type == VAR_0)
  FUNC_0(VAR_5, VAR_3, 0x88, 0x03);
 else if (VAR_5->bb_type == VAR_1)
  FUNC_0(VAR_5, VAR_3, 0x88, 0x02);
 else if (VAR_5->bb_type == VAR_2)
  FUNC_0(VAR_5, VAR_3, 0x88, 0x08);

 FUNC_5(VAR_5);
 FUNC_3(VAR_5, (u8)VAR_5->bb_type);

 if (VAR_5->bb_type == VAR_0) {
  if (VAR_5->rf_type == VAR_4) {
   VAR_5->bb_vga[0] = 0x20;

   FUNC_0(VAR_5, VAR_3,
        0xe7, VAR_5->bb_vga[0]);
  }

  VAR_5->bb_vga[2] = 0x10;
  VAR_5->bb_vga[3] = 0x10;
 } else {
  if (VAR_5->rf_type == VAR_4) {
   VAR_5->bb_vga[0] = 0x1c;

   FUNC_0(VAR_5, VAR_3,
        0xe7, VAR_5->bb_vga[0]);
  }

  VAR_5->bb_vga[2] = 0x0;
  VAR_5->bb_vga[3] = 0x0;
 }

 FUNC_4(VAR_5, VAR_5->bb_vga[0]);
}
