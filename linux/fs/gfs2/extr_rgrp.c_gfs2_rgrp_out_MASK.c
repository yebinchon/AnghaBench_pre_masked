
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_rgrpd {int rd_flags; int rd_free; int rd_dinodes; scalar_t__ rd_addr; int rd_data; int rd_bitbytes; int rd_rgl; int rd_data0; int rd_igeneration; } ;
struct gfs2_rgrp {int rg_reserved; void* rg_crc; void* rg_bitbytes; void* rg_data; void* rg_data0; void* rg_igeneration; void* rg_skip; void* rg_dinodes; void* rg_free; void* rg_flags; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int ,void*) ;
 struct gfs2_rgrpd* FUNC_4 (struct gfs2_rgrpd*) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void FUNC_6(struct gfs2_rgrpd *VAR_1, void *VAR_2)
{
 struct gfs2_rgrpd *VAR_3 = FUNC_4(VAR_1);
 struct gfs2_rgrp *VAR_4 = VAR_2;
 u32 VAR_5;

 VAR_4->rg_flags = FUNC_0(VAR_1->rd_flags & ~VAR_0);
 VAR_4->rg_free = FUNC_0(VAR_1->rd_free);
 VAR_4->rg_dinodes = FUNC_0(VAR_1->rd_dinodes);
 if (VAR_3 == ((void*)0))
  VAR_4->rg_skip = 0;
 else if (VAR_3->rd_addr > VAR_1->rd_addr)
  VAR_4->rg_skip = FUNC_0(VAR_3->rd_addr - VAR_1->rd_addr);
 VAR_4->rg_igeneration = FUNC_1(VAR_1->rd_igeneration);
 VAR_4->rg_data0 = FUNC_1(VAR_1->rd_data0);
 VAR_4->rg_data = FUNC_0(VAR_1->rd_data);
 VAR_4->rg_bitbytes = FUNC_0(VAR_1->rd_bitbytes);
 VAR_4->rg_crc = 0;
 VAR_5 = FUNC_2(VAR_2, sizeof(struct gfs2_rgrp));
 VAR_4->rg_crc = FUNC_0(VAR_5);

 FUNC_5(&VAR_4->rg_reserved, 0, sizeof(VAR_4->rg_reserved));
 FUNC_3(VAR_1->rd_rgl, VAR_2);
}
