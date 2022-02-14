
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_le ;
struct TYPE_2__ {int protocol_name; } ;
struct mei_me_client {scalar_t__ tx_flow_ctrl_creds; int client_id; TYPE_1__ props; } ;
struct mei_device {int dummy; } ;
struct hbm_props_response {int me_addr; TYPE_1__ client_properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mei_me_client* FUNC_0 (int,int ) ;
 int FUNC_1 (struct mei_device*,struct mei_me_client*) ;
 int FUNC_2 (struct mei_me_client*) ;
 int FUNC_3 (struct mei_device*,int const*) ;

__attribute__((used)) static int FUNC_4(struct mei_device *VAR_2,
        struct hbm_props_response *VAR_3)
{
 struct mei_me_client *VAR_4;
 const uuid_le *VAR_5 = &VAR_3->client_properties.protocol_name;

 FUNC_3(VAR_2, VAR_5);

 VAR_4 = FUNC_0(sizeof(struct mei_me_client), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(VAR_4);

 VAR_4->props = VAR_3->client_properties;
 VAR_4->client_id = VAR_3->me_addr;
 VAR_4->tx_flow_ctrl_creds = 0;

 FUNC_1(VAR_2, VAR_4);

 return 0;
}
