
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rc5t583_platform_data {scalar_t__ enable_shutdown; } ;
struct rc5t583 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct rc5t583 *VAR_4,
 struct rc5t583_platform_data *VAR_5)
{
 int VAR_6;
 int VAR_7;
 uint8_t VAR_8 = 0;


 if (VAR_5->enable_shutdown)
  VAR_8 = 0x1;

 VAR_6 = FUNC_1(VAR_4->dev, VAR_2, VAR_8);
 if (VAR_6 < 0)
  FUNC_0(VAR_4->dev, "Error in writing reg %d error: %d\n",
     VAR_2, VAR_6);

 VAR_6 = FUNC_1(VAR_4->dev, VAR_3, 0x0);
 if (VAR_6 < 0)
  FUNC_0(VAR_4->dev, "Error in writing reg %d error: %d\n",
     VAR_3, VAR_6);


 for (VAR_7 = VAR_0; VAR_7 <= VAR_1; ++VAR_7) {
  VAR_6 = FUNC_1(VAR_4->dev, VAR_7, 0x0);
  if (VAR_6 < 0)
   FUNC_0(VAR_4->dev,
    "Error in writing reg 0x%02x error: %d\n",
    VAR_7, VAR_6);
 }
 return 0;
}
