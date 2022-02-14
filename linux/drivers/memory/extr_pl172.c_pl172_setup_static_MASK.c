
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl172_data {scalar_t__ base; } ;
struct device_node {int dummy; } ;
struct amba_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int FUNC_5 (int) ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int VAR_15 ;
 struct pl172_data* FUNC_7 (struct amba_device*) ;
 int FUNC_8 (struct amba_device*) ;
 int FUNC_9 (int *,char*,int,int) ;
 int FUNC_10 (int *,char*,...) ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct device_node*,char*,int*) ;
 int FUNC_13 (struct amba_device*,struct device_node*,char*,int ,int ,int) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct amba_device *VAR_16,
         struct device_node *VAR_17, u32 VAR_18)
{
 struct pl172_data *VAR_19 = FUNC_7(VAR_16);
 u32 VAR_20;
 int VAR_21;


 if (!FUNC_12(VAR_17, "mpmc,memory-width", &VAR_20)) {
  if (VAR_20 == 8) {
   VAR_20 = VAR_5;
  } else if (VAR_20 == 16) {
   VAR_20 = VAR_3;
  } else if (VAR_20 == 32) {
   VAR_20 = VAR_4;
  } else {
   FUNC_10(&VAR_16->dev, "invalid memory width cs%u\n", VAR_18);
   return -VAR_0;
  }
 } else {
  FUNC_10(&VAR_16->dev, "memory-width property required\n");
  return -VAR_0;
 }

 if (FUNC_11(VAR_17, "mpmc,async-page-mode"))
  VAR_20 |= VAR_9;

 if (FUNC_11(VAR_17, "mpmc,cs-active-high"))
  VAR_20 |= VAR_8;

 if (FUNC_11(VAR_17, "mpmc,byte-lane-low"))
  VAR_20 |= VAR_7;

 if (FUNC_11(VAR_17, "mpmc,extended-wait"))
  VAR_20 |= VAR_2;

 if (FUNC_8(VAR_16) == 0x172 &&
     FUNC_11(VAR_17, "mpmc,buffer-enable"))
  VAR_20 |= VAR_1;

 if (FUNC_11(VAR_17, "mpmc,write-protect"))
  VAR_20 |= VAR_6;

 FUNC_14(VAR_20, VAR_19->base + FUNC_0(VAR_18));
 FUNC_9(&VAR_16->dev, "mpmc static config cs%u: 0x%08x\n", VAR_18, VAR_20);


 VAR_21 = FUNC_13(VAR_16, VAR_17, "mpmc,write-enable-delay",
    FUNC_5(VAR_18),
    VAR_14, 1);
 if (VAR_21)
  goto fail;

 VAR_21 = FUNC_13(VAR_16, VAR_17, "mpmc,output-enable-delay",
    FUNC_1(VAR_18),
    VAR_10, 0);
 if (VAR_21)
  goto fail;

 VAR_21 = FUNC_13(VAR_16, VAR_17, "mpmc,read-access-delay",
    FUNC_3(VAR_18),
    VAR_12, 1);
 if (VAR_21)
  goto fail;

 VAR_21 = FUNC_13(VAR_16, VAR_17, "mpmc,page-mode-read-delay",
    FUNC_2(VAR_18),
    VAR_11, 1);
 if (VAR_21)
  goto fail;

 VAR_21 = FUNC_13(VAR_16, VAR_17, "mpmc,write-access-delay",
    FUNC_6(VAR_18),
    VAR_15, 2);
 if (VAR_21)
  goto fail;

 VAR_21 = FUNC_13(VAR_16, VAR_17, "mpmc,turn-round-delay",
    FUNC_4(VAR_18),
    VAR_13, 1);
 if (VAR_21)
  goto fail;

 return 0;
fail:
 FUNC_10(&VAR_16->dev, "failed to configure cs%u\n", VAR_18);
 return VAR_21;
}
