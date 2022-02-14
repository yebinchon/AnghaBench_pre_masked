
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc911x_platform_config {int phy_interface; int shift; int flags; int irq_type; int irq_polarity; int mac; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,int ,int ) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int*) ;

__attribute__((used)) static int FUNC_4(struct smsc911x_platform_config *VAR_10,
     struct device *VAR_11)
{
 int VAR_12;
 u32 VAR_13 = 0;
 int VAR_14;

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12 < 0)
  VAR_12 = VAR_2;
 VAR_10->phy_interface = VAR_12;

 FUNC_0(VAR_11, VAR_10->mac, VAR_1);

 VAR_14 = FUNC_3(VAR_11, "reg-io-width", &VAR_13);
 if (VAR_14 == -VAR_0)
  return VAR_14;
 if (!VAR_14 && VAR_13 == 4)
  VAR_10->flags |= VAR_9;
 else
  VAR_10->flags |= VAR_8;

 FUNC_3(VAR_11, "reg-shift", &VAR_10->shift);

 if (FUNC_2(VAR_11, "smsc,irq-active-high"))
  VAR_10->irq_polarity = VAR_5;

 if (FUNC_2(VAR_11, "smsc,irq-push-pull"))
  VAR_10->irq_type = VAR_6;

 if (FUNC_2(VAR_11, "smsc,force-internal-phy"))
  VAR_10->flags |= VAR_4;

 if (FUNC_2(VAR_11, "smsc,force-external-phy"))
  VAR_10->flags |= VAR_3;

 if (FUNC_2(VAR_11, "smsc,save-mac-address"))
  VAR_10->flags |= VAR_7;

 return 0;
}
