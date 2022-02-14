
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ CifsError; } ;
struct smb_hdr {scalar_t__ WordCount; TYPE_1__ Status; int smb_buf_length; } ;
struct TCP_Server_Info {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct smb_hdr*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct smb_hdr*) ;
 int FUNC_4 (struct smb_hdr*,struct TCP_Server_Info*) ;

int
FUNC_5(char *VAR_3, unsigned int VAR_4, struct TCP_Server_Info *VAR_5)
{
 struct smb_hdr *VAR_6 = (struct smb_hdr *)VAR_3;
 __u32 VAR_7 = FUNC_0(VAR_6->smb_buf_length);
 __u32 VAR_8;
 FUNC_2(VAR_1, "checkSMB Length: 0x%x, smb_buf_length: 0x%x\n",
   VAR_4, VAR_7);


 if (VAR_4 < 2 + sizeof(struct smb_hdr)) {
  if ((VAR_4 >= sizeof(struct smb_hdr) - 1)
       && (VAR_6->Status.CifsError != 0)) {

   VAR_6->WordCount = 0;

   return 0;
  } else if ((VAR_4 == sizeof(struct smb_hdr) + 1) &&
    (VAR_6->WordCount == 0)) {
   char *VAR_9 = (char *)VAR_6;


   if (VAR_9[sizeof(struct smb_hdr)] == 0) {







    VAR_9[sizeof(struct smb_hdr)+1] = 0;
    return 0;
   }
   FUNC_2(VAR_2, "rcvd invalid byte count (bcc)\n");
  } else {
   FUNC_2(VAR_2, "Length less than smb header size\n");
  }
  return -VAR_0;
 }


 if (FUNC_1(VAR_6))
  return -VAR_0;
 VAR_8 = FUNC_4(VAR_6, VAR_5);

 if (4 + VAR_7 != VAR_4) {
  FUNC_2(VAR_2, "Length read does not match RFC1001 length %d\n",
    VAR_7);
  return -VAR_0;
 }

 if (4 + VAR_7 != VAR_8) {
  __u16 VAR_10 = FUNC_3(VAR_6);

  if ((VAR_7 > 64 * 1024) && (VAR_7 > VAR_8)) {

   if (((4 + VAR_7) & 0xFFFF) == (VAR_8 & 0xFFFF))
    return 0;
  }
  FUNC_2(VAR_1, "Calculated size %u vs length %u mismatch for mid=%u\n",
    VAR_8, 4 + VAR_7, VAR_10);

  if (4 + VAR_7 < VAR_8) {
   FUNC_2(VAR_2, "RFC1001 size %u smaller than SMB for mid=%u\n",
     VAR_7, VAR_10);
   return -VAR_0;
  } else if (VAR_7 > VAR_8 + 512) {
   FUNC_2(VAR_2, "RFC1001 size %u more than 512 bytes larger than SMB for mid=%u\n",
     VAR_7, VAR_10);
   return -VAR_0;
  }
 }
 return 0;
}
