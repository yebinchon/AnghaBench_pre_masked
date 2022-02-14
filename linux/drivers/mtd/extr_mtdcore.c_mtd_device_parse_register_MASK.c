
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_partition {int dummy; } ;
struct mtd_part_parser_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ notifier_call; } ;
struct mtd_info {int dev; TYPE_1__ reboot_notifier; scalar_t__ _reboot; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*,struct mtd_partition const*,int) ;
 int FUNC_4 (struct mtd_info*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct mtd_info*) ;
 int FUNC_7 (struct mtd_info*,char const* const*,struct mtd_part_parser_data*) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(struct mtd_info *VAR_2, const char * const *VAR_3,
         struct mtd_part_parser_data *VAR_4,
         const struct mtd_partition *VAR_5,
         int VAR_6)
{
 int VAR_7;

 FUNC_6(VAR_2);

 if (FUNC_0(VAR_0)) {
  VAR_7 = FUNC_2(VAR_2);
  if (VAR_7)
   return VAR_7;
 }


 VAR_7 = FUNC_7(VAR_2, VAR_3, VAR_4);
 if (VAR_7 > 0)
  VAR_7 = 0;
 else if (VAR_6)
  VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_6);
 else if (!FUNC_5(&VAR_2->dev))
  VAR_7 = FUNC_2(VAR_2);
 else
  VAR_7 = 0;

 if (VAR_7)
  goto out;
 FUNC_1(VAR_2->_reboot && VAR_2->reboot_notifier.notifier_call,
    "MTD already registered\n");
 if (VAR_2->_reboot && !VAR_2->reboot_notifier.notifier_call) {
  VAR_2->reboot_notifier.notifier_call = VAR_1;
  FUNC_8(&VAR_2->reboot_notifier);
 }

out:
 if (VAR_7 && FUNC_5(&VAR_2->dev))
  FUNC_4(VAR_2);

 return VAR_7;
}
