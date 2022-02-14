
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myrs_hba {struct myrs_ctlr_info* ctlr_info; } ;
struct myrs_ctlr_info {TYPE_1__* cpu; } ;
struct myrs_cpu_type_tbl {scalar_t__ type; char* name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int cpu_count; scalar_t__ cpu_type; char* cpu_name; } ;


 int FUNC_0 (struct myrs_cpu_type_tbl*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 struct myrs_cpu_type_tbl* VAR_0 ;
 struct myrs_hba* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_1);
 struct myrs_hba *VAR_5 = FUNC_2(VAR_4);
 struct myrs_cpu_type_tbl *VAR_6;
 const char *VAR_7 = ((void*)0);
 const char *VAR_8 = ((void*)0);
 struct myrs_ctlr_info *VAR_9 = VAR_5->ctlr_info;
 ssize_t VAR_10;
 int VAR_11;

 if (VAR_9->cpu[0].cpu_count) {
  VAR_6 = VAR_0;
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_0); VAR_11++) {
   if (VAR_6[VAR_11].type == VAR_9->cpu[0].cpu_type) {
    VAR_7 = VAR_6[VAR_11].name;
    break;
   }
  }
 }
 if (VAR_9->cpu[1].cpu_count) {
  VAR_6 = VAR_0;
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_0); VAR_11++) {
   if (VAR_6[VAR_11].type == VAR_9->cpu[1].cpu_type) {
    VAR_8 = VAR_6[VAR_11].name;
    break;
   }
  }
 }
 if (VAR_7 && VAR_8)
  VAR_10 = FUNC_3(VAR_3, 64, "1: %s (%s, %d cpus)\n"
          "2: %s (%s, %d cpus)\n",
          VAR_9->cpu[0].cpu_name,
          VAR_7, VAR_9->cpu[0].cpu_count,
          VAR_9->cpu[1].cpu_name,
          VAR_8, VAR_9->cpu[1].cpu_count);
 else if (VAR_7 && !VAR_8)
  VAR_10 = FUNC_3(VAR_3, 64, "1: %s (%s, %d cpus)\n2: absent\n",
          VAR_9->cpu[0].cpu_name,
          VAR_7, VAR_9->cpu[0].cpu_count);
 else if (!VAR_7 && VAR_8)
  VAR_10 = FUNC_3(VAR_3, 64, "1: absent\n2: %s (%s, %d cpus)\n",
          VAR_9->cpu[1].cpu_name,
          VAR_8, VAR_9->cpu[1].cpu_count);
 else
  VAR_10 = FUNC_3(VAR_3, 64, "1: absent\n2: absent\n");

 return VAR_10;
}
