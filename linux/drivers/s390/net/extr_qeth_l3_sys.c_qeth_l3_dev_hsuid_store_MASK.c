
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cq; char* hsuid; scalar_t__ sniffer; } ;
struct qeth_card {scalar_t__ state; TYPE_2__ options; TYPE_1__* dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int perm_addr; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct qeth_card*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct qeth_card* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (struct qeth_card*,int) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_6,
  struct device_attribute *VAR_7, const char *VAR_8, size_t VAR_9)
{
 struct qeth_card *VAR_10 = FUNC_2(VAR_6);
 char *VAR_11;
 int VAR_12;

 if (!VAR_10)
  return -VAR_1;

 if (!FUNC_1(VAR_10))
  return -VAR_2;
 if (VAR_10->state != VAR_0)
  return -VAR_2;
 if (VAR_10->options.sniffer)
  return -VAR_2;
 if (VAR_10->options.cq == VAR_5)
  return -VAR_2;

 VAR_11 = FUNC_8((char **)&VAR_8, "\n");
 if (FUNC_7(VAR_11) > 8)
  return -VAR_1;

 if (VAR_10->options.hsuid[0])

  FUNC_5(VAR_10, 0);

 if (FUNC_7(VAR_11) == 0) {

  VAR_10->options.hsuid[0] = '\0';
  FUNC_3(VAR_10->dev->perm_addr, VAR_10->options.hsuid, 9);
  FUNC_4(VAR_10, VAR_3);
  return VAR_9;
 }

 if (FUNC_4(VAR_10, VAR_4))
  return -VAR_2;

 FUNC_6(VAR_10->options.hsuid, sizeof(VAR_10->options.hsuid),
   "%-8s", VAR_11);
 FUNC_0(VAR_10->options.hsuid, 8);
 FUNC_3(VAR_10->dev->perm_addr, VAR_10->options.hsuid, 9);

 VAR_12 = FUNC_5(VAR_10, 1);

 return VAR_12 ? VAR_12 : VAR_9;
}
