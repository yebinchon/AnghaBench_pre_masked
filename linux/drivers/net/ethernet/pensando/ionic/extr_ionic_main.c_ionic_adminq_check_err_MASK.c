
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ionic_lif {struct net_device* netdev; } ;
struct TYPE_7__ {int opcode; } ;
struct TYPE_8__ {TYPE_3__ cmd; } ;
struct TYPE_5__ {scalar_t__ status; } ;
struct TYPE_6__ {TYPE_1__ comp; } ;
struct ionic_admin_ctx {TYPE_4__ cmd; TYPE_2__ comp; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_lif*) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,char*,char const*,int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ionic_lif *VAR_1,
      struct ionic_admin_ctx *VAR_2,
      bool VAR_3)
{
 struct net_device *VAR_4 = VAR_1->netdev;
 const char *VAR_5;
 const char *VAR_6;
 int VAR_7 = 0;

 if (VAR_2->comp.comp.status || VAR_3) {
  VAR_5 = FUNC_3(VAR_2->cmd.cmd.opcode);
  VAR_6 = FUNC_2(VAR_2->comp.comp.status);
  VAR_7 = VAR_3 ? -VAR_0 :
    FUNC_1(VAR_2->comp.comp.status);

  FUNC_4(VAR_4, "%s (%d) failed: %s (%d)\n",
      VAR_5, VAR_2->cmd.cmd.opcode,
      VAR_3 ? "TIMEOUT" : VAR_6, VAR_7);

  if (VAR_3)
   FUNC_0(VAR_1);
 }

 return VAR_7;
}
