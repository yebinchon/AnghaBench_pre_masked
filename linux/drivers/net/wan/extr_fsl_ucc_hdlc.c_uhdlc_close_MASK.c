
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ucc_tdm {int tdm_port; TYPE_1__* si_regs; } ;
struct ucc_hdlc_private {scalar_t__ hdlc_busy; TYPE_3__* ut_info; int uccf; scalar_t__ tsa; int napi; struct ucc_tdm* utdm; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {struct ucc_hdlc_private* priv; } ;
struct TYPE_6__ {int irq; int ucc_num; } ;
struct TYPE_7__ {TYPE_2__ uf_info; } ;
struct TYPE_5__ {int siglmr1_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ucc_hdlc_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct ucc_hdlc_private *VAR_6 = FUNC_0(VAR_5)->priv;
 struct ucc_tdm *VAR_7 = VAR_6->utdm;
 u32 VAR_8;

 FUNC_2(&VAR_6->napi);
 VAR_8 = FUNC_7(
    VAR_6->ut_info->uf_info.ucc_num);

 FUNC_5(VAR_4, VAR_8,
       (u8)VAR_3, 0);
 FUNC_5(VAR_2, VAR_8,
       (u8)VAR_3, 0);

 if (VAR_6->tsa)
  VAR_7->si_regs->siglmr1_h &= ~(0x1 << VAR_7->tdm_port);

 FUNC_6(VAR_6->uccf, VAR_0 | VAR_1);

 FUNC_1(VAR_6->ut_info->uf_info.irq, VAR_6);
 FUNC_4(VAR_5);
 FUNC_3(VAR_5);
 VAR_6->hdlc_busy = 0;

 return 0;
}
