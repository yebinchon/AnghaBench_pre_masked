
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ umode_t ;
struct ptp_clock_info {int pps; int n_per_out; int n_ext_ts; } ;
struct ptp_clock {struct ptp_clock_info* info; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {scalar_t__ mode; } ;
struct TYPE_8__ {struct attribute attr; } ;
struct TYPE_7__ {struct attribute attr; } ;
struct TYPE_6__ {struct attribute attr; } ;
struct TYPE_5__ {struct attribute attr; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct ptp_clock* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_4,
     struct attribute *VAR_5, int VAR_6)
{
 struct device *VAR_7 = FUNC_1(VAR_4);
 struct ptp_clock *VAR_8 = FUNC_0(VAR_7);
 struct ptp_clock_info *VAR_9 = VAR_8->info;
 umode_t VAR_10 = VAR_5->mode;

 if (VAR_5 == &VAR_0.attr ||
     VAR_5 == &VAR_1.attr) {
  if (!VAR_9->n_ext_ts)
   VAR_10 = 0;
 } else if (VAR_5 == &VAR_2.attr) {
  if (!VAR_9->n_per_out)
   VAR_10 = 0;
 } else if (VAR_5 == &VAR_3.attr) {
  if (!VAR_9->pps)
   VAR_10 = 0;
 }

 return VAR_10;
}
