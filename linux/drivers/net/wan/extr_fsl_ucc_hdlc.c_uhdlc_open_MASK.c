
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct ucc_tdm {int tdm_port; TYPE_3__* si_regs; } ;
struct ucc_hdlc_private {int hdlc_busy; int napi; int ndev; scalar_t__ tsa; int uccf; TYPE_2__* ut_info; struct ucc_tdm* utdm; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {struct ucc_hdlc_private* priv; } ;
typedef TYPE_4__ hdlc_device ;
struct TYPE_8__ {int siglmr1_h; } ;
struct TYPE_6__ {int ucc_num; int irq; } ;
struct TYPE_7__ {TYPE_1__ uf_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,char*,struct ucc_hdlc_private*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6)
{
 u32 VAR_7;
 hdlc_device *VAR_8 = FUNC_0(VAR_6);
 struct ucc_hdlc_private *VAR_9 = VAR_8->priv;
 struct ucc_tdm *VAR_10 = VAR_9->utdm;

 if (VAR_9->hdlc_busy != 1) {
  if (FUNC_7(VAR_9->ut_info->uf_info.irq,
    VAR_5, 0, "hdlc", VAR_9))
   return -VAR_2;

  VAR_7 = FUNC_9(
     VAR_9->ut_info->uf_info.ucc_num);

  FUNC_6(VAR_4, VAR_7,
        VAR_3, 0);

  FUNC_8(VAR_9->uccf, VAR_0 | VAR_1);


  if (VAR_9->tsa)
   VAR_10->si_regs->siglmr1_h |= (0x1 << VAR_10->tdm_port);

  VAR_9->hdlc_busy = 1;
  FUNC_4(VAR_9->ndev);
  FUNC_2(&VAR_9->napi);
  FUNC_3(VAR_6);
  FUNC_5(VAR_6);
  FUNC_1(VAR_6);
 }

 return 0;
}
