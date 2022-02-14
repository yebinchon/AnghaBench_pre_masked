
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resetMemory; scalar_t__ setAllEngOff; scalar_t__ powerMode; scalar_t__ master_clk; scalar_t__ mem_clk; scalar_t__ chip_clk; } ;
struct sm750_dev {int nocrt; scalar_t__ revid; int fb_count; void* dataflow; TYPE_2__* pdev; int pnltype; TYPE_1__ initParm; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*) ;
 char** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static void FUNC_5(struct sm750_dev *VAR_10, char *VAR_11)
{
 char *VAR_12;
 int VAR_13;

 VAR_13 = 0;

 VAR_10->initParm.chip_clk = 0;
 VAR_10->initParm.mem_clk = 0;
 VAR_10->initParm.master_clk = 0;
 VAR_10->initParm.powerMode = 0;
 VAR_10->initParm.setAllEngOff = 0;
 VAR_10->initParm.resetMemory = 1;


 VAR_2 = 3;

 if (!VAR_11 || !*VAR_11) {
  FUNC_1(&VAR_10->pdev->dev, "no specific g_option.\n");
  goto NO_PARAM;
 }

 while ((VAR_12 = FUNC_4(&VAR_11, ":")) != ((void*)0) && *VAR_12 != 0) {
  FUNC_0(&VAR_10->pdev->dev, "opt=%s\n", VAR_12);
  FUNC_0(&VAR_10->pdev->dev, "src=%s\n", VAR_11);

  if (!FUNC_3(VAR_12, "swap", FUNC_2("swap"))) {
   VAR_13 = 1;
  } else if (!FUNC_3(VAR_12, "nocrt", FUNC_2("nocrt"))) {
   VAR_10->nocrt = 1;
  } else if (!FUNC_3(VAR_12, "36bit", FUNC_2("36bit"))) {
   VAR_10->pnltype = VAR_4;
  } else if (!FUNC_3(VAR_12, "18bit", FUNC_2("18bit"))) {
   VAR_10->pnltype = VAR_5;
  } else if (!FUNC_3(VAR_12, "24bit", FUNC_2("24bit"))) {
   VAR_10->pnltype = VAR_3;
  } else if (!FUNC_3(VAR_12, "nohwc0", FUNC_2("nohwc0"))) {
   VAR_2 &= ~0x1;
  } else if (!FUNC_3(VAR_12, "nohwc1", FUNC_2("nohwc1"))) {
   VAR_2 &= ~0x2;
  } else if (!FUNC_3(VAR_12, "nohwc", FUNC_2("nohwc"))) {
   VAR_2 = 0;
  } else {
   if (!VAR_1[0]) {
    VAR_1[0] = VAR_12;
    FUNC_0(&VAR_10->pdev->dev,
      "find fbmode0 : %s\n", VAR_1[0]);
   } else if (!VAR_1[1]) {
    VAR_1[1] = VAR_12;
    FUNC_0(&VAR_10->pdev->dev,
      "find fbmode1 : %s\n", VAR_1[1]);
   } else {
    FUNC_1(&VAR_10->pdev->dev, "How many view you wann set?\n");
   }
  }
 }

NO_PARAM:
 if (VAR_10->revid != VAR_0) {
  if (VAR_10->fb_count > 1) {
   if (VAR_13)
    VAR_10->dataflow = VAR_7;
   else
    VAR_10->dataflow = VAR_6;
  } else {
   if (VAR_13)
    VAR_10->dataflow = VAR_9;
   else
    VAR_10->dataflow = VAR_8;
  }
 } else {

  VAR_10->dataflow = VAR_9;

  VAR_10->nocrt = 0;
 }
}
