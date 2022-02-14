
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rndis_query_complete {scalar_t__ status; int info_buflen; scalar_t__ info_buf_offset; } ;
struct TYPE_3__ {struct rndis_query_complete query_complete; } ;
struct TYPE_4__ {TYPE_1__ msg; } ;
struct rndis_request {TYPE_2__ response_msg; } ;
struct rndis_device {int link_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,void*,int) ;

__attribute__((used)) static void FUNC_1(struct rndis_device *VAR_1,
     struct rndis_request *VAR_2)
{
 u32 VAR_3;
 struct rndis_query_complete *VAR_4;

 VAR_4 = &VAR_2->response_msg.msg.query_complete;

 if (VAR_4->status == VAR_0 &&
     VAR_4->info_buflen == sizeof(u32)) {
  FUNC_0(&VAR_3, (void *)((unsigned long)VAR_4 +
         VAR_4->info_buf_offset), sizeof(u32));
  VAR_1->link_state = VAR_3 != 0;
 }
}
