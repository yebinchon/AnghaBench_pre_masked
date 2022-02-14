
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_switch_info {int capabilities; int settings; } ;
struct qeth_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,struct qeth_switch_info*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 struct qeth_card *VAR_6 = FUNC_0(VAR_3);
 struct qeth_switch_info VAR_7;
 int VAR_8 = 0;

 if (!VAR_6)
  return -VAR_0;

 if (!FUNC_1(VAR_6))
  return FUNC_3(VAR_5, "n/a\n");

 VAR_8 = FUNC_2(VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (!VAR_7.capabilities)
  VAR_8 = FUNC_3(VAR_5, "unknown");

 if (VAR_7.capabilities & VAR_1)
  VAR_8 = FUNC_3(VAR_5, (VAR_7.settings & VAR_1 ?
       "[802.1]" : "802.1"));
 if (VAR_7.capabilities & VAR_2)
  VAR_8 += FUNC_3(VAR_5 + VAR_8,
   (VAR_7.settings & VAR_2 ?
       " [rr]" : " rr"));
 VAR_8 += FUNC_3(VAR_5 + VAR_8, "\n");

 return VAR_8;
}
