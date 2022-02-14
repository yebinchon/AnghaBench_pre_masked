
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct firmware const**,int ,int ) ;
 int FUNC_2 (struct firmware const**,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mt76x02_dev *VAR_2,
          const struct firmware **VAR_3)
{
 int VAR_4;




 VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_2->mt76.dev);
 if (VAR_4) {
  FUNC_0(VAR_2->mt76.dev, "%s not found, switching to %s",
    VAR_0, VAR_1);
  return FUNC_2(VAR_3, VAR_1,
     VAR_2->mt76.dev);
 }
 return 0;
}
