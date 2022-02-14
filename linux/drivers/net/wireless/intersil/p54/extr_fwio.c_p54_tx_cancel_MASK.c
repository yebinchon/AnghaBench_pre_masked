
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct p54_txcancel {int req_id; } ;
struct p54_common {scalar_t__ rx_start; scalar_t__ rx_end; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_2 (struct p54_common*,struct sk_buff*) ;
 struct p54_txcancel* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct p54_common *VAR_5, __le32 VAR_6)
{
 struct sk_buff *VAR_7;
 struct p54_txcancel *VAR_8;
 u32 VAR_9 = FUNC_0(VAR_6);

 if (FUNC_4(VAR_9 < VAR_5->rx_start || VAR_9 > VAR_5->rx_end))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, VAR_4, sizeof(*VAR_8),
       VAR_3, VAR_2);
 if (FUNC_4(!VAR_7))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8));
 VAR_8->req_id = VAR_6;
 FUNC_2(VAR_5, VAR_7);
 return 0;
}
