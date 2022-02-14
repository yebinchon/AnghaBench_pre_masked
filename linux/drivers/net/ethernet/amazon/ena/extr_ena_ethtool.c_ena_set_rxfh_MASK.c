
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ena_com_dev {int dummy; } ;
struct ena_adapter {struct ena_com_dev* ena_dev; } ;
typedef enum ena_admin_hash_functions { ____Placeholder_ena_admin_hash_functions } ena_admin_hash_functions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_1 (struct ena_com_dev*,int,int const*,int ,int) ;
 int FUNC_2 (struct ena_com_dev*,int,int ) ;
 int FUNC_3 (struct ena_com_dev*) ;
 struct ena_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ena_adapter*,int ,struct net_device*,char*,...) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7, const u32 *VAR_8,
   const u8 *VAR_9, const u8 VAR_10)
{
 struct ena_adapter *VAR_11 = FUNC_4(VAR_7);
 struct ena_com_dev *VAR_12 = VAR_11->ena_dev;
 enum ena_admin_hash_functions VAR_13;
 int VAR_14, VAR_15;

 if (VAR_8) {
  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
   VAR_14 = FUNC_2(VAR_12,
              VAR_15,
              FUNC_0(VAR_8[VAR_15]));
   if (FUNC_6(VAR_14)) {
    FUNC_5(VAR_11, VAR_6, VAR_7,
       "Cannot fill indirect table (index is too large)\n");
    return VAR_14;
   }
  }

  VAR_14 = FUNC_3(VAR_12);
  if (VAR_14) {
   FUNC_5(VAR_11, VAR_6, VAR_7,
      "Cannot set indirect table\n");
   return VAR_14 == -VAR_5 ? -VAR_4 : VAR_14;
  }
 }

 switch (VAR_10) {
 case 129:
  VAR_13 = VAR_1;
  break;
 case 128:
  VAR_13 = VAR_0;
  break;
 default:
  FUNC_5(VAR_11, VAR_6, VAR_7, "Unsupported hfunc %d\n",
     VAR_10);
  return -VAR_4;
 }

 if (VAR_9) {
  VAR_14 = FUNC_1(VAR_12, VAR_13, VAR_9,
      VAR_2,
      0xFFFFFFFF);
  if (FUNC_6(VAR_14)) {
   FUNC_5(VAR_11, VAR_6, VAR_7, "Cannot fill key\n");
   return VAR_14 == -VAR_5 ? -VAR_4 : VAR_14;
  }
 }

 return 0;
}
