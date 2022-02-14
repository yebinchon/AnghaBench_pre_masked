
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_3__ {int initialized; int lock; struct platform_device* pdev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_3 ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct resource *VAR_5;
 int VAR_6 = -VAR_0, VAR_7;

 if (VAR_3 < 0 || VAR_3 > 2) {
  FUNC_0(&VAR_4->dev, "Bad mfgpt_reset_timers value: %i\n",
   VAR_3);
  goto done;
 }
 VAR_5 = FUNC_2(VAR_4, VAR_1, 0);
 if (!VAR_5) {
  FUNC_0(&VAR_4->dev, "can't fetch device resource info\n");
  goto done;
 }

 if (!FUNC_3(VAR_5->start, FUNC_4(VAR_5), VAR_4->name)) {
  FUNC_0(&VAR_4->dev, "can't request region\n");
  goto done;
 }


 VAR_2.base = VAR_5->start;
 VAR_2.pdev = VAR_4;
 FUNC_6(&VAR_2.lock);

 FUNC_1(&VAR_4->dev, "reserved resource region %pR\n", VAR_5);


 VAR_7 = FUNC_5(&VAR_2);
 FUNC_1(&VAR_4->dev, "%d MFGPT timers available\n", VAR_7);
 VAR_2.initialized = 1;
 return 0;

done:
 return VAR_6;
}
