
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct fsf_status_read_buffer {TYPE_1__ payload; } ;
struct fc_els_logo {int fl_n_port_wwn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct zfcp_fsf_req*,int ) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fsf_req *VAR_0)
{
 struct fsf_status_read_buffer *VAR_1 =
  (struct fsf_status_read_buffer *)VAR_0->data;
 struct fc_els_logo *VAR_2 =
  (struct fc_els_logo *) VAR_1->payload.data;

 FUNC_1(VAR_0, FUNC_0(VAR_2->fl_n_port_wwn));
}
