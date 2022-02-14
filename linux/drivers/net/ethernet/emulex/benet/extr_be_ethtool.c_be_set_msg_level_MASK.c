
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct be_adapter {int msg_enable; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct be_adapter*,int ) ;
 struct be_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, u32 VAR_4)
{
 struct be_adapter *VAR_5 = FUNC_2(VAR_3);

 if (VAR_5->msg_enable == VAR_4)
  return;

 if ((VAR_4 & VAR_2) != (VAR_5->msg_enable & VAR_2))
  if (FUNC_0(VAR_5))
   FUNC_1(VAR_5, VAR_4 & VAR_2 ?
      VAR_0 :
      VAR_1);
 VAR_5->msg_enable = VAR_4;
}
