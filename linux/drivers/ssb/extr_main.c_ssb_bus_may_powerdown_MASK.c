
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_chipcommon {TYPE_2__* dev; } ;
struct ssb_bus {scalar_t__ bustype; scalar_t__ powered_up; struct ssb_chipcommon chipco; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ssb_chipcommon*,int ) ;
 int FUNC_2 (struct ssb_bus*,int,int ) ;

int FUNC_3(struct ssb_bus *VAR_4)
{
 struct ssb_chipcommon *VAR_5;
 int VAR_6 = 0;




 if (VAR_4->bustype == VAR_0)
  goto out;

 VAR_5 = &VAR_4->chipco;

 if (!VAR_5->dev)
  goto out;
 if (VAR_5->dev->id.revision < 5)
  goto out;

 FUNC_1(VAR_5, VAR_1);
 VAR_6 = FUNC_2(VAR_4, VAR_3 | VAR_2, 0);
 if (VAR_6)
  goto error;
out:
 VAR_4->powered_up = 0;
 return VAR_6;
error:
 FUNC_0("Bus powerdown failed\n");
 goto out;
}
