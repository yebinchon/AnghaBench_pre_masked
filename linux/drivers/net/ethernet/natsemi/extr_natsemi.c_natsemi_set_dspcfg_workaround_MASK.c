
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int dspcfg_workaround; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct netdev_private* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct netdev_private *VAR_4 = FUNC_0(FUNC_4(VAR_0));
 int VAR_5;
 unsigned long VAR_6;


        if (!FUNC_3("on", VAR_2, VAR_3 - 1) || !FUNC_3("1", VAR_2, VAR_3 - 1))
                VAR_5 = 1;
        else if (!FUNC_3("off", VAR_2, VAR_3 - 1) ||
                 !FUNC_3("0", VAR_2, VAR_3 - 1))
  VAR_5 = 0;
 else
                 return VAR_3;

 FUNC_1(&VAR_4->lock, VAR_6);

 VAR_4->dspcfg_workaround = VAR_5;

 FUNC_2(&VAR_4->lock, VAR_6);

 return VAR_3;
}
