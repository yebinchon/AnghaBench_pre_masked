
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct ath10k {int data_lock; TYPE_1__ scan; int conf_mutex; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ath10k *VAR_0)
{
 int VAR_1;

 FUNC_3(&VAR_0->conf_mutex);

 FUNC_4(&VAR_0->data_lock);

 switch (VAR_0->scan.state) {
 case 130:



  break;
 case 128:
 case 131:
  FUNC_2(VAR_0, "refusing scan abortion due to invalid scan state: %s (%d)\n",
       FUNC_0(VAR_0->scan.state),
       VAR_0->scan.state);
  break;
 case 129:
  VAR_0->scan.state = 131;
  FUNC_5(&VAR_0->data_lock);

  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1)
   FUNC_2(VAR_0, "failed to abort scan: %d\n", VAR_1);

  FUNC_4(&VAR_0->data_lock);
  break;
 }

 FUNC_5(&VAR_0->data_lock);
}
