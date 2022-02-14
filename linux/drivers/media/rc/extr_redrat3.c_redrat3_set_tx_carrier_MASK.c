
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct redrat3_dev {int carrier; struct device* dev; } ;
struct rc_dev {struct redrat3_dev* priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_1, u32 VAR_2)
{
 struct redrat3_dev *VAR_3 = VAR_1->priv;
 struct device *VAR_4 = VAR_3->dev;

 FUNC_0(VAR_4, "Setting modulation frequency to %u", VAR_2);
 if (VAR_2 == 0)
  return -VAR_0;

 VAR_3->carrier = VAR_2;

 return 0;
}
