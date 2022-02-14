
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fsf_req {struct fsf_status_read_buffer* data; } ;
struct fsf_status_read_buffer {int status_subtype; int payload; } ;
struct fsf_link_down_info {int dummy; } ;





 int FUNC_0 (struct zfcp_fsf_req*,struct fsf_link_down_info*) ;

__attribute__((used)) static void FUNC_1(struct zfcp_fsf_req *VAR_0)
{
 struct fsf_status_read_buffer *VAR_1 = VAR_0->data;
 struct fsf_link_down_info *VAR_2 =
  (struct fsf_link_down_info *) &VAR_1->payload;

 switch (VAR_1->status_subtype) {
 case 128:
 case 130:
  FUNC_0(VAR_0, VAR_2);
  break;
 case 129:
  FUNC_0(VAR_0, ((void*)0));
 }
}
