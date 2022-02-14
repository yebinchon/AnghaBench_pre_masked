
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ezusb_packet {int data; void* hermes_rid; void* hermes_len; void* crc; void* size; void* frame_type; scalar_t__ ans_reply_count; int req_reply_count; void* magic; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ezusb_packet*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,void const*,int) ;

__attribute__((used)) static int FUNC_5(struct ezusb_packet *VAR_2, u16 VAR_3, u16 VAR_4,
     const void *VAR_5, u16 VAR_6, u8 VAR_7)
{
 int VAR_8 = sizeof(*VAR_2) + VAR_3;

 FUNC_0(VAR_8 > VAR_0);

 VAR_2->magic = FUNC_3(VAR_1);
 VAR_2->req_reply_count = VAR_7;
 VAR_2->ans_reply_count = 0;
 VAR_2->frame_type = FUNC_3(VAR_6);
 VAR_2->size = FUNC_3(VAR_3 + 4);
 VAR_2->crc = FUNC_3(FUNC_2(VAR_2));
 VAR_2->hermes_len = FUNC_3(FUNC_1(VAR_3));
 VAR_2->hermes_rid = FUNC_3(VAR_4);
 if (VAR_5)
  FUNC_4(VAR_2->data, VAR_5, VAR_3);
 return VAR_8;
}
