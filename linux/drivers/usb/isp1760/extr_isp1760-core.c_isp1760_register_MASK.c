
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct isp1760_device {unsigned int devflags; int hcd; int regs; int rst_gpio; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,struct isp1760_device*) ;
 int FUNC_4 (struct device*,int *,int ) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct isp1760_device* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int *,int ,struct resource*,int,unsigned long,struct device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct isp1760_device*) ;
 int FUNC_10 (struct isp1760_device*,int,unsigned long) ;
 scalar_t__ FUNC_11 () ;

int FUNC_12(struct resource *VAR_8, int VAR_9, unsigned long VAR_10,
       struct device *VAR_11, unsigned int VAR_12)
{
 struct isp1760_device *VAR_13;
 bool VAR_14 = !(VAR_12 & VAR_7);
 int VAR_15;





 if ((!FUNC_0(VAR_0) || FUNC_11()) &&
     (!FUNC_0(VAR_1) || VAR_14))
  return -VAR_2;

 VAR_13 = FUNC_6(VAR_11, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->dev = VAR_11;
 VAR_13->devflags = VAR_12;

 VAR_13->rst_gpio = FUNC_4(VAR_11, ((void*)0), VAR_5);
 if (FUNC_1(VAR_13->rst_gpio))
  return FUNC_2(VAR_13->rst_gpio);

 VAR_13->regs = FUNC_5(VAR_11, VAR_8);
 if (FUNC_1(VAR_13->regs))
  return FUNC_2(VAR_13->regs);

 FUNC_9(VAR_13);

 if (FUNC_0(VAR_0) && !FUNC_11()) {
  VAR_15 = FUNC_7(&VAR_13->hcd, VAR_13->regs, VAR_8, VAR_9,
        VAR_10 | VAR_6, VAR_11);
  if (VAR_15 < 0)
   return VAR_15;
 }

 if (FUNC_0(VAR_1) && !VAR_14) {
  VAR_15 = FUNC_10(VAR_13, VAR_9, VAR_10);
  if (VAR_15 < 0) {
   FUNC_8(&VAR_13->hcd);
   return VAR_15;
  }
 }

 FUNC_3(VAR_11, VAR_13);

 return 0;
}
