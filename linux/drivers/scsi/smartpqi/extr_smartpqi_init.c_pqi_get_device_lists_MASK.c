
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct report_lun_header {int dummy; } ;
typedef struct report_lun_header u8 ;
struct report_phys_lun_extended {int dummy; } ;
struct report_log_lun_extended_entry {int dummy; } ;
struct TYPE_4__ {int list_length; } ;
struct report_log_lun_extended {TYPE_2__ header; } ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; } ;
typedef int report_lun_header ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (struct report_log_lun_extended*) ;
 struct report_log_lun_extended* FUNC_3 (size_t,int ) ;
 int FUNC_4 (struct report_log_lun_extended*,struct report_log_lun_extended*,size_t) ;
 int FUNC_5 (struct report_lun_header*,int ,int) ;
 int FUNC_6 (struct pqi_ctrl_info*,void**) ;
 int FUNC_7 (struct pqi_ctrl_info*,void**) ;
 int FUNC_8 (size_t,int *) ;

__attribute__((used)) static int FUNC_9(struct pqi_ctrl_info *VAR_2,
 struct report_phys_lun_extended **VAR_3,
 struct report_log_lun_extended **VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 struct report_log_lun_extended *VAR_8;
 struct report_log_lun_extended *VAR_9;
 struct report_lun_header VAR_10;

 VAR_5 = FUNC_7(VAR_2, (void **)VAR_3);
 if (VAR_5)
  FUNC_0(&VAR_2->pci_dev->dev,
   "report physical LUNs failed\n");

 VAR_5 = FUNC_6(VAR_2, (void **)VAR_4);
 if (VAR_5)
  FUNC_0(&VAR_2->pci_dev->dev,
   "report logical LUNs failed\n");





 VAR_9 = *VAR_4;

 if (VAR_9) {
  VAR_6 =
   FUNC_1(&VAR_9->header.list_length);
 } else {
  FUNC_5(&VAR_10, 0, sizeof(VAR_10));
  VAR_9 =
   (struct report_log_lun_extended *)&VAR_10;
  VAR_6 = 0;
 }

 VAR_7 = sizeof(struct report_lun_header) +
  VAR_6;

 VAR_8 = FUNC_3(VAR_7 +
  sizeof(struct report_log_lun_extended), VAR_1);
 if (!VAR_8) {
  FUNC_2(*VAR_4);
  *VAR_4 = ((void*)0);
  return -VAR_0;
 }

 FUNC_4(VAR_8, VAR_9, VAR_7);
 FUNC_5((u8 *)VAR_8 + VAR_7, 0,
  sizeof(struct report_log_lun_extended_entry));
 FUNC_8(VAR_6 +
  sizeof(struct report_log_lun_extended_entry),
  &VAR_8->header.list_length);

 FUNC_2(*VAR_4);
 *VAR_4 = VAR_8;

 return 0;
}
