
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct TYPE_5__ {int o_tei; int i_tei; } ;
struct TYPE_4__ {int tid; } ;
struct TYPE_6__ {TYPE_2__ v1; TYPE_1__ v0; } ;
struct pdp_ctx {scalar_t__ gtp_version; TYPE_3__ u; int dev; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct pdp_ctx*) ;
 int FUNC_1 (struct pdp_ctx*) ;
 struct pdp_ctx* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int ,struct pdp_ctx*,...) ;
 int FUNC_4 (struct pdp_ctx*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct pdp_ctx *VAR_6;
 int VAR_7 = 0;

 if (!VAR_5->attrs[VAR_1])
  return -VAR_0;

 FUNC_5();

 VAR_6 = FUNC_2(FUNC_7(VAR_4->sk), VAR_5->attrs);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto out_unlock;
 }

 if (VAR_6->gtp_version == VAR_2)
  FUNC_3(VAR_6->dev, "GTPv0-U: deleting tunnel id = %llx (pdp %p)\n",
      VAR_6->u.v0.tid, VAR_6);
 else if (VAR_6->gtp_version == VAR_3)
  FUNC_3(VAR_6->dev, "GTPv1-U: deleting tunnel id = %x/%x (pdp %p)\n",
      VAR_6->u.v1.i_tei, VAR_6->u.v1.o_tei, VAR_6);

 FUNC_4(VAR_6);

out_unlock:
 FUNC_6();
 return VAR_7;
}
