
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfp_flower_cmsg_merge_hint {int count; TYPE_1__* flow; } ;
struct nfp_fl_payload {int dummy; } ;
struct nfp_app {int dummy; } ;
struct TYPE_2__ {int host_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct nfp_flower_cmsg_merge_hint* FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nfp_app*,char*,...) ;
 struct nfp_fl_payload* FUNC_4 (struct nfp_app*,int ) ;
 int FUNC_5 (struct nfp_app*,struct nfp_fl_payload*,struct nfp_fl_payload*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 unsigned int FUNC_8 (struct nfp_flower_cmsg_merge_hint*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct nfp_app *VAR_2, struct sk_buff *VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_3);
 struct nfp_flower_cmsg_merge_hint *VAR_5;
 struct nfp_fl_payload *VAR_6[2];
 int VAR_7, VAR_8, VAR_9;

 VAR_5 = FUNC_1(VAR_3);

 VAR_9 = VAR_5->count + 1;

 if (VAR_4 < FUNC_8(VAR_5, VAR_1, VAR_9)) {
  FUNC_3(VAR_2, "Merge hint ctrl msg too short - %d bytes but expect %zd\n",
         VAR_4, FUNC_8(VAR_5, VAR_1, VAR_9));
  return;
 }

 if (VAR_9 != 2) {
  FUNC_3(VAR_2, "Merge hint contains %d flows - two are expected\n",
         VAR_9);
  return;
 }

 FUNC_6();
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  u32 VAR_10 = FUNC_0(VAR_5->flow[VAR_8].host_ctx);

  VAR_6[VAR_8] = FUNC_4(VAR_2, VAR_10);
  if (!VAR_6[VAR_8]) {
   FUNC_3(VAR_2, "Invalid flow in merge hint\n");
   goto err_rtnl_unlock;
  }
 }

 VAR_7 = FUNC_5(VAR_2, VAR_6[0], VAR_6[1]);

 if (VAR_7 == -VAR_0)
  FUNC_3(VAR_2, "Flow merge memory fail.\n");

err_rtnl_unlock:
 FUNC_7();
}
