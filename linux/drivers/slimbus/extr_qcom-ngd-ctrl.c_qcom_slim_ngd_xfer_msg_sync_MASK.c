
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_msg_txn {int mt; int mc; int * comp; } ;
struct slim_controller {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct slim_controller*,struct slim_msg_txn*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct slim_controller *VAR_3,
           struct slim_msg_txn *VAR_4)
{
 FUNC_0(VAR_2);
 int VAR_5, VAR_6;

 FUNC_2(VAR_3->dev);

 VAR_4->comp = &VAR_2;

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_4(&VAR_2, VAR_1);
 if (!VAR_6) {
  FUNC_1(VAR_3->dev, "TX timed out:MC:0x%x,mt:0x%x", VAR_4->mc,
    VAR_4->mt);
  return -VAR_0;
 }
 return 0;
}
