
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;} ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ds1685_priv* FUNC_0 (int ) ;
 int FUNC_1 (struct ds1685_priv*) ;
 int FUNC_2 (struct ds1685_priv*) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (struct ds1685_priv*,int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 struct ds1685_priv *VAR_5 = FUNC_0(VAR_2->parent);
 u8 VAR_6;

 FUNC_2(VAR_5);
 VAR_6 = VAR_5->read(VAR_5, VAR_1);
 FUNC_1(VAR_5);

 return FUNC_3(VAR_4, "%s\n",
   (VAR_6 & VAR_0) ? "ok" : "not ok or N/A");
}
