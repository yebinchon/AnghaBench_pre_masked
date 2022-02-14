
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int dev; int (* data_hard_resume ) (int ) ;scalar_t__ raw_tx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rtllib_device *VAR_0)
{

 if (VAR_0->raw_tx) {
  if (VAR_0->data_hard_resume)
   VAR_0->data_hard_resume(VAR_0->dev);

  FUNC_0(VAR_0->dev);
 }
}
