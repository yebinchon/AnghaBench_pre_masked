
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
typedef int u32 ;
struct snic_sg_desc {scalar_t__ _resvd; int len; void* addr; } ;
struct TYPE_3__ {void* sg_addr; int sg_cnt; } ;
struct TYPE_4__ {TYPE_1__ rpt_tgts; } ;
struct snic_host_req {TYPE_2__ u; int hdr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 struct snic_sg_desc* FUNC_3 (struct snic_host_req*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct snic_host_req *VAR_2, u32 VAR_3, u8 *VAR_4, u32 VAR_5,
       dma_addr_t VAR_6, ulong VAR_7)
{
 struct snic_sg_desc *VAR_8 = ((void*)0);


 FUNC_4(&VAR_2->hdr, VAR_1, 0, VAR_0, VAR_3,
   1, VAR_7);

 VAR_2->u.rpt_tgts.sg_cnt = FUNC_0(1);
 VAR_8 = FUNC_3(VAR_2);
 VAR_8[0].addr = FUNC_2(VAR_6);
 VAR_8[0].len = FUNC_1(VAR_5);
 VAR_8[0]._resvd = 0;
 VAR_2->u.rpt_tgts.sg_addr = FUNC_2((ulong)VAR_8);
}
