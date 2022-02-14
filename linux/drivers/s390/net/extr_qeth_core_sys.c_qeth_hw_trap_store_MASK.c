
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwtrap; } ;
struct qeth_card {int conf_mutex; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*,int ) ;
 scalar_t__ FUNC_5 (struct qeth_card*,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct qeth_card *VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (!VAR_9)
  return -VAR_0;

 FUNC_1(&VAR_9->conf_mutex);
 if (FUNC_3(VAR_9))
  VAR_11 = 1;

 if (FUNC_6(VAR_7, "arm") && !VAR_9->info.hwtrap) {
  if (VAR_11) {
   if (FUNC_5(VAR_9,
       VAR_1)) {
    VAR_10 = FUNC_4(VAR_9, VAR_2);
    if (!VAR_10)
     VAR_9->info.hwtrap = 1;
   } else
    VAR_10 = -VAR_0;
  } else
   VAR_9->info.hwtrap = 1;
 } else if (FUNC_6(VAR_7, "disarm") && VAR_9->info.hwtrap) {
  if (VAR_11) {
   VAR_10 = FUNC_4(VAR_9, VAR_4);
   if (!VAR_10)
    VAR_9->info.hwtrap = 0;
  } else
   VAR_9->info.hwtrap = 0;
 } else if (FUNC_6(VAR_7, "trap") && VAR_11 && VAR_9->info.hwtrap)
  VAR_10 = FUNC_4(VAR_9, VAR_3);
 else
  VAR_10 = -VAR_0;

 FUNC_2(&VAR_9->conf_mutex);
 return VAR_10 ? VAR_10 : VAR_8;
}
