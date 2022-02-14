
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct musb* FUNC_0 (struct device*) ;
 int FUNC_1 (struct musb*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_4, struct device_attribute *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct musb *VAR_8 = FUNC_0(VAR_4);
 unsigned long VAR_9;
 int VAR_10;

 FUNC_2(&VAR_8->lock, VAR_9);
 if (FUNC_4(VAR_6, "host"))
  VAR_10 = FUNC_1(VAR_8, VAR_1);
 else if (FUNC_4(VAR_6, "peripheral"))
  VAR_10 = FUNC_1(VAR_8, VAR_3);
 else if (FUNC_4(VAR_6, "otg"))
  VAR_10 = FUNC_1(VAR_8, VAR_2);
 else
  VAR_10 = -VAR_0;
 FUNC_3(&VAR_8->lock, VAR_9);

 return (VAR_10 == 0) ? VAR_7 : VAR_10;
}
