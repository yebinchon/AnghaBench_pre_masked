
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_hba {int hba_flags; TYPE_2__* backend; scalar_t__ dev_count; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* pmode_enable_hba ) (struct se_hba*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct se_hba*,unsigned long) ;
 struct se_hba* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct se_hba *VAR_5 = FUNC_3(VAR_2);
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_5->backend->ops->pmode_enable_hba == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, 0, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_1("Unable to extract hba mode flag: %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_5->dev_count) {
  FUNC_1("Unable to set hba_mode with active devices\n");
  return -VAR_0;
 }

 VAR_7 = VAR_5->backend->ops->pmode_enable_hba(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return -VAR_0;
 if (VAR_7 > 0)
  VAR_5->hba_flags |= VAR_1;
 else if (VAR_7 == 0)
  VAR_5->hba_flags &= ~VAR_1;

 return VAR_4;
}
