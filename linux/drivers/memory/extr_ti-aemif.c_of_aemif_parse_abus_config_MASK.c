
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct aemif_device {scalar_t__ cs_offset; scalar_t__ num_cs; struct aemif_cs_data* cs_data; } ;
struct aemif_cs_data {int asize; void* enable_ss; void* enable_ew; scalar_t__ wsetup; scalar_t__ wstrobe; scalar_t__ whold; scalar_t__ rsetup; scalar_t__ rstrobe; scalar_t__ rhold; scalar_t__ ta; scalar_t__ cs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct platform_device*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (struct device_node*,char*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,scalar_t__*) ;
 struct aemif_device* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2,
          struct device_node *VAR_3)
{
 struct aemif_device *VAR_4 = FUNC_4(VAR_2);
 struct aemif_cs_data *VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 if (FUNC_3(VAR_3, "ti,cs-chipselect", &VAR_6)) {
  FUNC_1(&VAR_2->dev, "cs property is required");
  return -VAR_0;
 }

 if (VAR_6 - VAR_4->cs_offset >= VAR_1 || VAR_6 < VAR_4->cs_offset) {
  FUNC_1(&VAR_2->dev, "cs number is incorrect %d", VAR_6);
  return -VAR_0;
 }

 if (VAR_4->num_cs >= VAR_1) {
  FUNC_1(&VAR_2->dev, "cs count is more than %d", VAR_1);
  return -VAR_0;
 }

 VAR_5 = &VAR_4->cs_data[VAR_4->num_cs];
 VAR_5->cs = VAR_6;


 FUNC_0(VAR_2, VAR_4->num_cs++);


 if (!FUNC_3(VAR_3, "ti,cs-min-turnaround-ns", &VAR_7))
  VAR_5->ta = VAR_7;

 if (!FUNC_3(VAR_3, "ti,cs-read-hold-ns", &VAR_7))
  VAR_5->rhold = VAR_7;

 if (!FUNC_3(VAR_3, "ti,cs-read-strobe-ns", &VAR_7))
  VAR_5->rstrobe = VAR_7;

 if (!FUNC_3(VAR_3, "ti,cs-read-setup-ns", &VAR_7))
  VAR_5->rsetup = VAR_7;

 if (!FUNC_3(VAR_3, "ti,cs-write-hold-ns", &VAR_7))
  VAR_5->whold = VAR_7;

 if (!FUNC_3(VAR_3, "ti,cs-write-strobe-ns", &VAR_7))
  VAR_5->wstrobe = VAR_7;

 if (!FUNC_3(VAR_3, "ti,cs-write-setup-ns", &VAR_7))
  VAR_5->wsetup = VAR_7;

 if (!FUNC_3(VAR_3, "ti,cs-bus-width", &VAR_7))
  if (VAR_7 == 16)
   VAR_5->asize = 1;
 VAR_5->enable_ew = FUNC_2(VAR_3, "ti,cs-extended-wait-mode");
 VAR_5->enable_ss = FUNC_2(VAR_3, "ti,cs-select-strobe-mode");
 return 0;
}
