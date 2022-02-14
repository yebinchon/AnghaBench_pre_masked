
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1685_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct ds1685_priv* FUNC_0 (int ) ;
 int FUNC_1 (struct ds1685_priv*,int *) ;
 int FUNC_2 (struct ds1685_priv*) ;
 int FUNC_3 (struct ds1685_priv*) ;
 int FUNC_4 (char*,char*,int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct ds1685_priv *VAR_3 = FUNC_0(VAR_0->parent);
 u8 VAR_4[8];

 FUNC_3(VAR_3);
 FUNC_1(VAR_3, VAR_4);
 FUNC_2(VAR_3);

 return FUNC_4(VAR_2, "%8phC\n", VAR_4);
}
