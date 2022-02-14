
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int cmd; } ;
struct TYPE_3__ {int dmb_tok; TYPE_2__ hdr; } ;
union ism_unreg_dmb {TYPE_1__ request; } ;
struct smcd_dmb {int dmb_tok; } ;
struct smcd_dev {struct ism_dev* priv; } ;
struct ism_dev {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ism_dev*,union ism_unreg_dmb*) ;
 int FUNC_1 (struct ism_dev*,struct smcd_dmb*) ;
 int FUNC_2 (union ism_unreg_dmb*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct smcd_dev *VAR_2, struct smcd_dmb *VAR_3)
{
 struct ism_dev *VAR_4 = VAR_2->priv;
 union ism_unreg_dmb VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.request.hdr.cmd = VAR_1;
 VAR_5.request.hdr.len = sizeof(VAR_5.request);

 VAR_5.request.dmb_tok = VAR_3->dmb_tok;

 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_6 && VAR_6 != VAR_0)
  goto out;

 FUNC_1(VAR_4, VAR_3);
out:
 return VAR_6;
}
