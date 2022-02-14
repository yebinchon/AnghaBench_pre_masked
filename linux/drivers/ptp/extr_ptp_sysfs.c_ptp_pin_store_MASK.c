
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptp_clock {int pincfg_mux; } ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptp_clock* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ptp_clock*,int ) ;
 int FUNC_4 (struct ptp_clock*,int,unsigned int,unsigned int) ;
 int FUNC_5 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct ptp_clock *VAR_6 = FUNC_0(VAR_2);
 unsigned int VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_5(VAR_4, "%u %u", &VAR_7, &VAR_8);
 if (VAR_9 != 2)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_6, VAR_3->attr.name);
 if (VAR_11 < 0)
  return -VAR_0;

 if (FUNC_1(&VAR_6->pincfg_mux))
  return -VAR_1;
 VAR_10 = FUNC_4(VAR_6, VAR_11, VAR_7, VAR_8);
 FUNC_2(&VAR_6->pincfg_mux);
 if (VAR_10)
  return VAR_10;

 return VAR_5;
}
