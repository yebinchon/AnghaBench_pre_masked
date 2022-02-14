
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_subsystem {char* serial; char* model; int vendor_id; } ;
struct nvme_ns_ids {int eui64; int nguid; int uuid; } ;
struct nvme_ns_head {int ns_id; struct nvme_subsystem* subsys; struct nvme_ns_ids ids; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct nvme_ns_head* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,char*,int,...) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct nvme_ns_head *VAR_3 = FUNC_0(VAR_0);
 struct nvme_ns_ids *VAR_4 = &VAR_3->ids;
 struct nvme_subsystem *VAR_5 = VAR_3->subsys;
 int VAR_6 = sizeof(VAR_5->serial);
 int VAR_7 = sizeof(VAR_5->model);

 if (!FUNC_3(&VAR_4->uuid))
  return FUNC_2(VAR_2, "uuid.%pU\n", VAR_4->uuid);

 if (FUNC_1(VAR_4->nguid, 0, sizeof(VAR_4->nguid)))
  return FUNC_2(VAR_2, "eui.%16phN\n", VAR_4->nguid);

 if (FUNC_1(VAR_4->eui64, 0, sizeof(VAR_4->eui64)))
  return FUNC_2(VAR_2, "eui.%8phN\n", VAR_4->eui64);

 while (VAR_6 > 0 && (VAR_5->serial[VAR_6 - 1] == ' ' ||
      VAR_5->serial[VAR_6 - 1] == '\0'))
  VAR_6--;
 while (VAR_7 > 0 && (VAR_5->model[VAR_7 - 1] == ' ' ||
     VAR_5->model[VAR_7 - 1] == '\0'))
  VAR_7--;

 return FUNC_2(VAR_2, "nvme.%04x-%*phN-%*phN-%08x\n", VAR_5->vendor_id,
  VAR_6, VAR_5->serial, VAR_7, VAR_5->model,
  VAR_3->ns_id);
}
