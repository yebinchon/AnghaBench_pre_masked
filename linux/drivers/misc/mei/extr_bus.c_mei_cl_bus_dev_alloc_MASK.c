
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_me_client {int dummy; } ;
struct mei_device {int dev; } ;
struct TYPE_2__ {int * type; int * bus; int parent; } ;
struct mei_cl_device {int bus_list; scalar_t__ is_added; struct mei_cl* cl; int me_cl; int bus; TYPE_1__ dev; } ;
struct mei_cl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mei_cl_device*) ;
 struct mei_cl_device* FUNC_3 (int,int ) ;
 struct mei_cl* FUNC_4 (struct mei_device*) ;
 int FUNC_5 (struct mei_cl_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_me_client*) ;

__attribute__((used)) static struct mei_cl_device *FUNC_8(struct mei_device *VAR_3,
        struct mei_me_client *VAR_4)
{
 struct mei_cl_device *VAR_5;
 struct mei_cl *VAR_6;

 VAR_5 = FUNC_3(sizeof(struct mei_cl_device), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_3);
 if (!VAR_6) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 FUNC_1(&VAR_5->dev);
 VAR_5->dev.parent = VAR_3->dev;
 VAR_5->dev.bus = &VAR_1;
 VAR_5->dev.type = &VAR_2;
 VAR_5->bus = FUNC_6(VAR_3);
 VAR_5->me_cl = FUNC_7(VAR_4);
 VAR_5->cl = VAR_6;
 FUNC_5(VAR_5);
 VAR_5->is_added = 0;
 FUNC_0(&VAR_5->bus_list);

 return VAR_5;
}
