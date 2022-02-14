
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {int session_id; TYPE_1__ hdr; } ;
struct hfi_session_parse_sequence_header_pkt {void* packet_buffer; void* header_len; TYPE_2__ shdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;

int FUNC_1(
  struct hfi_session_parse_sequence_header_pkt *VAR_2,
  void *VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (!VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_0;

 VAR_2->shdr.hdr.size = sizeof(*VAR_2);
 VAR_2->shdr.hdr.pkt_type = VAR_1;
 VAR_2->shdr.session_id = FUNC_0(VAR_3);
 VAR_2->header_len = VAR_5;
 VAR_2->packet_buffer = VAR_4;

 return 0;
}
