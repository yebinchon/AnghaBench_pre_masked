
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct fsl_soc_die_attr {int die; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int regs; int little_endian; } ;
struct TYPE_5__ {char const* machine; void* revision; void* soc_id; void* family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct resource*) ;
 void* FUNC_3 (struct device*,int ,char*,...) ;
 TYPE_3__* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 struct fsl_soc_die_attr* FUNC_6 (int,int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct device_node*,char*) ;
 scalar_t__ FUNC_9 (int ,char*,char const**) ;
 int FUNC_10 (int ,char*,int ,char const**) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (char*,char const*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct device *VAR_10 = &VAR_8->dev;
 struct resource *VAR_11;
 const struct fsl_soc_die_attr *VAR_12;
 const char *VAR_13;
 u32 VAR_14;


 VAR_4 = FUNC_4(VAR_10, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->little_endian = FUNC_8(VAR_9, "little-endian");

 VAR_11 = FUNC_11(VAR_8, VAR_2, 0);
 VAR_4->regs = FUNC_2(VAR_10, VAR_11);
 if (FUNC_0(VAR_4->regs))
  return FUNC_1(VAR_4->regs);


 VAR_5 = FUNC_7("/");
 if (FUNC_9(VAR_5, "model", &VAR_13))
  FUNC_10(VAR_5, "compatible", 0, &VAR_13);
 if (VAR_13)
  VAR_7.machine = VAR_13;

 VAR_14 = FUNC_5();
 VAR_12 = FUNC_6(VAR_14, VAR_3);
 if (VAR_12) {
  VAR_7.family = FUNC_3(VAR_10, VAR_1,
           "QorIQ %s", VAR_12->die);
 } else {
  VAR_7.family = FUNC_3(VAR_10, VAR_1, "QorIQ");
 }
 if (!VAR_7.family)
  return -VAR_0;
 VAR_7.soc_id = FUNC_3(VAR_10, VAR_1,
          "svr:0x%08x", VAR_14);
 if (!VAR_7.soc_id)
  return -VAR_0;
 VAR_7.revision = FUNC_3(VAR_10, VAR_1, "%d.%d",
            (VAR_14 >> 4) & 0xf, VAR_14 & 0xf);
 if (!VAR_7.revision)
  return -VAR_0;

 VAR_6 = FUNC_13(&VAR_7);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_12("Machine: %s\n", VAR_7.machine);
 FUNC_12("SoC family: %s\n", VAR_7.family);
 FUNC_12("SoC ID: %s, Revision: %s\n",
  VAR_7.soc_id, VAR_7.revision);
 return 0;
}
