
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt9455_info {int voreg; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct rt9455_info*,int ,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct rt9455_info *VAR_2)
{
 struct device *VAR_3 = &VAR_2->client->dev;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_0,
       VAR_1,
       FUNC_0(VAR_1),
       VAR_2->voreg);
 if (VAR_4) {
  FUNC_1(VAR_3, "Failed to set VOREG value\n");
  return VAR_4;
 }

 return 0;
}
