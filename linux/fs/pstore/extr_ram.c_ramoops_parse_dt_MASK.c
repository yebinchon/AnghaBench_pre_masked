
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_4__ {int ecc_size; } ;
struct ramoops_platform_data {int dump_oops; int record_size; int pmsg_size; int console_size; TYPE_1__ ecc_info; int ftrace_size; int flags; int mem_type; int mem_address; int mem_size; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (char*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2,
       struct ramoops_platform_data *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 struct device_node *VAR_5;
 struct resource *VAR_6;
 u32 VAR_7;
 int VAR_8;

 FUNC_0(&VAR_2->dev, "using Device Tree\n");

 VAR_6 = FUNC_7(VAR_2, VAR_1, 0);
 if (!VAR_6) {
  FUNC_1(&VAR_2->dev,
   "failed to locate DT /reserved-memory resource\n");
  return -VAR_0;
 }

 VAR_3->mem_size = FUNC_8(VAR_6);
 VAR_3->mem_address = VAR_6->start;
 VAR_3->mem_type = FUNC_5(VAR_4, "unbuffered");
 VAR_3->dump_oops = !FUNC_5(VAR_4, "no-dump-oops");
 { VAR_8 = FUNC_0(VAR_2, "record-size", &VAR_7); if (VAR_8 < 0) return VAR_8; VAR_3->record_size = VAR_7; };
 { VAR_8 = FUNC_0(VAR_2, "console-size", &VAR_7); if (VAR_8 < 0) return VAR_8; VAR_3->console_size = VAR_7; };
 { VAR_8 = FUNC_0(VAR_2, "ftrace-size", &VAR_7); if (VAR_8 < 0) return VAR_8; VAR_3->ftrace_size = VAR_7; };
 { VAR_8 = FUNC_0(VAR_2, "pmsg-size", &VAR_7); if (VAR_8 < 0) return VAR_8; VAR_3->pmsg_size = VAR_7; };
 { VAR_8 = FUNC_0(VAR_2, "ecc-size", &VAR_7); if (VAR_8 < 0) return VAR_8; VAR_3->ecc_info.ecc_size = VAR_7; };
 { VAR_8 = FUNC_0(VAR_2, "flags", &VAR_7); if (VAR_8 < 0) return VAR_8; VAR_3->flags = VAR_7; };
 VAR_5 = FUNC_2(VAR_4);
 if (!FUNC_3(VAR_5, "reserved-memory") &&
     !VAR_3->console_size && !VAR_3->ftrace_size &&
     !VAR_3->pmsg_size && !VAR_3->ecc_info.ecc_size) {
  VAR_3->console_size = VAR_3->record_size;
  VAR_3->pmsg_size = VAR_3->record_size;
 }
 FUNC_4(VAR_5);

 return 0;
}
