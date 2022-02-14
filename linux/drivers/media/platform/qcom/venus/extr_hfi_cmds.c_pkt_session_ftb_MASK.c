
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {int session_id; TYPE_1__ hdr; } ;
struct hfi_session_fill_buffer_pkt {int stream_id; int * data; int offset; int filled_len; int alloc_len; int extradata_buffer; scalar_t__ packet_buffer; int output_tag; TYPE_2__ shdr; } ;
struct hfi_frame_data {scalar_t__ buffer_type; int extradata_size; int offset; int filled_len; int alloc_len; int extradata_addr; scalar_t__ device_addr; int clnt_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;

int FUNC_1(struct hfi_session_fill_buffer_pkt *VAR_4, void *VAR_5,
      struct hfi_frame_data *VAR_6)
{
 if (!VAR_5 || !VAR_6 || !VAR_6->device_addr)
  return -VAR_0;

 VAR_4->shdr.hdr.size = sizeof(*VAR_4);
 VAR_4->shdr.hdr.pkt_type = VAR_3;
 VAR_4->shdr.session_id = FUNC_0(VAR_5);

 if (VAR_6->buffer_type == VAR_1)
  VAR_4->stream_id = 0;
 else if (VAR_6->buffer_type == VAR_2)
  VAR_4->stream_id = 1;

 VAR_4->output_tag = VAR_6->clnt_data;
 VAR_4->packet_buffer = VAR_6->device_addr;
 VAR_4->extradata_buffer = VAR_6->extradata_addr;
 VAR_4->alloc_len = VAR_6->alloc_len;
 VAR_4->filled_len = VAR_6->filled_len;
 VAR_4->offset = VAR_6->offset;
 VAR_4->data[0] = VAR_6->extradata_size;

 return 0;
}
