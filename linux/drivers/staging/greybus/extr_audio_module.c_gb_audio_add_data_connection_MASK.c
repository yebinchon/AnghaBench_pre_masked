
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct greybus_descriptor_cport {int id; } ;
struct gbaudio_module_info {int data_list; int dev; } ;
struct gbaudio_data_connection {int list; struct gb_connection* connection; int data_cport; scalar_t__ id; } ;
struct gb_connection {int intf_cport_id; } ;
struct gb_bundle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (int ,struct gbaudio_data_connection*) ;
 struct gbaudio_data_connection* FUNC_3 (int ,int,int ) ;
 struct gb_connection* FUNC_4 (struct gb_bundle*,int ,int ) ;
 int FUNC_5 (struct gb_bundle*,struct gbaudio_module_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct gbaudio_module_info *VAR_3,
    struct greybus_descriptor_cport *VAR_4,
    struct gb_bundle *VAR_5)
{
 struct gb_connection *VAR_6;
 struct gbaudio_data_connection *VAR_7;

 VAR_7 = FUNC_3(VAR_3->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5,
          FUNC_6(VAR_4->id),
          VAR_1);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_3->dev, VAR_7);
  return FUNC_1(VAR_6);
 }

 FUNC_5(VAR_5, VAR_3);
 VAR_7->id = 0;
 VAR_7->data_cport = VAR_6->intf_cport_id;
 VAR_7->connection = VAR_6;
 FUNC_7(&VAR_7->list, &VAR_3->data_list);

 return 0;
}
