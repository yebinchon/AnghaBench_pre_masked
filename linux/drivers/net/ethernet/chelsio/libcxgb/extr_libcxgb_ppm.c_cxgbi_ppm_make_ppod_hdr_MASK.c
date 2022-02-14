
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int idx_clr_mask; } ;
struct cxgbi_ppm {TYPE_1__ tformat; } ;
struct cxgbi_pagepod_hdr {void* page_offset; void* max_offset; void* pgsz_tag_clr; scalar_t__ rsvd; void* vld_tid; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,int,unsigned int,unsigned int,unsigned int) ;

void FUNC_3(struct cxgbi_ppm *VAR_1, u32 VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        unsigned int VAR_5,
        struct cxgbi_pagepod_hdr *VAR_6)
{



 VAR_2 &= 0x3FFFFFFF;

 VAR_6->vld_tid = FUNC_1(VAR_0 | FUNC_0(VAR_3));

 VAR_6->rsvd = 0;
 VAR_6->pgsz_tag_clr = FUNC_1(VAR_2 & VAR_1->tformat.idx_clr_mask);
 VAR_6->max_offset = FUNC_1(VAR_5);
 VAR_6->page_offset = FUNC_1(VAR_4);

 FUNC_2("ippm: tag 0x%x, tid 0x%x, xfer %u, off %u.\n",
   VAR_2, VAR_3, VAR_5, VAR_4);
}
