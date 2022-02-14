
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_5__ {int info1; } ;
struct TYPE_6__ {TYPE_2__ common; } ;
struct TYPE_4__ {int flags; } ;
struct htt_rx_desc {TYPE_3__ msdu_start; TYPE_1__ attention; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_8)
{
 struct htt_rx_desc *VAR_9;
 u32 VAR_10, VAR_11;
 bool VAR_12, VAR_13;
 bool VAR_14, VAR_15;
 bool VAR_16, VAR_17;

 VAR_9 = (void *)VAR_8->data - sizeof(*VAR_9);
 VAR_10 = FUNC_0(VAR_9->attention.flags);
 VAR_11 = FUNC_0(VAR_9->msdu_start.common.info1);

 VAR_12 = !!(VAR_11 & VAR_4);
 VAR_13 = !!(VAR_11 & VAR_5);
 VAR_14 = !!(VAR_11 & VAR_6);
 VAR_15 = !!(VAR_11 & VAR_7);
 VAR_16 = !(VAR_10 & VAR_2);
 VAR_17 = !(VAR_10 & VAR_3);

 if (!VAR_12 && !VAR_13)
  return VAR_0;
 if (!VAR_14 && !VAR_15)
  return VAR_0;
 if (!VAR_16)
  return VAR_0;
 if (!VAR_17)
  return VAR_0;

 return VAR_1;
}
