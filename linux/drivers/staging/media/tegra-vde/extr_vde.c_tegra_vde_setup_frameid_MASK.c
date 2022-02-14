
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct video_frame {int y_addr; int cb_addr; int cr_addr; } ;
struct tegra_vde {int frameid; } ;


 int FUNC_0 (struct tegra_vde*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct tegra_vde *VAR_0,
        struct video_frame *VAR_1,
        unsigned int VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_1 ? VAR_1->y_addr : 0x6CDEAD00;
 u32 VAR_6 = VAR_1 ? VAR_1->cb_addr : 0x6CDEAD00;
 u32 VAR_7 = VAR_1 ? VAR_1->cr_addr : 0x6CDEAD00;
 u32 VAR_8 = VAR_1 ? ((VAR_3 << 16) | VAR_4) : 0;
 u32 VAR_9 = VAR_1 ? ((((VAR_3 + 1) >> 1) << 6) | 1) : 0;

 FUNC_0(VAR_0, VAR_5 >> 8, VAR_0->frameid, 0x000 + VAR_2 * 4);
 FUNC_0(VAR_0, VAR_6 >> 8, VAR_0->frameid, 0x100 + VAR_2 * 4);
 FUNC_0(VAR_0, VAR_7 >> 8, VAR_0->frameid, 0x180 + VAR_2 * 4);
 FUNC_0(VAR_0, VAR_8, VAR_0->frameid, 0x080 + VAR_2 * 4);
 FUNC_0(VAR_0, VAR_9, VAR_0->frameid, 0x280 + VAR_2 * 4);
}
