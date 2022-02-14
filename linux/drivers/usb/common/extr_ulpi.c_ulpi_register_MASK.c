
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int product; int vendor; } ;
struct TYPE_7__ {int * type; int * bus; struct device* parent; } ;
struct ulpi {TYPE_1__ id; TYPE_2__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct ulpi*) ;
 int FUNC_7 (struct ulpi*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2, struct ulpi *VAR_3)
{
 int VAR_4;

 VAR_3->dev.parent = VAR_2;
 VAR_3->dev.bus = &VAR_0;
 VAR_3->dev.type = &VAR_1;
 FUNC_4(&VAR_3->dev, "%s.ulpi", FUNC_3(VAR_2));

 FUNC_1(&VAR_3->dev, FUNC_0(VAR_2));

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(&VAR_3->dev);
 if (VAR_4)
  return VAR_4;

 FUNC_2(&VAR_3->dev, "registered ULPI PHY: vendor %04x, product %04x\n",
  VAR_3->id.vendor, VAR_3->id.product);

 return 0;
}
