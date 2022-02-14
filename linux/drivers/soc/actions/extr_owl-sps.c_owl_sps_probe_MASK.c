
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int of_node; TYPE_1__* driver; } ;
struct platform_device {TYPE_2__ dev; } ;
struct owl_sps_info {int num_domains; } ;
struct TYPE_8__ {int num_domains; int domains; } ;
struct owl_sps {TYPE_3__ genpd_data; int domains; struct owl_sps_info const* info; TYPE_2__* dev; int base; } ;
struct of_device_id {struct owl_sps_info* data; } ;
struct TYPE_6__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct owl_sps* FUNC_3 (TYPE_2__*,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ,char*) ;
 struct of_device_id* FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (struct owl_sps*,int) ;
 int FUNC_8 (struct owl_sps*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 const struct of_device_id *VAR_6;
 const struct owl_sps_info *VAR_7;
 struct owl_sps *VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_5->dev.of_node) {
  FUNC_2(&VAR_5->dev, "no device node\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_6(VAR_5->dev.driver->of_match_table, &VAR_5->dev);
 if (!VAR_6 || !VAR_6->data) {
  FUNC_2(&VAR_5->dev, "unknown compatible or missing data\n");
  return -VAR_0;
 }

 VAR_7 = VAR_6->data;

 VAR_8 = FUNC_3(&VAR_5->dev,
      FUNC_8(VAR_8, VAR_4, VAR_7->num_domains),
      VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->base = FUNC_5(VAR_5->dev.of_node, 0, "owl-sps");
 if (FUNC_0(VAR_8->base)) {
  FUNC_2(&VAR_5->dev, "failed to map sps registers\n");
  return FUNC_1(VAR_8->base);
 }

 VAR_8->dev = &VAR_5->dev;
 VAR_8->info = VAR_7;
 VAR_8->genpd_data.domains = VAR_8->domains;
 VAR_8->genpd_data.num_domains = VAR_7->num_domains;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_domains; VAR_9++) {
  VAR_10 = FUNC_7(VAR_8, VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_5->dev.of_node, &VAR_8->genpd_data);
 if (VAR_10) {
  FUNC_2(&VAR_5->dev, "failed to add provider (%d)", VAR_10);
  return VAR_10;
 }

 return 0;
}
