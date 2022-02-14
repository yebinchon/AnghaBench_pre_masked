
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct visornic_devdata {int old_flags; TYPE_3__* dev; } ;
struct TYPE_4__ {int enable; struct net_device* context; } ;
struct TYPE_5__ {TYPE_1__ enbdis; int type; } ;
struct uiscmdrsp {TYPE_2__ net; int cmdtype; } ;
struct net_device {int flags; } ;
struct TYPE_6__ {int visorchannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uiscmdrsp*) ;
 struct uiscmdrsp* FUNC_1 (int ,int ) ;
 struct visornic_devdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,struct uiscmdrsp*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6)
{
 struct uiscmdrsp *VAR_7;
 struct visornic_devdata *VAR_8 = FUNC_2(VAR_6);
 int VAR_9 = 0;

 if (VAR_8->old_flags == VAR_6->flags)
  return;

 if ((VAR_6->flags & VAR_2) ==
     (VAR_8->old_flags & VAR_2))
  goto out_save_flags;

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (!VAR_7)
  return;
 VAR_7->cmdtype = VAR_0;
 VAR_7->net.type = VAR_4;
 VAR_7->net.enbdis.context = VAR_6;
 VAR_7->net.enbdis.enable =
  VAR_6->flags & VAR_2;
 VAR_9 = FUNC_3(VAR_8->dev->visorchannel,
     VAR_3,
     VAR_7);
 FUNC_0(VAR_7);
 if (VAR_9)
  return;

out_save_flags:
 VAR_8->old_flags = VAR_6->flags;
}
