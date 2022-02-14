
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* ctx_base; } ;
struct bnx2i_endpoint {TYPE_1__ qp; TYPE_2__* hba; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_4__ {scalar_t__ mail_queue_access; scalar_t__ reg_base; int cnic_dev_type; int pcidev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct bnx2i_endpoint*,int ) ;
 int FUNC_2 (struct bnx2i_endpoint*) ;
 void* FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct bnx2i_endpoint *VAR_14)
{
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 resource_size_t VAR_20;

 VAR_15 = FUNC_2(VAR_14);

 if (FUNC_5(VAR_3, &VAR_14->hba->cnic_dev_type)) {
  VAR_20 = FUNC_4(VAR_14->hba->pcidev,
           VAR_5);
  VAR_16 = (1 << VAR_4) * (VAR_15 & 0x1FFFF);
  VAR_14->qp.ctx_base = FUNC_3(VAR_20 + VAR_16, 4);
  if (!VAR_14->qp.ctx_base)
   return -VAR_11;
  goto arm_cq;
 }

 if ((FUNC_5(VAR_2, &VAR_14->hba->cnic_dev_type)) &&
     (VAR_14->hba->mail_queue_access == VAR_1)) {
  VAR_19 = FUNC_0(VAR_14->hba, VAR_6);
  VAR_17 = VAR_19 & VAR_8;
  VAR_18 = (VAR_19 & VAR_7) >> 3;
  if (VAR_18)
   VAR_16 = VAR_10 + VAR_12 * VAR_13
      + VAR_0 *
      (((VAR_15 - VAR_17) / VAR_18) + 256);
  else
   VAR_16 = VAR_10 + (VAR_13 * VAR_15);
 } else

  VAR_16 = VAR_10 + (VAR_13 * VAR_15);

 VAR_14->qp.ctx_base = FUNC_3(VAR_14->hba->reg_base + VAR_16,
       VAR_13);
 if (!VAR_14->qp.ctx_base)
  return -VAR_11;

arm_cq:
 FUNC_1(VAR_14, VAR_9);
 return 0;
}
