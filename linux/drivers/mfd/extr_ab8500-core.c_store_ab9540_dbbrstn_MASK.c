
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ab8500 {int dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ab8500* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*,char const,int) ;
 int FUNC_2 (struct ab8500*,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
 struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct ab8500 *VAR_7;
 int VAR_8 = VAR_6;
 int VAR_9;
 u8 VAR_10;

 VAR_7 = FUNC_0(VAR_3);

 if (VAR_6 > 0) {
  switch (VAR_5[0]) {
  case '0':
   VAR_10 = 0;
   break;
  case '1':
   VAR_10 = VAR_2;
   break;
  default:
   goto exit;
  }

  VAR_9 = FUNC_2(VAR_7,
   VAR_0, VAR_1,
   VAR_2, VAR_10);
  if (VAR_9)
   FUNC_1(VAR_7->dev,
    "Failed to set DBBRSTN %c, err %#x\n",
    VAR_5[0], VAR_9);
 }

exit:
 return VAR_8;
}
