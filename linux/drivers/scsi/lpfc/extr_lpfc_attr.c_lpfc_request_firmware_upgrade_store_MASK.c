
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_3,
        struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_3);
 struct lpfc_vport *VAR_8 = (struct lpfc_vport *)VAR_7->hostdata;
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 int VAR_10 = 0, VAR_11 = -VAR_0;


 if (!FUNC_1(VAR_5[0]))
  return -VAR_0;
 if (FUNC_3(VAR_5, "%i", &VAR_10) != 1)
  return -VAR_0;
 if (VAR_10 != 1)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_9, VAR_2);
 if (VAR_11)
  VAR_11 = -VAR_1;
 else
  VAR_11 = FUNC_4(VAR_5);
 return VAR_11;
}
