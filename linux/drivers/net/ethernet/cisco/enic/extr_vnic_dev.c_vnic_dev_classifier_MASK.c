
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef void* u16 ;
struct vnic_dev {int pdev; } ;
struct filter_tlv {int length; int val; int type; } ;
struct TYPE_2__ {void* rq_idx; } ;
struct filter_action {TYPE_1__ u; int type; } ;
struct filter {int dummy; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct filter_tlv*,int ,int) ;
 struct filter_tlv* FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,struct filter_tlv*,int) ;
 int FUNC_3 (struct vnic_dev*,int ,int*,int*,int) ;

int FUNC_4(struct vnic_dev *VAR_9, u8 VAR_10, u16 *VAR_11,
   struct filter *VAR_12)
{
 u64 VAR_13, VAR_14;
 int VAR_15 = 1000;
 dma_addr_t VAR_16;
 int VAR_17 = -VAR_6;
 struct filter_tlv *VAR_18, *VAR_19;
 struct filter_action *VAR_20;
 u64 VAR_21;

 if (VAR_10 == VAR_0) {
  VAR_21 = sizeof(struct filter) +
      sizeof(struct filter_action) +
      2 * sizeof(struct filter_tlv);
  VAR_19 = FUNC_1(VAR_9->pdev, VAR_21, &VAR_16);
  if (!VAR_19)
   return -VAR_7;
  VAR_18 = VAR_19;
  VAR_13 = VAR_16;
  VAR_14 = VAR_21;
  FUNC_0(VAR_18, 0, VAR_21);
  VAR_18->type = VAR_3;
  VAR_18->length = sizeof(struct filter);
  *(struct filter *)&VAR_18->val = *VAR_12;

  VAR_18 = (struct filter_tlv *)((char *)VAR_18 +
         sizeof(struct filter_tlv) +
         sizeof(struct filter));

  VAR_18->type = VAR_2;
  VAR_18->length = sizeof(struct filter_action);
  VAR_20 = (struct filter_action *)&VAR_18->val;
  VAR_20->type = VAR_8;
  VAR_20->u.rq_idx = *VAR_11;

  VAR_17 = FUNC_3(VAR_9, VAR_4, &VAR_13, &VAR_14, VAR_15);
  *VAR_11 = (u16)VAR_13;
  FUNC_2(VAR_9->pdev, VAR_21, VAR_19, VAR_16);
 } else if (VAR_10 == VAR_1) {
  VAR_13 = *VAR_11;
  VAR_17 = FUNC_3(VAR_9, VAR_5, &VAR_13, &VAR_14, VAR_15);
 }

 return VAR_17;
}
