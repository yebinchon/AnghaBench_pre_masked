
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

 VAR_2.hor_total = VAR_1->hor_total - 1;
 VAR_2.hor_addr = VAR_1->hor_addr - 1;
 VAR_2.hor_blank_start = VAR_1->hor_blank_start - 1;
 VAR_2.hor_blank_end = VAR_1->hor_blank_end - 1;
 VAR_2.hor_sync_start = VAR_1->hor_sync_start - 1;
 VAR_2.hor_sync_end = VAR_1->hor_sync_end - 1;
 VAR_2.ver_total = VAR_1->ver_total - 1;
 VAR_2.ver_addr = VAR_1->ver_addr - 1;
 VAR_2.ver_blank_start = VAR_1->ver_blank_start - 1;
 VAR_2.ver_blank_end = VAR_1->ver_blank_end - 1;
 VAR_2.ver_sync_start = VAR_1->ver_sync_start - 1;
 VAR_2.ver_sync_end = VAR_1->ver_sync_end - 1;

 FUNC_0(VAR_0, 0x50, VAR_2.hor_total & 0xFF);
 FUNC_0(VAR_0, 0x51, VAR_2.hor_addr & 0xFF);
 FUNC_0(VAR_0, 0x52, VAR_2.hor_blank_start & 0xFF);
 FUNC_0(VAR_0, 0x53, VAR_2.hor_blank_end & 0xFF);
 FUNC_0(VAR_0, 0x54, (VAR_2.hor_blank_start >> 8 & 0x07)
  | (VAR_2.hor_blank_end >> (8 - 3) & 0x38)
  | (VAR_2.hor_sync_start >> (8 - 6) & 0xC0));
 FUNC_1(VAR_0, 0x55, (VAR_2.hor_total >> 8 & 0x0F)
  | (VAR_2.hor_addr >> (8 - 4) & 0x70), 0x7F);
 FUNC_0(VAR_0, 0x56, VAR_2.hor_sync_start & 0xFF);
 FUNC_0(VAR_0, 0x57, VAR_2.hor_sync_end & 0xFF);
 FUNC_0(VAR_0, 0x58, VAR_2.ver_total & 0xFF);
 FUNC_0(VAR_0, 0x59, VAR_2.ver_addr & 0xFF);
 FUNC_0(VAR_0, 0x5A, VAR_2.ver_blank_start & 0xFF);
 FUNC_0(VAR_0, 0x5B, VAR_2.ver_blank_end & 0xFF);
 FUNC_0(VAR_0, 0x5C, (VAR_2.ver_blank_start >> 8 & 0x07)
  | (VAR_2.ver_blank_end >> (8 - 3) & 0x38)
  | (VAR_2.hor_sync_end >> (8 - 6) & 0x40)
  | (VAR_2.hor_sync_start >> (10 - 7) & 0x80));
 FUNC_0(VAR_0, 0x5D, (VAR_2.ver_total >> 8 & 0x07)
  | (VAR_2.ver_addr >> (8 - 3) & 0x38)
  | (VAR_2.hor_blank_end >> (11 - 6) & 0x40)
  | (VAR_2.hor_sync_start >> (11 - 7) & 0x80));
 FUNC_0(VAR_0, 0x5E, VAR_2.ver_sync_start & 0xFF);
 FUNC_0(VAR_0, 0x5F, (VAR_2.ver_sync_end & 0x1F)
  | (VAR_2.ver_sync_start >> (8 - 5) & 0xE0));
}
