
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ htlo; scalar_t__ hthi; } ;
struct fs_enet_private {int ev; int ev_err; int ev_napi; TYPE_1__ scc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fs_enet_private*) ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4)
{
 struct fs_enet_private *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_5);

 VAR_5->scc.hthi = 0;
 VAR_5->scc.htlo = 0;

 VAR_5->ev_napi = VAR_3;
 VAR_5->ev = VAR_2 | VAR_0;
 VAR_5->ev_err = VAR_1;

 return 0;
}
