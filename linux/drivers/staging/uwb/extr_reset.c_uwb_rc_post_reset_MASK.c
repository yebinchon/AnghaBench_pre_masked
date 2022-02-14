
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev_addr; int mac_addr; } ;
struct uwb_rc {int (* start ) (struct uwb_rc*) ;TYPE_1__ uwb_dev; } ;


 int FUNC_0 (struct uwb_rc*) ;
 int FUNC_1 (struct uwb_rc*,int *) ;
 int FUNC_2 (struct uwb_rc*,int *) ;

int FUNC_3(struct uwb_rc *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->start(VAR_0);
 if (VAR_1)
  goto out;
 VAR_1 = FUNC_2(VAR_0, &VAR_0->uwb_dev.mac_addr);
 if (VAR_1)
  goto out;
 VAR_1 = FUNC_1(VAR_0, &VAR_0->uwb_dev.dev_addr);
 if (VAR_1)
  goto out;
out:
 return VAR_1;
}
