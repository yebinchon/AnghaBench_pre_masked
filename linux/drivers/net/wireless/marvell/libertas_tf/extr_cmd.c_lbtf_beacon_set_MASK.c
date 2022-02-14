
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct lbtf_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_beacon_set {TYPE_1__ hdr; int beacon; void* len; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbtf_private*,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int *,int) ;

int FUNC_5(struct lbtf_private *VAR_3, struct sk_buff *VAR_4)
{
 struct cmd_ds_802_11_beacon_set VAR_5;
 int VAR_6;

 FUNC_2(VAR_1);

 if (VAR_4->len > VAR_2) {
  FUNC_3(VAR_1, "ret %d", -1);
  return -1;
 }
 VAR_6 = sizeof(VAR_5) - sizeof(VAR_5.beacon) + VAR_4->len;
 VAR_5.hdr.size = FUNC_0(VAR_6);
 VAR_5.len = FUNC_0(VAR_4->len);
 FUNC_4(VAR_5.beacon, (u8 *) VAR_4->data, VAR_4->len);

 FUNC_1(VAR_3, VAR_0, &VAR_5.hdr, VAR_6);

 FUNC_3(VAR_1, "ret %d", 0);
 return 0;
}
