
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_tgt {int list; int id; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct device*) ;
 struct snic_tgt* FUNC_3 (struct device*) ;
 int FUNC_4 (struct snic_tgt*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snic_tgt*) ;

void
FUNC_7(struct device *VAR_0)
{
 struct snic_tgt *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(FUNC_6(VAR_1),
         "Target Device ID %d (%s) Permanently Deleted.\n",
         VAR_1->id,
         FUNC_2(VAR_0));

 FUNC_0(!FUNC_5(&VAR_1->list));
 FUNC_4(VAR_1);
}
