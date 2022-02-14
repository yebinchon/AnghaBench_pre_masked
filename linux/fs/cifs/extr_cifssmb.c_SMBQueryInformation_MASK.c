
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timespec64 {int tv_sec; scalar_t__ tv_nsec; } ;
struct smb_hdr {int dummy; } ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int ses; } ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_12__ {int Attributes; void* AllocationSize; void* EndOfFile; scalar_t__ LastAccessTime; void* ChangeTime; void* LastWriteTime; } ;
struct TYPE_9__ {int Flags2; } ;
struct TYPE_11__ {int BufferFormat; int ByteCount; scalar_t__ FileName; TYPE_1__ hdr; } ;
struct TYPE_10__ {int attr; int size; int last_write_time; } ;
typedef TYPE_2__ QUERY_INFORMATION_RSP ;
typedef TYPE_3__ QUERY_INFORMATION_REQ ;
typedef TYPE_4__ FILE_ALL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (int *,char const*,int ,struct nls_table const*,int) ;
 int FUNC_2 (struct timespec64) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (scalar_t__,char const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*,int ,int) ;
 int FUNC_13 (int ,int ,struct cifs_tcon*,void**,void**) ;

int
FUNC_14(const unsigned int VAR_6, struct cifs_tcon *VAR_7,
      const char *VAR_8, FILE_ALL_INFO *VAR_9,
      const struct nls_table *VAR_10, int VAR_11)
{
 QUERY_INFORMATION_REQ *VAR_12;
 QUERY_INFORMATION_RSP *VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;

 FUNC_4(VAR_2, "In SMBQPath path %s\n", VAR_8);
QInfRetry:
 VAR_14 = FUNC_13(VAR_5, 0, VAR_7, (void **) &VAR_12,
        (void **) &VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_12->hdr.Flags2 & VAR_4) {
  VAR_16 =
   FUNC_1((__le16 *) VAR_12->FileName,
        VAR_8, VAR_3, VAR_10,
        VAR_11);
  VAR_16++;
  VAR_16 *= 2;
 } else {
  VAR_16 = FUNC_5(VAR_12->FileName, VAR_8);
 }
 VAR_12->BufferFormat = 0x04;
 VAR_16++;
 FUNC_9(VAR_12, (__u16)VAR_16);
 VAR_12->ByteCount = FUNC_6(VAR_16);

 VAR_14 = FUNC_0(VAR_6, VAR_7->ses, (struct smb_hdr *) VAR_12,
    (struct smb_hdr *) VAR_13, &VAR_15, 0);
 if (VAR_14) {
  FUNC_4(VAR_2, "Send error in QueryInfo = %d\n", VAR_14);
 } else if (VAR_9) {
  struct timespec64 VAR_17;
  __u32 VAR_18 = FUNC_11(VAR_13->last_write_time);



  FUNC_12(VAR_9, 0, sizeof(FILE_ALL_INFO));
  VAR_17.tv_nsec = 0;
  VAR_17.tv_sec = VAR_18;

  VAR_9->ChangeTime = FUNC_8(FUNC_2(VAR_17));
  VAR_9->LastWriteTime = VAR_9->ChangeTime;
  VAR_9->LastAccessTime = 0;
  VAR_9->AllocationSize =
   FUNC_8(FUNC_11(VAR_13->size));
  VAR_9->EndOfFile = VAR_9->AllocationSize;
  VAR_9->Attributes =
   FUNC_7(FUNC_10(VAR_13->attr));
 } else
  VAR_14 = -VAR_1;

 FUNC_3(VAR_12);

 if (VAR_14 == -VAR_0)
  goto QInfRetry;

 return VAR_14;
}
