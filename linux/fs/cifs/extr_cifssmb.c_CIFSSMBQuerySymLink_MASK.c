
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct TYPE_2__ {int Flags2; int Protocol; } ;
struct smb_com_transaction_ioctl_rsp {TYPE_1__ hdr; int ByteCount; int DataCount; int DataOffset; } ;
struct smb_com_transaction_ioctl_req {int MaxSetupCount; int SetupCount; int IsFsctl; scalar_t__ ByteCount; int Fid; scalar_t__ IsRootFlag; scalar_t__ FunctionCode; scalar_t__ TotalParameterCount; scalar_t__ ParameterCount; int SubCommand; scalar_t__ DataOffset; scalar_t__ DataCount; scalar_t__ ParameterOffset; scalar_t__ Reserved; scalar_t__ MaxDataCount; scalar_t__ MaxParameterCount; scalar_t__ TotalDataCount; } ;
struct reparse_symlink_data {scalar_t__ ReparseTag; char* PathBuffer; int SubstituteNameLength; int SubstituteNameOffset; int ReparseDataLength; } ;
struct reparse_posix_data {scalar_t__ InodeType; char* PathBuffer; } ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int ses; } ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (struct smb_com_transaction_ioctl_req*) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (char*,unsigned int,int,struct nls_table const*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int,struct cifs_tcon*,void**,void**) ;

int
FUNC_12(const unsigned int VAR_12, struct cifs_tcon *VAR_13,
      __u16 VAR_14, char **VAR_15,
      const struct nls_table *VAR_16)
{
 int VAR_17 = 0;
 int VAR_18;
 struct smb_com_transaction_ioctl_req *VAR_19;
 struct smb_com_transaction_ioctl_rsp *VAR_20;
 bool VAR_21;
 unsigned int VAR_22;
 char *VAR_23;
 struct reparse_symlink_data *VAR_24;
 struct reparse_posix_data *VAR_25;
 __u32 VAR_26, VAR_27;
 char *VAR_28;

 FUNC_2(VAR_5, "In Windows reparse style QueryLink for fid %u\n", VAR_14);
 VAR_17 = FUNC_11(VAR_11, 23, VAR_13, (void **) &VAR_19,
        (void **) &VAR_20);
 if (VAR_17)
  return VAR_17;

 VAR_19->TotalParameterCount = 0 ;
 VAR_19->TotalDataCount = 0;
 VAR_19->MaxParameterCount = FUNC_5(2);

 VAR_19->MaxDataCount = FUNC_5(VAR_0 & 0xFFFFFF00);
 VAR_19->MaxSetupCount = 4;
 VAR_19->Reserved = 0;
 VAR_19->ParameterOffset = 0;
 VAR_19->DataCount = 0;
 VAR_19->DataOffset = 0;
 VAR_19->SetupCount = 4;
 VAR_19->SubCommand = FUNC_4(VAR_9);
 VAR_19->ParameterCount = VAR_19->TotalParameterCount;
 VAR_19->FunctionCode = FUNC_5(VAR_4);
 VAR_19->IsFsctl = 1;
 VAR_19->IsRootFlag = 0;
 VAR_19->Fid = VAR_14;
 VAR_19->ByteCount = 0;

 VAR_17 = FUNC_0(VAR_12, VAR_13->ses, (struct smb_hdr *) VAR_19,
    (struct smb_hdr *) VAR_20, &VAR_18, 0);
 if (VAR_17) {
  FUNC_2(VAR_5, "Send error in QueryReparseLinkInfo = %d\n", VAR_17);
  goto qreparse_out;
 }

 VAR_26 = FUNC_9(VAR_20->DataOffset);
 VAR_27 = FUNC_9(VAR_20->DataCount);
 if (FUNC_7(&VAR_20->hdr) < 2 || VAR_26 > 512) {

  VAR_17 = -VAR_1;
  goto qreparse_out;
 }
 if (!VAR_27 || (VAR_27 > 2048)) {
  VAR_17 = -VAR_1;
  FUNC_2(VAR_5, "Invalid return data count on get reparse info ioctl\n");
  goto qreparse_out;
 }
 VAR_28 = 2 + FUNC_7(&VAR_20->hdr) + (char *)&VAR_20->ByteCount;
 VAR_24 = (struct reparse_symlink_data *)
    ((char *)&VAR_20->hdr.Protocol + VAR_26);
 if ((char *)VAR_24 >= VAR_28) {
  VAR_17 = -VAR_1;
  goto qreparse_out;
 }
 if (VAR_24->ReparseTag == FUNC_5(VAR_6)) {
  FUNC_2(VAR_5, "NFS style reparse tag\n");
  VAR_25 = (struct reparse_posix_data *)VAR_24;

  if (VAR_25->InodeType != FUNC_6(VAR_8)) {
   FUNC_2(VAR_5, "unsupported file type 0x%llx\n",
     FUNC_10(VAR_25->InodeType));
   VAR_17 = -VAR_3;
   goto qreparse_out;
  }
  VAR_21 = 1;
  VAR_22 = FUNC_8(VAR_24->ReparseDataLength);
  if (VAR_25->PathBuffer + VAR_22 > VAR_28) {
   FUNC_2(VAR_5, "reparse buf beyond SMB\n");
   VAR_17 = -VAR_1;
   goto qreparse_out;
  }
  *VAR_15 = FUNC_3(VAR_25->PathBuffer,
    VAR_22, VAR_21, VAR_16);
  goto qreparse_out;
 } else if (VAR_24->ReparseTag !=
   FUNC_5(VAR_7)) {
  VAR_17 = -VAR_3;
  goto qreparse_out;
 }


 VAR_23 = FUNC_8(VAR_24->SubstituteNameOffset) +
    VAR_24->PathBuffer;
 VAR_22 = FUNC_8(VAR_24->SubstituteNameLength);
 if (VAR_23 + VAR_22 > VAR_28) {
  FUNC_2(VAR_5, "reparse buf beyond SMB\n");
  VAR_17 = -VAR_1;
  goto qreparse_out;
 }
 if (VAR_20->hdr.Flags2 & VAR_10)
  VAR_21 = 1;
 else
  VAR_21 = 0;


 *VAR_15 = FUNC_3(VAR_23, VAR_22, VAR_21,
            VAR_16);
 if (!*VAR_15)
  VAR_17 = -VAR_2;
qreparse_out:
 FUNC_1(VAR_19);





 return VAR_17;
}
