
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_cmd_work {int work; } ;
struct be_adapter {int dummy; } ;


 struct be_cmd_work* FUNC_0 (struct be_adapter*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct be_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct be_adapter *VAR_3 = FUNC_1(VAR_2);
 struct be_cmd_work *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4)
  FUNC_2(VAR_1, &VAR_4->work);
}
