
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct attribute_group const** groups; } ;
struct rtc_device {TYPE_1__ dev; scalar_t__ registered; } ;
typedef struct attribute_group const attribute_group ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct attribute_group const** FUNC_0 (TYPE_1__*,size_t,int,int ) ;
 int FUNC_1 (TYPE_1__*,struct attribute_group const**) ;
 int FUNC_2 (struct attribute_group const**,struct attribute_group const**,size_t) ;
 struct attribute_group const** VAR_3 ;

int FUNC_3(struct rtc_device *VAR_4, const struct attribute_group **VAR_5)
{
 size_t VAR_6 = 0, VAR_7 = 0, VAR_8;
 const struct attribute_group **VAR_9, **VAR_10;

 if (VAR_4->registered)
  return -VAR_0;
 if (!VAR_5)
  return -VAR_0;

 VAR_9 = VAR_4->dev.groups;
 if (VAR_9)
  for (; *VAR_9; VAR_9++)
   VAR_6++;

 for (VAR_9 = VAR_5; *VAR_9; VAR_9++)
  VAR_7++;

 VAR_8 = VAR_6 + VAR_7 + 1;
 VAR_9 = FUNC_0(&VAR_4->dev, VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 FUNC_2(VAR_9, VAR_4->dev.groups, VAR_6 * sizeof(*VAR_9));
 FUNC_2(VAR_9 + VAR_6, VAR_5, VAR_7 * sizeof(*VAR_9));
 VAR_9[VAR_6 + VAR_7] = ((void*)0);

 VAR_10 = VAR_4->dev.groups;
 VAR_4->dev.groups = VAR_9;
 if (VAR_10 && VAR_10 != VAR_3)
  FUNC_1(&VAR_4->dev, VAR_10);

 return 0;
}
