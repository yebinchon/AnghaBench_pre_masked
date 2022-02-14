
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dasd_device {int features; int state; TYPE_2__* discipline; TYPE_1__* cdev; struct dasd_block* block; } ;
struct dasd_block {int bp_block; int blocks; TYPE_3__* gdp; } ;
struct TYPE_6__ {int disk_name; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;






 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct dasd_device* FUNC_4 (unsigned long) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct dasd_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct seq_file*,char*,...) ;

__attribute__((used)) static int
FUNC_9(struct seq_file *VAR_2, void *VAR_3)
{
 struct dasd_device *VAR_4;
 struct dasd_block *VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_4((unsigned long) VAR_3 - 1);
 if (FUNC_0(VAR_4))
  return 0;
 if (VAR_4->block)
  VAR_5 = VAR_4->block;
 else {
  FUNC_5(VAR_4);
  return 0;
 }

 FUNC_8(VAR_2, "%s", FUNC_6(&VAR_4->cdev->dev));

 if (VAR_4->discipline != ((void*)0))
  FUNC_8(VAR_2, "(%s)", VAR_4->discipline->name);
 else
  FUNC_8(VAR_2, "(none)");

 if (VAR_5->gdp)
  FUNC_8(VAR_2, " at (%3d:%6d)",
      FUNC_1(FUNC_7(VAR_5->gdp)),
      FUNC_2(FUNC_7(VAR_5->gdp)));
 else
  FUNC_8(VAR_2, "  at (???:??????)");

 if (VAR_5->gdp)
  FUNC_8(VAR_2, " is %-8s", VAR_5->gdp->disk_name);
 else
  FUNC_8(VAR_2, " is ????????");

 VAR_6 = (VAR_4->features & VAR_0) ? "(ro)" : " ";
 FUNC_8(VAR_2, "%4s: ", VAR_6);

 switch (VAR_4->state) {
 case 131:
  FUNC_8(VAR_2, "new");
  break;
 case 132:
  FUNC_8(VAR_2, "detected");
  break;
 case 133:
  FUNC_8(VAR_2, "basic");
  break;
 case 128:
  FUNC_8(VAR_2, "unformatted");
  break;
 case 129:
 case 130:
  FUNC_8(VAR_2, "active ");
  if (FUNC_3(VAR_5->bp_block))
   FUNC_8(VAR_2, "n/f	 ");
  else
   FUNC_8(VAR_2,
       "at blocksize: %u, %lu blocks, %lu MB",
       VAR_5->bp_block, VAR_5->blocks,
       ((VAR_5->bp_block >> 9) *
        VAR_5->blocks) >> 11);
  break;
 default:
  FUNC_8(VAR_2, "no stat");
  break;
 }
 FUNC_5(VAR_4);
 if (VAR_1)
  FUNC_8(VAR_2, "(probeonly)");
 FUNC_8(VAR_2, "\n");
 return 0;
}
