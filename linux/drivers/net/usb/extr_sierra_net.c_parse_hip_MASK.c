
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int is_present; int word; } ;
struct TYPE_3__ {int byte; } ;
struct hip_hdr {scalar_t__ hdrlen; TYPE_2__ payload_len; TYPE_2__ extmsgid; TYPE_1__ msgid; TYPE_1__ msgspecific; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 int * FUNC_0 (TYPE_2__*,int const*) ;
 int * FUNC_1 (TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_5, const u32 VAR_6, struct hip_hdr *VAR_7)
{
 const u8 *VAR_8 = VAR_5;
 int VAR_9;

 if (VAR_6 < VAR_4)
  return -VAR_1;

 VAR_8 = FUNC_0(&VAR_7->payload_len, VAR_8);
 VAR_8 = FUNC_1(&VAR_7->msgid, VAR_8);
 VAR_8 = FUNC_1(&VAR_7->msgspecific, VAR_8);

 VAR_9 = VAR_7->msgid.byte & 0x80;
 VAR_7->msgid.byte &= 0x7F;

 VAR_7->extmsgid.is_present = (VAR_7->msgid.byte == VAR_2);
 if (VAR_7->extmsgid.is_present) {
  if (VAR_6 < VAR_3)
   return -VAR_1;

  VAR_7->payload_len.word &= 0x3FFF;

  VAR_8 = FUNC_0(&VAR_7->extmsgid, VAR_8);
  VAR_7->extmsgid.word &= 0x03FF;

  VAR_7->hdrlen = VAR_3;
 } else {
  VAR_7->payload_len.word &= 0x07FF;
  VAR_7->hdrlen = VAR_4;
 }

 if (VAR_9) {
  VAR_7->hdrlen++;
  VAR_7->payload_len.word--;
 }


 if (VAR_6 < (VAR_7->hdrlen + VAR_7->payload_len.word))
  return -VAR_0;

 return 0;
}
