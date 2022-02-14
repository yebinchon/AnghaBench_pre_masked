
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct kwqe {int dummy; } ;
struct TYPE_3__ {int flags; int op_code; } ;
struct fcoe_kwqe_stat {void* stat_params_addr_hi; void* stat_params_addr_lo; TYPE_1__ hdr; } ;
struct bnx2fc_hba {TYPE_2__* cnic; scalar_t__ stats_buf_dma; } ;
struct TYPE_4__ {int (* submit_kwqes ) (TYPE_2__*,struct kwqe**,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fcoe_kwqe_stat*,int,int) ;
 int FUNC_1 (TYPE_2__*,struct kwqe**,int) ;

int FUNC_2(struct bnx2fc_hba *VAR_3)
{
 struct fcoe_kwqe_stat VAR_4;
 struct kwqe *VAR_5[2];
 int VAR_6 = 1;
 int VAR_7 = 0;

 FUNC_0(&VAR_4, 0x00, sizeof(struct fcoe_kwqe_stat));
 VAR_4.hdr.op_code = VAR_2;
 VAR_4.hdr.flags =
  (VAR_1 << VAR_0);

 VAR_4.stat_params_addr_lo = (u32) VAR_3->stats_buf_dma;
 VAR_4.stat_params_addr_hi = (u32) ((u64)VAR_3->stats_buf_dma >> 32);

 VAR_5[0] = (struct kwqe *) &VAR_4;

 if (VAR_3->cnic && VAR_3->cnic->submit_kwqes)
  VAR_7 = VAR_3->cnic->submit_kwqes(VAR_3->cnic, VAR_5, VAR_6);

 return VAR_7;
}
