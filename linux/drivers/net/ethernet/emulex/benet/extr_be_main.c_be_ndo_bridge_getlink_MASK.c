
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct be_adapter {int if_handle; int pdev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct be_adapter*,int *,int ,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,struct net_device*,int ,int ,int ,int,int ,int *) ;
 struct be_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5, u32 VAR_6, u32 VAR_7,
     struct net_device *VAR_8, u32 VAR_9,
     int VAR_10)
{
 struct be_adapter *VAR_11 = FUNC_4(VAR_8);
 int VAR_12 = 0;
 u8 VAR_13;


 if (FUNC_0(VAR_11) || FUNC_2(VAR_11)) {

  if (!FUNC_5(VAR_11->pdev))
   return 0;
  VAR_13 = VAR_3;
 } else {
  VAR_12 = FUNC_1(VAR_11, ((void*)0), 0,
            VAR_11->if_handle, &VAR_13,
            ((void*)0));
  if (VAR_12)
   return 0;

  if (VAR_13 == VAR_2)
   return 0;
 }

 return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8,
           VAR_13 == VAR_4 ?
           VAR_1 : VAR_0,
           0, 0, VAR_10, VAR_9, ((void*)0));
}
