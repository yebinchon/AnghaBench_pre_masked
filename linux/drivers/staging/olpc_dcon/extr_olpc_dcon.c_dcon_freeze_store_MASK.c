
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dcon_priv {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dcon_priv*,int ) ;
 int FUNC_1 (struct dcon_priv*,int ) ;
 struct dcon_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct dcon_priv *VAR_7 = FUNC_2(VAR_3);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 switch (VAR_8) {
 case 0:
  FUNC_0(VAR_7, VAR_0);
  break;
 case 1:
  FUNC_1(VAR_7, VAR_1);
  break;
 case 2:
  FUNC_0(VAR_7, VAR_1);
  break;
 default:
  return -VAR_2;
 }

 return VAR_6;
}
