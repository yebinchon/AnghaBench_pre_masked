
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct ath10k {int * scan_channel; TYPE_1__ scan; int data_lock; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,char*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_0)
{
 FUNC_2(&VAR_0->data_lock);

 switch (VAR_0->scan.state) {
 case 130:
 case 128:
  FUNC_1(VAR_0, "received scan bss chan event in an invalid scan state: %s (%d)\n",
       FUNC_0(VAR_0->scan.state),
       VAR_0->scan.state);
  break;
 case 129:
 case 131:
  VAR_0->scan_channel = ((void*)0);
  break;
 }
}
