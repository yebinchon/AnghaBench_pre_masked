
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ena_adapter {int ena_dev; } ;
typedef enum ena_admin_hash_functions { ____Placeholder_ena_admin_hash_functions } ena_admin_hash_functions ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int *) ;
 int FUNC_1 (int ,int *) ;
 struct ena_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ena_adapter*,int ,struct net_device*,char*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, u32 *VAR_5, u8 *VAR_6,
   u8 *VAR_7)
{
 struct ena_adapter *VAR_8 = FUNC_2(VAR_4);
 enum ena_admin_hash_functions VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_8->ena_dev, VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_8->ena_dev, &VAR_9, VAR_6);
 if (VAR_11)
  return VAR_11;

 switch (VAR_9) {
 case 128:
  VAR_10 = VAR_1;
  break;
 case 129:
  VAR_10 = VAR_2;
  break;
 default:
  FUNC_3(VAR_8, VAR_3, VAR_4,
     "Command parameter is not supported\n");
  return -VAR_0;
 }

 if (VAR_7)
  *VAR_7 = VAR_10;

 return VAR_11;
}
