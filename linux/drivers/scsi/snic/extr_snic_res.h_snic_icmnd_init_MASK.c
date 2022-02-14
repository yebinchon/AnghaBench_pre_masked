
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {void* sense_addr; void* sense_len; void* sg_addr; void* data_len; int * cdb; int cdb_len; int lun_id; void* tgt_id; int flags; } ;
struct TYPE_4__ {TYPE_1__ icmnd; } ;
struct snic_host_req {TYPE_2__ u; int hdr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_6(struct snic_host_req *VAR_3, u32 VAR_4, u32 VAR_5, u64 VAR_6,
  u16 VAR_7, u64 VAR_8, u8 *VAR_9, u8 *VAR_10, u8 VAR_11,
  u32 VAR_12, u16 VAR_13, ulong VAR_14,
  dma_addr_t VAR_15, u32 VAR_16)
{
 FUNC_5(&VAR_3->hdr, VAR_2, 0, VAR_4, VAR_5, VAR_13,
   VAR_6);

 VAR_3->u.icmnd.flags = FUNC_0(VAR_7);
 VAR_3->u.icmnd.tgt_id = FUNC_2(VAR_8);
 FUNC_3(&VAR_3->u.icmnd.lun_id, VAR_9, VAR_0);
 VAR_3->u.icmnd.cdb_len = VAR_11;
 FUNC_4(VAR_3->u.icmnd.cdb, 0, VAR_1);
 FUNC_3(VAR_3->u.icmnd.cdb, VAR_10, VAR_11);
 VAR_3->u.icmnd.data_len = FUNC_1(VAR_12);
 VAR_3->u.icmnd.sg_addr = FUNC_2(VAR_14);
 VAR_3->u.icmnd.sense_len = FUNC_1(VAR_16);
 VAR_3->u.icmnd.sense_addr = FUNC_2(VAR_15);
}
