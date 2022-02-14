
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mii_bus {int dummy; } ;
struct b53_device {int current_page; struct mii_bus* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mii_bus*,int ,int ) ;
 int FUNC_2 (struct mii_bus*,int ,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct b53_device *VAR_7, u8 VAR_8, u8 VAR_9, u16 VAR_10)
{
 int VAR_11;
 u16 VAR_12;
 int VAR_13;
 struct mii_bus *VAR_14 = VAR_7->priv;

 if (VAR_7->current_page != VAR_8) {

  VAR_12 = (VAR_8 << 8) | VAR_6;
  VAR_13 = FUNC_2(VAR_14, VAR_0,
        VAR_5, VAR_12);
  if (VAR_13)
   return VAR_13;
  VAR_7->current_page = VAR_8;
 }


 VAR_12 = (VAR_9 << 8) | VAR_10;
 VAR_13 = FUNC_2(VAR_14, VAR_0, VAR_2, VAR_12);
 if (VAR_13)
  return VAR_13;


 for (VAR_11 = 0; VAR_11 < 5; ++VAR_11) {
  VAR_12 = FUNC_1(VAR_14, VAR_0,
     VAR_2);
  if (!(VAR_12 & (VAR_4 | VAR_3)))
   break;
  FUNC_3(10, 100);
 }

 if (FUNC_0(VAR_11 == 5))
  return -VAR_1;

 return 0;
}
