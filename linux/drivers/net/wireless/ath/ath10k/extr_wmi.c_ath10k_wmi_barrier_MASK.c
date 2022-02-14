
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int barrier; } ;
struct ath10k {TYPE_1__ wmi; int data_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(struct ath10k *VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_3(&VAR_3->data_lock);
 FUNC_2(&VAR_3->wmi.barrier);
 FUNC_4(&VAR_3->data_lock);

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_3, "failed to submit wmi echo: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_5 = FUNC_5(&VAR_3->wmi.barrier,
      VAR_1);
 if (!VAR_5)
  return -VAR_2;

 return 0;
}
