
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {char* name; } ;
struct tcmu_hba {int host_id; } ;
struct tcmu_dev {int name; scalar_t__* dev_config; struct uio_info uio_info; TYPE_1__* hba; } ;
struct TYPE_2__ {struct tcmu_hba* hba_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,int ,int ,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct tcmu_dev *VAR_2)
{
 struct tcmu_hba *VAR_3 = VAR_2->hba->hba_ptr;
 struct uio_info *VAR_4;
 char *VAR_5;

 VAR_4 = &VAR_2->uio_info;

 if (VAR_2->dev_config[0])
  VAR_5 = FUNC_0(VAR_1, "tcm-user/%u/%s/%s", VAR_3->host_id,
    VAR_2->name, VAR_2->dev_config);
 else
  VAR_5 = FUNC_0(VAR_1, "tcm-user/%u/%s", VAR_3->host_id,
    VAR_2->name);
 if (!VAR_5)
  return -VAR_0;


 FUNC_1(VAR_4->name);
 VAR_4->name = VAR_5;

 return 0;
}
