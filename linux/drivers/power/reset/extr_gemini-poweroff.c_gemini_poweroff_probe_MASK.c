
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gemini_powercon {scalar_t__ base; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (struct device*,struct resource*) ;
 struct gemini_powercon* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int ,int ,char*,struct gemini_powercon*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct gemini_powercon* VAR_13 ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int VAR_14 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct resource *VAR_17;
 struct gemini_powercon *VAR_18;
 u32 VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_18 = FUNC_5(VAR_16, sizeof(*VAR_18), VAR_9);
 if (!VAR_18)
  return -VAR_2;

 VAR_17 = FUNC_8(VAR_15, VAR_10, 0);
 VAR_18->base = FUNC_4(VAR_16, VAR_17);
 if (FUNC_0(VAR_18->base))
  return FUNC_1(VAR_18->base);

 VAR_20 = FUNC_7(VAR_15, 0);
 if (!VAR_20)
  return -VAR_0;

 VAR_18->dev = VAR_16;

 VAR_19 = FUNC_9(VAR_18->base + VAR_7);
 VAR_19 &= 0xFFFFFF00U;
 if (VAR_19 != VAR_6) {
  FUNC_2(VAR_16, "wrong power controller ID: %08x\n",
   VAR_19);
  return -VAR_1;
 }







 VAR_19 = FUNC_9(VAR_18->base + VAR_5);
 VAR_19 |= VAR_3;
 FUNC_10(VAR_19, VAR_18->base + VAR_5);


 VAR_19 = FUNC_9(VAR_18->base + VAR_5);
 VAR_19 |= VAR_4;
 FUNC_10(VAR_19, VAR_18->base + VAR_5);


 VAR_19 = FUNC_9(VAR_18->base + VAR_8);
 while (VAR_19 & 0x70U)
  VAR_19 = FUNC_9(VAR_18->base + VAR_8);


 VAR_19 = FUNC_9(VAR_18->base + VAR_5);
 VAR_19 |= VAR_4;
 FUNC_10(VAR_19, VAR_18->base + VAR_5);

 VAR_21 = FUNC_6(VAR_16, VAR_20, VAR_11, 0,
          "poweroff", VAR_18);
 if (VAR_21)
  return VAR_21;

 VAR_14 = VAR_12;
 VAR_13 = VAR_18;

 FUNC_3(VAR_16, "Gemini poweroff driver registered\n");

 return 0;
}
