
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* pdev_param; } ;
struct ath10k {TYPE_2__ wmi; int conf_mutex; } ;
struct TYPE_3__ {int txpower_limit5g; int txpower_limit2g; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 int FUNC_1 (struct ath10k*,char*,int,int) ;
 int FUNC_2 (struct ath10k*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_1, int VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 FUNC_3(&VAR_1->conf_mutex);

 FUNC_0(VAR_1, VAR_0, "mac txpower %d\n", VAR_2);

 VAR_4 = VAR_1->wmi.pdev_param->txpower_limit2g;
 VAR_3 = FUNC_2(VAR_1, VAR_4, VAR_2 * 2);
 if (VAR_3) {
  FUNC_1(VAR_1, "failed to set 2g txpower %d: %d\n",
       VAR_2, VAR_3);
  return VAR_3;
 }

 VAR_4 = VAR_1->wmi.pdev_param->txpower_limit5g;
 VAR_3 = FUNC_2(VAR_1, VAR_4, VAR_2 * 2);
 if (VAR_3) {
  FUNC_1(VAR_1, "failed to set 5g txpower %d: %d\n",
       VAR_2, VAR_3);
  return VAR_3;
 }

 return 0;
}
