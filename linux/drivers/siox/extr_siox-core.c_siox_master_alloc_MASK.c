
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; int * type; int * bus; } ;
struct siox_master {int busno; TYPE_1__ dev; int poll_interval; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,struct siox_master*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct siox_master* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

struct siox_master *FUNC_4(struct device *VAR_4,
          size_t VAR_5)
{
 struct siox_master *VAR_6;

 if (!VAR_4)
  return ((void*)0);

 VAR_6 = FUNC_3(sizeof(*VAR_6) + VAR_5, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(&VAR_6->dev);

 VAR_6->busno = -1;
 VAR_6->dev.bus = &VAR_2;
 VAR_6->dev.type = &VAR_3;
 VAR_6->dev.parent = VAR_4;
 VAR_6->poll_interval = FUNC_0(VAR_1, 40);

 FUNC_1(&VAR_6->dev, &VAR_6[1]);

 return VAR_6;
}
