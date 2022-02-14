
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct net_device {int dummy; } ;
struct ionic_lif {struct net_device* netdev; } ;
struct TYPE_3__ {int opcode; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct ionic_admin_ctx {int work; TYPE_2__ cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ionic_lif*,struct ionic_admin_ctx*,int) ;
 int FUNC_1 (struct ionic_lif*,struct ionic_admin_ctx*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,char*,char const*,int ,int) ;
 unsigned long FUNC_4 (int *,int) ;

int FUNC_5(struct ionic_lif *VAR_2, struct ionic_admin_ctx *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 unsigned long VAR_5;
 const char *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (VAR_7) {
  VAR_6 = FUNC_2(VAR_3->cmd.cmd.opcode);
  FUNC_3(VAR_4, "Posting of %s (%d) failed: %d\n",
      VAR_6, VAR_3->cmd.cmd.opcode, VAR_7);
  return VAR_7;
 }

 VAR_5 = FUNC_4(&VAR_3->work,
      VAR_1 * (ulong)VAR_0);
 return FUNC_0(VAR_2, VAR_3, (VAR_5 == 0));
}
