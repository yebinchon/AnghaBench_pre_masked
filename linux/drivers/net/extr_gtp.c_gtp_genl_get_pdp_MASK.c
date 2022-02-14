
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct pdp_ctx {int dummy; } ;
struct genl_info {int snd_portid; TYPE_1__* nlhdr; int snd_seq; int * attrs; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct pdp_ctx*) ;
 TYPE_2__ FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_2 (struct pdp_ctx*) ;
 int FUNC_3 (struct genl_info*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct sk_buff*,int ) ;
 struct pdp_ctx* FUNC_6 (int ,int *) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ,struct pdp_ctx*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct pdp_ctx *VAR_7 = ((void*)0);
 struct sk_buff *VAR_8;
 int VAR_9;

 if (!VAR_6->attrs[VAR_3])
  return -VAR_0;

 FUNC_9();

 VAR_7 = FUNC_6(FUNC_11(VAR_5->sk), VAR_6->attrs);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_2(VAR_7);
  goto err_unlock;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto err_unlock;
 }

 VAR_9 = FUNC_7(VAR_8, FUNC_1(VAR_5).portid,
     VAR_6->snd_seq, VAR_6->nlhdr->nlmsg_type, VAR_7);
 if (VAR_9 < 0)
  goto err_unlock_free;

 FUNC_10();
 return FUNC_5(FUNC_3(VAR_6), VAR_8, VAR_6->snd_portid);

err_unlock_free:
 FUNC_8(VAR_8);
err_unlock:
 FUNC_10();
 return VAR_9;
}
