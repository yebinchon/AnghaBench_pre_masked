
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct ath10k {TYPE_1__ scan; int data_lock; } ;






 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,char*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_0)
{
 FUNC_3(&VAR_0->data_lock);

 switch (VAR_0->scan.state) {
 case 130:
 case 128:
  FUNC_2(VAR_0, "received scan completed event in an invalid scan state: %s (%d)\n",
       FUNC_1(VAR_0->scan.state),
       VAR_0->scan.state);
  break;
 case 129:
 case 131:
  FUNC_0(VAR_0);
  break;
 }
}
