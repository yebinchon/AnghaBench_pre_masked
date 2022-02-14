
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_display_timing {int hor_total; int hor_addr; int hor_blank_start; int hor_blank_end; int hor_sync_start; int hor_sync_end; int ver_total; int ver_addr; int ver_blank_start; int ver_blank_end; int ver_sync_start; int ver_sync_end; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int) ;

void FUNC_2(const struct via_display_timing *VAR_1)
{
 struct via_display_timing VAR_2;

 VAR_2.hor_total = VAR_1->hor_total / 8 - 5;
 VAR_2.hor_addr = VAR_1->hor_addr / 8 - 1;
 VAR_2.hor_blank_start = VAR_1->hor_blank_start / 8 - 1;
 VAR_2.hor_blank_end = VAR_1->hor_blank_end / 8 - 1;
 VAR_2.hor_sync_start = VAR_1->hor_sync_start / 8;
 VAR_2.hor_sync_end = VAR_1->hor_sync_end / 8;
 VAR_2.ver_total = VAR_1->ver_total - 2;
 VAR_2.ver_addr = VAR_1->ver_addr - 1;
 VAR_2.ver_blank_start = VAR_1->ver_blank_start - 1;
 VAR_2.ver_blank_end = VAR_1->ver_blank_end - 1;
 VAR_2.ver_sync_start = VAR_1->ver_sync_start - 1;
 VAR_2.ver_sync_end = VAR_1->ver_sync_end - 1;


 FUNC_1(VAR_0, 0x11, 0x00, 0x80);

 FUNC_0(VAR_0, 0x00, VAR_2.hor_total & 0xFF);
 FUNC_0(VAR_0, 0x01, VAR_2.hor_addr & 0xFF);
 FUNC_0(VAR_0, 0x02, VAR_2.hor_blank_start & 0xFF);
 FUNC_1(VAR_0, 0x03, VAR_2.hor_blank_end & 0x1F, 0x1F);
 FUNC_0(VAR_0, 0x04, VAR_2.hor_sync_start & 0xFF);
 FUNC_1(VAR_0, 0x05, (VAR_2.hor_sync_end & 0x1F)
  | (VAR_2.hor_blank_end << (7 - 5) & 0x80), 0x9F);
 FUNC_0(VAR_0, 0x06, VAR_2.ver_total & 0xFF);
 FUNC_1(VAR_0, 0x07, (VAR_2.ver_total >> 8 & 0x01)
  | (VAR_2.ver_addr >> (8 - 1) & 0x02)
  | (VAR_2.ver_sync_start >> (8 - 2) & 0x04)
  | (VAR_2.ver_blank_start >> (8 - 3) & 0x08)
  | (VAR_2.ver_total >> (9 - 5) & 0x20)
  | (VAR_2.ver_addr >> (9 - 6) & 0x40)
  | (VAR_2.ver_sync_start >> (9 - 7) & 0x80), 0xEF);
 FUNC_1(VAR_0, 0x09, VAR_2.ver_blank_start >> (9 - 5) & 0x20,
  0x20);
 FUNC_0(VAR_0, 0x10, VAR_2.ver_sync_start & 0xFF);
 FUNC_1(VAR_0, 0x11, VAR_2.ver_sync_end & 0x0F, 0x0F);
 FUNC_0(VAR_0, 0x12, VAR_2.ver_addr & 0xFF);
 FUNC_0(VAR_0, 0x15, VAR_2.ver_blank_start & 0xFF);
 FUNC_0(VAR_0, 0x16, VAR_2.ver_blank_end & 0xFF);
 FUNC_1(VAR_0, 0x33, (VAR_2.hor_sync_start >> (8 - 4) & 0x10)
  | (VAR_2.hor_blank_end >> (6 - 5) & 0x20), 0x30);
 FUNC_1(VAR_0, 0x35, (VAR_2.ver_total >> 10 & 0x01)
  | (VAR_2.ver_sync_start >> (10 - 1) & 0x02)
  | (VAR_2.ver_addr >> (10 - 2) & 0x04)
  | (VAR_2.ver_blank_start >> (10 - 3) & 0x08), 0x0F);
 FUNC_1(VAR_0, 0x36, VAR_2.hor_total >> (8 - 3) & 0x08, 0x08);


 FUNC_1(VAR_0, 0x11, 0x80, 0x80);


 FUNC_1(VAR_0, 0x17, 0x00, 0x80);
 FUNC_1(VAR_0, 0x17, 0x80, 0x80);
}
