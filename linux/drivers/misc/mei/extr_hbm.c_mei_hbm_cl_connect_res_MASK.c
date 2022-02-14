
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_hbm_cl_cmd {int dummy; } ;
struct mei_device {scalar_t__ dev_state; int bus_rescan_work; } ;
struct mei_cl {int status; int me_cl; int state; } ;
struct hbm_client_connect_response {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mei_device*,struct mei_cl*,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mei_device*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mei_device *VAR_5, struct mei_cl *VAR_6,
       struct mei_hbm_cl_cmd *VAR_7)
{
 struct hbm_client_connect_response *VAR_8 =
  (struct hbm_client_connect_response *)VAR_7;

 FUNC_0(VAR_5, VAR_6, "hbm: connect response status=%s\n",
   FUNC_1(VAR_8->status));

 if (VAR_8->status == VAR_1)
  VAR_6->state = VAR_3;
 else {
  VAR_6->state = VAR_4;
  if (VAR_8->status == VAR_0) {
   FUNC_3(VAR_5, VAR_6->me_cl);
   if (VAR_5->dev_state == VAR_2)
    FUNC_4(&VAR_5->bus_rescan_work);
  }
 }
 VAR_6->status = FUNC_2(VAR_8->status);
}
