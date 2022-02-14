
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gbphy_device_id {int dummy; } ;
struct gbphy_device {int dev; TYPE_1__* cport_desc; int bundle; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int id; } ;


 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 struct gb_connection* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_connection*) ;
 int FUNC_6 (struct gbphy_device*,struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*,int *,int ) ;
 int FUNC_8 (struct gbphy_device*) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_10(struct gbphy_device *VAR_1,
   const struct gbphy_device_id *VAR_2)
{
 struct gb_connection *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1->bundle,
       FUNC_9(VAR_1->cport_desc->id),
       ((void*)0));
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4)
  goto exit_connection_destroy;

 VAR_4 = FUNC_7(VAR_3, &VAR_1->dev, VAR_0);
 if (VAR_4)
  goto exit_connection_disable;

 FUNC_6(VAR_1, VAR_3);

 FUNC_8(VAR_1);
 return 0;

exit_connection_disable:
 FUNC_4(VAR_3);
exit_connection_destroy:
 FUNC_3(VAR_3);

 return VAR_4;
}
