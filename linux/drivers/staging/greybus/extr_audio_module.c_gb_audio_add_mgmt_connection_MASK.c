
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct greybus_descriptor_cport {int id; } ;
struct gbaudio_module_info {struct gb_connection* mgmt_connection; } ;
struct gb_connection {int dummy; } ;
struct gb_bundle {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (int *,char*) ;
 struct gb_connection* FUNC_3 (struct gb_bundle*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct gb_bundle*,struct gbaudio_module_info*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct gbaudio_module_info *VAR_2,
    struct greybus_descriptor_cport *VAR_3,
    struct gb_bundle *VAR_4)
{
 struct gb_connection *VAR_5;


 if (VAR_2->mgmt_connection) {
  FUNC_2(&VAR_4->dev,
   "Can't have multiple Management connections\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_3(VAR_4, FUNC_5(VAR_3->id),
       VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_4(VAR_4, VAR_2);
 VAR_2->mgmt_connection = VAR_5;

 return 0;
}
