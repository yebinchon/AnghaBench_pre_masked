
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mux_gpio {struct mux_chip* gpios; } ;
struct mux_chip {int ndescs; TYPE_1__* mux; int * ops; } ;
typedef int s32 ;
struct TYPE_2__ {int states; int idle_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mux_chip*) ;
 int VAR_3 ;
 int FUNC_1 (struct mux_chip*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,char*,int *) ;
 struct mux_chip* FUNC_6 (struct device*,char*,int ) ;
 struct mux_chip* FUNC_7 (struct device*,int,int) ;
 int FUNC_8 (struct device*,struct mux_chip*) ;
 int FUNC_9 (struct device*,char*) ;
 struct mux_gpio* FUNC_10 (struct mux_chip*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct mux_chip *VAR_7;
 struct mux_gpio *VAR_8;
 int VAR_9;
 s32 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_9(VAR_6, "mux");
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_7(VAR_6, 1, sizeof(*VAR_8));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_10(VAR_7);
 VAR_7->ops = &VAR_4;

 VAR_8->gpios = FUNC_6(VAR_6, "mux", VAR_2);
 if (FUNC_0(VAR_8->gpios)) {
  VAR_11 = FUNC_1(VAR_8->gpios);
  if (VAR_11 != -VAR_1)
   FUNC_3(VAR_6, "failed to get gpios\n");
  return VAR_11;
 }
 FUNC_2(VAR_9 != VAR_8->gpios->ndescs);
 VAR_7->mux->states = 1 << VAR_9;

 VAR_11 = FUNC_5(VAR_6, "idle-state", (u32 *)&VAR_10);
 if (VAR_11 >= 0 && VAR_10 != VAR_3) {
  if (VAR_10 < 0 || VAR_10 >= VAR_7->mux->states) {
   FUNC_3(VAR_6, "invalid idle-state %u\n", VAR_10);
   return -VAR_0;
  }

  VAR_7->mux->idle_state = VAR_10;
 }

 VAR_11 = FUNC_8(VAR_6, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_4(VAR_6, "%u-way mux-controller registered\n",
   VAR_7->mux->states);

 return 0;
}
