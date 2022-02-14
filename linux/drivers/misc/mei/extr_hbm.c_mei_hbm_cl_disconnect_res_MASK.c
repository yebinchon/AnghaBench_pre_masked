
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_hbm_cl_cmd {int dummy; } ;
struct mei_device {int dummy; } ;
struct mei_cl {scalar_t__ status; int state; } ;
struct hbm_client_connect_response {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mei_device*,struct mei_cl*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mei_device *VAR_2, struct mei_cl *VAR_3,
          struct mei_hbm_cl_cmd *VAR_4)
{
 struct hbm_client_connect_response *VAR_5 =
  (struct hbm_client_connect_response *)VAR_4;

 FUNC_0(VAR_2, VAR_3, "hbm: disconnect response status=%d\n", VAR_5->status);

 if (VAR_5->status == VAR_0)
  VAR_3->state = VAR_1;
 VAR_3->status = 0;
}
