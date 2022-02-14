
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct nand_chip {int options; } ;
struct fsmc_nand_data {int bank; int * dev_timings; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int * FUNC_1 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*,char*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5,
         struct fsmc_nand_data *VAR_6,
         struct nand_chip *VAR_7)
{
 struct device_node *VAR_8 = VAR_5->dev.of_node;
 u32 VAR_9;
 int VAR_10;

 VAR_7->options = 0;

 if (!FUNC_3(VAR_8, "bank-width", &VAR_9)) {
  if (VAR_9 == 2) {
   VAR_7->options |= VAR_3;
  } else if (VAR_9 != 1) {
   FUNC_0(&VAR_5->dev, "invalid bank-width %u\n", VAR_9);
   return -VAR_0;
  }
 }

 if (FUNC_2(VAR_8, "nand-skip-bbtscan", ((void*)0)))
  VAR_7->options |= VAR_4;

 VAR_6->dev_timings = FUNC_1(&VAR_5->dev,
      sizeof(*VAR_6->dev_timings),
      VAR_2);
 if (!VAR_6->dev_timings)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_8, "timings", (u8 *)VAR_6->dev_timings,
     sizeof(*VAR_6->dev_timings));
 if (VAR_10)
  VAR_6->dev_timings = ((void*)0);


 VAR_6->bank = 0;
 if (!FUNC_3(VAR_8, "bank", &VAR_9)) {
  if (VAR_9 > 3) {
   FUNC_0(&VAR_5->dev, "invalid bank %u\n", VAR_9);
   return -VAR_0;
  }
  VAR_6->bank = VAR_9;
 }
 return 0;
}
