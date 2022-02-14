
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int started; int is_roc; } ;
struct ath10k {TYPE_1__ scan; int hw; int data_lock; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ath10k *VAR_0)
{
 FUNC_4(&VAR_0->data_lock);

 switch (VAR_0->scan.state) {
 case 130:
 case 129:
 case 131:
  FUNC_1(VAR_0, "received scan started event in an invalid scan state: %s (%d)\n",
       FUNC_0(VAR_0->scan.state),
       VAR_0->scan.state);
  break;
 case 128:
  VAR_0->scan.state = 129;

  if (VAR_0->scan.is_roc)
   FUNC_3(VAR_0->hw);

  FUNC_2(&VAR_0->scan.started);
  break;
 }
}
