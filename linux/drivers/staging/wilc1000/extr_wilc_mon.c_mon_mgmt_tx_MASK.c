
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tx_complete_mon_data {size_t size; int buff; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tx_complete_mon_data*) ;
 struct tx_complete_mon_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int const*,size_t,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct tx_complete_mon_data*,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, const u8 *VAR_5, size_t VAR_6)
{
 struct tx_complete_mon_data *VAR_7 = ((void*)0);

 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_4);
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->buff = FUNC_2(VAR_5, VAR_6, VAR_2);
 if (!VAR_7->buff) {
  FUNC_0(VAR_7);
  return -VAR_1;
 }

 VAR_7->size = VAR_6;

 FUNC_5(VAR_4, VAR_7, VAR_7->buff, VAR_7->size,
       VAR_3);

 FUNC_4(VAR_4);
 return 0;
}
