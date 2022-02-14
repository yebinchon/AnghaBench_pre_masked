
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {int session_id; TYPE_1__ hdr; } ;
struct hfi_session_empty_buffer_uncompressed_plane0_pkt {int extradata_buffer; scalar_t__ packet_buffer; int input_tag; int filled_len; int alloc_len; int offset; int mark_data; int mark_target; int flags; int time_stamp_lo; int time_stamp_hi; scalar_t__ view_id; TYPE_2__ shdr; } ;
struct hfi_frame_data {int extradata_addr; scalar_t__ device_addr; int clnt_data; int filled_len; int alloc_len; int offset; int mark_data; int mark_target; int flags; int timestamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(
  struct hfi_session_empty_buffer_uncompressed_plane0_pkt *VAR_2,
  void *VAR_3, struct hfi_frame_data *VAR_4)
{
 if (!VAR_3 || !VAR_4->device_addr)
  return -VAR_0;

 VAR_2->shdr.hdr.size = sizeof(*VAR_2);
 VAR_2->shdr.hdr.pkt_type = VAR_1;
 VAR_2->shdr.session_id = FUNC_0(VAR_3);
 VAR_2->view_id = 0;
 VAR_2->time_stamp_hi = FUNC_2(VAR_4->timestamp);
 VAR_2->time_stamp_lo = FUNC_1(VAR_4->timestamp);
 VAR_2->flags = VAR_4->flags;
 VAR_2->mark_target = VAR_4->mark_target;
 VAR_2->mark_data = VAR_4->mark_data;
 VAR_2->offset = VAR_4->offset;
 VAR_2->alloc_len = VAR_4->alloc_len;
 VAR_2->filled_len = VAR_4->filled_len;
 VAR_2->input_tag = VAR_4->clnt_data;
 VAR_2->packet_buffer = VAR_4->device_addr;
 VAR_2->extradata_buffer = VAR_4->extradata_addr;

 return 0;
}
