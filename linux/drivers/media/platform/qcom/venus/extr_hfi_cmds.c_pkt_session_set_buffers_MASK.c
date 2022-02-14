
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {TYPE_1__ hdr; int session_id; } ;
struct hfi_session_set_buffers_pkt {unsigned int num_buffers; scalar_t__ buffer_type; int * buffer_info; TYPE_2__ shdr; scalar_t__ extradata_size; int min_buffer_size; int buffer_size; } ;
struct hfi_buffer_info {int extradata_addr; int buffer_addr; } ;
struct hfi_buffer_desc {unsigned int num_buffers; scalar_t__ buffer_type; int device_addr; int extradata_addr; scalar_t__ extradata_size; int buffer_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;

int FUNC_1(struct hfi_session_set_buffers_pkt *VAR_4,
       void *VAR_5, struct hfi_buffer_desc *VAR_6)
{
 unsigned int VAR_7;

 if (!VAR_5 || !VAR_4 || !VAR_6)
  return -VAR_0;

 VAR_4->shdr.hdr.pkt_type = VAR_3;
 VAR_4->shdr.session_id = FUNC_0(VAR_5);
 VAR_4->buffer_size = VAR_6->buffer_size;
 VAR_4->min_buffer_size = VAR_6->buffer_size;
 VAR_4->num_buffers = VAR_6->num_buffers;

 if (VAR_6->buffer_type == VAR_1 ||
     VAR_6->buffer_type == VAR_2) {
  struct hfi_buffer_info *VAR_8;

  VAR_4->extradata_size = VAR_6->extradata_size;
  VAR_4->shdr.hdr.size = sizeof(*VAR_4) - sizeof(u32) +
   (VAR_6->num_buffers * sizeof(*VAR_8));
  VAR_8 = (struct hfi_buffer_info *)VAR_4->buffer_info;
  for (VAR_7 = 0; VAR_7 < VAR_4->num_buffers; VAR_7++) {
   VAR_8->buffer_addr = VAR_6->device_addr;
   VAR_8->extradata_addr = VAR_6->extradata_addr;
  }
 } else {
  VAR_4->extradata_size = 0;
  VAR_4->shdr.hdr.size = sizeof(*VAR_4) +
   ((VAR_6->num_buffers - 1) * sizeof(u32));
  for (VAR_7 = 0; VAR_7 < VAR_4->num_buffers; VAR_7++)
   VAR_4->buffer_info[VAR_7] = VAR_6->device_addr;
 }

 VAR_4->buffer_type = VAR_6->buffer_type;

 return 0;
}
