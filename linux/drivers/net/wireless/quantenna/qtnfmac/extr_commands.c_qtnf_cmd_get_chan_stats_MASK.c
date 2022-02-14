
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_wmac {int bus; int macid; } ;
struct qtnf_chan_stats {int dummy; } ;
struct qlink_resp_get_chan_stats {int info; } ;
struct qlink_cmd_get_chan_stats {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct qtnf_chan_stats*,int ,size_t) ;
 int FUNC_6 (int ,struct sk_buff*,struct sk_buff**,int,size_t*) ;

int FUNC_7(struct qtnf_wmac *VAR_3, u16 VAR_4,
       struct qtnf_chan_stats *VAR_5)
{
 struct sk_buff *VAR_6, *VAR_7 = ((void*)0);
 struct qlink_cmd_get_chan_stats *VAR_8;
 struct qlink_resp_get_chan_stats *VAR_9;
 size_t VAR_10 = 0;
 int VAR_11 = 0;

 VAR_6 = FUNC_4(VAR_3->macid, VAR_2,
         VAR_1,
         sizeof(*VAR_8));
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_3->bus);

 VAR_8 = (struct qlink_cmd_get_chan_stats *)VAR_6->data;
 VAR_8->channel = FUNC_1(VAR_4);

 VAR_11 = FUNC_6(VAR_3->bus, VAR_6, &VAR_7,
           sizeof(*VAR_9), &VAR_10);
 if (VAR_11)
  goto out;

 VAR_9 = (struct qlink_resp_get_chan_stats *)VAR_7->data;
 VAR_11 = FUNC_5(VAR_5, VAR_9->info,
      VAR_10);

out:
 FUNC_3(VAR_3->bus);
 FUNC_0(VAR_7);

 return VAR_11;
}
