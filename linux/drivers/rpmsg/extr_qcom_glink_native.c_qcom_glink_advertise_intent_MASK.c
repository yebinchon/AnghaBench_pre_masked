
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dummy; } ;
struct glink_core_rx_intent {int size; int id; } ;
struct glink_channel {int lcid; } ;
typedef int cmd ;
typedef void* __le32 ;
typedef void* __le16 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct qcom_glink*,struct command*,int,int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qcom_glink *VAR_1,
           struct glink_channel *VAR_2,
           struct glink_core_rx_intent *VAR_3)
{
 struct command {
  __le16 id;
  __le16 lcid;
  __le32 count;
  __le32 size;
  __le32 liid;
 } VAR_4;
 struct command VAR_5;

 VAR_5.id = FUNC_0(VAR_0);
 VAR_5.lcid = FUNC_0(VAR_2->lcid);
 VAR_5.count = FUNC_1(1);
 VAR_5.size = FUNC_1(VAR_3->size);
 VAR_5.liid = FUNC_1(VAR_3->id);

 FUNC_2(VAR_1, &VAR_5, sizeof(VAR_5), ((void*)0), 0, 1);

 return 0;
}
