
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int cmd; } ;
struct TYPE_3__ {void* info; void* event_code; void* trigger_irq; void* rgid; TYPE_2__ hdr; } ;
union ism_sig_ieq {TYPE_1__ request; } ;
typedef void* u64 ;
typedef void* u32 ;
struct smcd_dev {struct ism_dev* priv; } ;
struct ism_dev {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ism_dev*,union ism_sig_ieq*) ;
 int FUNC_1 (union ism_sig_ieq*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smcd_dev *VAR_1, u64 VAR_2, u32 VAR_3,
     u32 VAR_4, u64 VAR_5)
{
 struct ism_dev *VAR_6 = VAR_1->priv;
 union ism_sig_ieq VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.request.hdr.cmd = VAR_0;
 VAR_7.request.hdr.len = sizeof(VAR_7.request);

 VAR_7.request.rgid = VAR_2;
 VAR_7.request.trigger_irq = VAR_3;
 VAR_7.request.event_code = VAR_4;
 VAR_7.request.info = VAR_5;

 return FUNC_0(VAR_6, &VAR_7);
}
