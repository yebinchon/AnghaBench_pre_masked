
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gb_operation_msg_hdr {int dummy; } ;
struct gb_loopback_transfer_response {int dummy; } ;
struct gb_loopback_transfer_request {int dummy; } ;
struct gb_loopback {int type; int size; int requests_completed; int throughput; } ;





 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static void FUNC_1(struct gb_loopback *VAR_1, u32 VAR_2)
{
 u64 VAR_3 = sizeof(struct gb_operation_msg_hdr) * 2;

 switch (VAR_1->type) {
 case 130:
  break;
 case 129:
  VAR_3 += sizeof(struct gb_loopback_transfer_request) +
      VAR_1->size;
  break;
 case 128:
  VAR_3 += sizeof(struct gb_loopback_transfer_request) +
      sizeof(struct gb_loopback_transfer_response) +
      VAR_1->size * 2;
  break;
 default:
  return;
 }

 VAR_3 *= VAR_1->requests_completed;
 VAR_3 *= VAR_0;
 FUNC_0(&VAR_1->throughput, VAR_3,
     VAR_2);
}
