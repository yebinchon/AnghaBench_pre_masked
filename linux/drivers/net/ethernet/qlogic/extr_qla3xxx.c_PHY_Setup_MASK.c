
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ql3_adapter {scalar_t__ mac_index; int ndev; int phyType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ql3_adapter*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ql3_adapter*,int ) ;
 int FUNC_3 (struct ql3_adapter*,int ,int*) ;
 int FUNC_4 (struct ql3_adapter*,int ,int*,int ) ;

__attribute__((used)) static int FUNC_5(struct ql3_adapter *VAR_7)
{
 u16 VAR_8;
 u16 VAR_9;
 bool VAR_10 = 0;
 u32 VAR_11 = 0;
 int VAR_12;


 VAR_12 = FUNC_3(VAR_7, VAR_4, &VAR_8);
 if (VAR_12 != 0) {
  FUNC_1(VAR_7->ndev, "Could not read from reg PHY_ID_0_REG\n");
  return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_7, VAR_5, &VAR_9);
 if (VAR_12 != 0) {
  FUNC_1(VAR_7->ndev, "Could not read from reg PHY_ID_1_REG\n");
  return VAR_12;
 }


 if ((VAR_8 == 0xffff) || (VAR_9 == 0xffff)) {



  if (VAR_7->mac_index == 0)
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_2;

  VAR_12 = FUNC_4(VAR_7, VAR_4, &VAR_8, VAR_11);
  if (VAR_12 != 0) {
   FUNC_1(VAR_7->ndev,
       "Could not read from reg PHY_ID_0_REG after Agere detected\n");
   return VAR_12;
  }

  VAR_12 = FUNC_4(VAR_7, VAR_5, &VAR_9, VAR_11);
  if (VAR_12 != 0) {
   FUNC_1(VAR_7->ndev, "Could not read from reg PHY_ID_1_REG after Agere detected\n");
   return VAR_12;
  }


  VAR_10 = 1;
 }



 VAR_7->phyType = FUNC_0(VAR_7, VAR_8, VAR_9);

 if ((VAR_7->phyType == VAR_3) && VAR_10) {

  FUNC_2(VAR_7, VAR_11);
 } else if (VAR_7->phyType == VAR_6) {
  FUNC_1(VAR_7->ndev, "PHY is unknown\n");
  return -VAR_0;
 }

 return 0;
}
