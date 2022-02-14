
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
struct TYPE_3__ {int lun_id; int tgt_id; int req_id; int flags; int tm_type; } ;
struct TYPE_4__ {TYPE_1__ itmf; } ;
struct snic_host_req {TYPE_2__ u; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_5(struct snic_host_req *VAR_2, u32 VAR_3, u32 VAR_4, ulong VAR_5,
        u16 VAR_6, u32 VAR_7, u64 VAR_8, u8 *VAR_9, u8 VAR_10)
{
 FUNC_4(&VAR_2->hdr, VAR_1, 0, VAR_3, VAR_4, 0, VAR_5);

 VAR_2->u.itmf.tm_type = VAR_10;
 VAR_2->u.itmf.flags = FUNC_0(VAR_6);

 VAR_2->u.itmf.req_id = FUNC_1(VAR_7);
 VAR_2->u.itmf.tgt_id = FUNC_2(VAR_8);
 FUNC_3(&VAR_2->u.itmf.lun_id, VAR_9, VAR_0);
}
