
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {TYPE_1__ hdr; int session_id; } ;
struct hfi_session_set_property_pkt {int* data; int num_properties; TYPE_2__ shdr; } ;
struct hfi_multi_stream_3x {int enable; int buffer_type; } ;
struct hfi_multi_stream {int enable; int buffer_type; } ;
struct hfi_intra_refresh_3x {int mbs; int mode; } ;
struct hfi_intra_refresh {int cir_mbs; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct hfi_session_set_property_pkt*,void*,int,void*) ;

__attribute__((used)) static int
FUNC_2(struct hfi_session_set_property_pkt *VAR_2,
        void *VAR_3, u32 VAR_4, void *VAR_5)
{
 void *VAR_6;
 int VAR_7 = 0;

 if (!VAR_2 || !VAR_3 || !VAR_5)
  return -VAR_0;

 VAR_6 = &VAR_2->data[1];

 VAR_2->shdr.hdr.size = sizeof(*VAR_2);
 VAR_2->shdr.hdr.pkt_type = VAR_1;
 VAR_2->shdr.session_id = FUNC_0(VAR_3);
 VAR_2->num_properties = 1;
 VAR_2->data[0] = VAR_4;






 switch (VAR_4) {
 case 129: {
  struct hfi_multi_stream *VAR_8 = VAR_5;
  struct hfi_multi_stream_3x *VAR_9 = VAR_6;

  VAR_9->buffer_type = VAR_8->buffer_type;
  VAR_9->enable = VAR_8->enable;
  VAR_2->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_9);
  break;
 }
 case 128: {
  struct hfi_intra_refresh *VAR_10 = VAR_5;
  struct hfi_intra_refresh_3x *VAR_11 = VAR_6;

  switch (VAR_10->mode) {
  case 132:
  case 135:
  case 134:
  case 133:
  case 131:
   break;
  default:
   VAR_7 = -VAR_0;
   break;
  }

  VAR_11->mode = VAR_10->mode;
  VAR_11->mbs = VAR_10->cir_mbs;
  VAR_2->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_11);
  break;
 }
 case 130:

  break;
 default:
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 }

 return VAR_7;
}
