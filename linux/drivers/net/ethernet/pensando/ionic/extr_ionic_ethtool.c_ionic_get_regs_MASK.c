
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {TYPE_4__* ionic; } ;
struct ethtool_regs {int version; } ;
struct TYPE_7__ {TYPE_1__* dev_cmd_regs; TYPE_2__* dev_info_regs; } ;
struct TYPE_8__ {TYPE_3__ idev; } ;
struct TYPE_6__ {int words; } ;
struct TYPE_5__ {int words; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,unsigned int) ;
 struct ionic_lif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, struct ethtool_regs *VAR_4,
      void *VAR_5)
{
 struct ionic_lif *VAR_6 = FUNC_1(VAR_3);
 unsigned int VAR_7;

 VAR_4->version = VAR_1;

 VAR_7 = VAR_2 * sizeof(u32);
 FUNC_0(VAR_5, VAR_6->ionic->idev.dev_info_regs->words, VAR_7);

 VAR_7 = VAR_0 * sizeof(u32);
 FUNC_0(VAR_5, VAR_6->ionic->idev.dev_cmd_regs->words, VAR_7);
}
