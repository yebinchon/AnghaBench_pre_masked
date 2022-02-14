
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1704_charger {int dev; int model; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct isp1704_charger*,int ) ;
 int FUNC_3 (struct isp1704_charger*,int ,int) ;
 int* VAR_7 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static inline int FUNC_5(struct isp1704_charger *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;


 VAR_12 = FUNC_3(VAR_8, VAR_4, 0xaa);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_8, VAR_4);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_12 != 0xaa)
  return -VAR_0;


 VAR_9 = FUNC_2(VAR_8, VAR_6);
 VAR_9 |= FUNC_2(VAR_8, VAR_5) << 8;
 if (VAR_9 != VAR_1)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8, VAR_3);
 VAR_10 |= FUNC_2(VAR_8, VAR_2) << 8;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++) {
  if (VAR_10 == VAR_7[VAR_11]) {
   FUNC_4(VAR_8->model, "isp%x", VAR_10);
   return VAR_10;
  }
 }

 FUNC_1(VAR_8->dev, "product id %x not matching known ids", VAR_10);

 return -VAR_0;
}
