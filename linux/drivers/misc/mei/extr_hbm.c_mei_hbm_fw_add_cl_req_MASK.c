
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_device {scalar_t__ dev_state; int bus_rescan_work; } ;
struct hbm_props_response {int dummy; } ;
struct hbm_add_client_request {int me_addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mei_device*,int ,int) ;
 int FUNC_2 (struct mei_device*,struct hbm_props_response*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mei_device *VAR_2,
         struct hbm_add_client_request *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = VAR_1;

 FUNC_0(sizeof(struct hbm_add_client_request) !=
   sizeof(struct hbm_props_response));

 VAR_4 = FUNC_2(VAR_2, (struct hbm_props_response *)VAR_3);
 if (VAR_4)
  VAR_5 = !VAR_1;

 if (VAR_2->dev_state == VAR_0)
  FUNC_3(&VAR_2->bus_rescan_work);

 return FUNC_1(VAR_2, VAR_3->me_addr, VAR_5);
}
