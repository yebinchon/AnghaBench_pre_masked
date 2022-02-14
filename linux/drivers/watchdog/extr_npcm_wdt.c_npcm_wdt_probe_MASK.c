
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int min_timeout; int max_timeout; int timeout; int status; struct device* parent; int * ops; int * info; } ;
struct npcm_wdt {TYPE_1__ wdd; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 struct npcm_wdt* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct device*,int,int ,int ,char*,struct npcm_wdt*) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (TYPE_1__*,int ,struct device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct npcm_wdt *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->reg = FUNC_4(VAR_6, 0);
 if (FUNC_0(VAR_8->reg))
  return FUNC_1(VAR_8->reg);

 VAR_9 = FUNC_10(VAR_6, 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->wdd.info = &VAR_3;
 VAR_8->wdd.ops = &VAR_5;
 VAR_8->wdd.min_timeout = 1;
 VAR_8->wdd.max_timeout = 2750;
 VAR_8->wdd.parent = VAR_7;

 VAR_8->wdd.timeout = 86;
 FUNC_12(&VAR_8->wdd, 0, VAR_7);


 FUNC_8(&VAR_8->wdd, VAR_8->wdd.timeout);

 if (FUNC_7(&VAR_8->wdd)) {

  FUNC_9(&VAR_8->wdd);
  FUNC_11(VAR_2, &VAR_8->wdd.status);
 }

 VAR_10 = FUNC_5(VAR_7, VAR_9, VAR_4, 0, "watchdog",
          VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_7, &VAR_8->wdd);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_7, "NPCM watchdog driver enabled\n");

 return 0;
}
