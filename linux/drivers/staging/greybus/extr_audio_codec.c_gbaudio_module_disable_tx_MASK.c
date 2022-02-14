
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct gbaudio_module_info {int dev; int mgmt_connection; } ;
struct gbaudio_data_connection {int* state; TYPE_1__* connection; } ;
struct TYPE_2__ {scalar_t__ hd_cport_id; scalar_t__ intf_cport_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 struct gbaudio_data_connection* FUNC_3 (struct gbaudio_module_info*,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct gbaudio_module_info *VAR_5, int VAR_6)
{
 int VAR_7;
 u16 VAR_8, VAR_9, VAR_10;
 int VAR_11;
 struct gbaudio_data_connection *VAR_12;


 VAR_12 = FUNC_3(VAR_5, VAR_6);
 if (!VAR_12) {
  FUNC_1(VAR_5->dev, "%d:DATA connection missing\n", VAR_6);
  return -VAR_1;
 }
 VAR_11 = VAR_12->state[VAR_4];

 if (VAR_11 > VAR_2) {
  VAR_8 = VAR_12->connection->intf_cport_id;
  VAR_7 = FUNC_5(VAR_5->mgmt_connection,
      VAR_8);
  if (VAR_7) {
   FUNC_2(VAR_5->dev,
         "deactivate_tx failed:%d\n", VAR_7);
   return VAR_7;
  }
  FUNC_0(VAR_5->dev, "Dynamic deactivate %d DAI\n", VAR_8);
  VAR_12->state[VAR_4] =
   VAR_2;
 }

 if (VAR_11 > VAR_3) {
  VAR_10 = 0;
  VAR_9 = VAR_12->connection->hd_cport_id;
  VAR_7 = FUNC_4(VAR_12->connection,
      VAR_10, VAR_9,
      VAR_0);
  if (VAR_7) {
   FUNC_2(VAR_5->dev,
         "unregister_cport failed:%d\n",
         VAR_7);
   return VAR_7;
  }
  FUNC_0(VAR_5->dev, "Dynamic Unregister %d DAI\n", VAR_9);
  VAR_12->state[VAR_4] =
   VAR_3;
 }

 return 0;
}
