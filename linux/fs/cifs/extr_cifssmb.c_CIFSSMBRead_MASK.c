
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct smb_com_readx_req {scalar_t__ ByteCount; } ;
struct kvec {char* iov_base; scalar_t__ iov_len; } ;
struct TYPE_10__ {int num_reads; } ;
struct TYPE_11__ {TYPE_2__ cifs_stats; } ;
struct cifs_tcon {TYPE_3__ stats; TYPE_8__* ses; } ;
struct cifs_io_parms {int pid; unsigned int netfid; int offset; unsigned int length; struct cifs_tcon* tcon; } ;
typedef int __u64 ;
typedef int __u32 ;
typedef unsigned int __u16 ;
struct TYPE_15__ {int capabilities; int * server; } ;
struct TYPE_9__ {int smb_buf_length; void* PidHigh; void* Pid; } ;
struct TYPE_14__ {int AndXCommand; unsigned int Fid; TYPE_1__ hdr; scalar_t__ ByteCount; void* MaxCountHigh; void* MaxCount; scalar_t__ Remaining; void* OffsetHigh; void* OffsetLow; } ;
struct TYPE_12__ {int Protocol; } ;
struct TYPE_13__ {int DataOffset; TYPE_4__ hdr; int DataLength; int DataLengthHigh; } ;
typedef TYPE_5__ READ_RSP ;
typedef TYPE_6__ READ_REQ ;


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
 int FUNC_0 (unsigned int const,TYPE_8__*,struct kvec*,int,int*,int ,struct kvec*) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (unsigned int) ;
 void* FUNC_6 (unsigned int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int ,int,struct cifs_tcon*,void**) ;

int
FUNC_11(const unsigned int VAR_12, struct cifs_io_parms *VAR_13,
     unsigned int *VAR_14, char **VAR_15, int *VAR_16)
{
 int VAR_17 = -VAR_6;
 READ_REQ *VAR_18 = ((void*)0);
 READ_RSP *VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);
 int VAR_21;
 int VAR_22 = 0;
 struct kvec VAR_23[1];
 struct kvec VAR_24;
 __u32 VAR_25 = VAR_13->pid;
 __u16 VAR_26 = VAR_13->netfid;
 __u64 VAR_27 = VAR_13->offset;
 struct cifs_tcon *VAR_28 = VAR_13->tcon;
 unsigned int VAR_29 = VAR_13->length;

 FUNC_2(VAR_9, "Reading %d bytes on fid %d\n", VAR_29, VAR_26);
 if (VAR_28->ses->capabilities & VAR_0)
  VAR_21 = 12;
 else {
  VAR_21 = 10;
  if ((VAR_27 >> 32) > 0) {

   return -VAR_8;
  }
 }

 *VAR_14 = 0;
 VAR_17 = FUNC_10(VAR_10, VAR_21, VAR_28, (void **) &VAR_18);
 if (VAR_17)
  return VAR_17;

 VAR_18->hdr.Pid = FUNC_5((__u16)VAR_25);
 VAR_18->hdr.PidHigh = FUNC_5((__u16)(VAR_25 >> 16));


 if (VAR_28->ses->server == ((void*)0))
  return -VAR_7;

 VAR_18->AndXCommand = 0xFF;
 VAR_18->Fid = VAR_26;
 VAR_18->OffsetLow = FUNC_6(VAR_27 & 0xFFFFFFFF);
 if (VAR_21 == 12)
  VAR_18->OffsetHigh = FUNC_6(VAR_27 >> 32);

 VAR_18->Remaining = 0;
 VAR_18->MaxCount = FUNC_5(VAR_29 & 0xFFFF);
 VAR_18->MaxCountHigh = FUNC_6(VAR_29 >> 16);
 if (VAR_21 == 12)
  VAR_18->ByteCount = 0;
 else {

  struct smb_com_readx_req *VAR_30 =
   (struct smb_com_readx_req *)VAR_18;
  VAR_30->ByteCount = 0;
 }

 VAR_23[0].iov_base = (char *)VAR_18;
 VAR_23[0].iov_len = FUNC_1(VAR_18->hdr.smb_buf_length) + 4;
 VAR_17 = FUNC_0(VAR_12, VAR_28->ses, VAR_23, 1, &VAR_22,
     VAR_3, &VAR_24);
 FUNC_3(VAR_18);
 FUNC_4(&VAR_28->stats.cifs_stats.num_reads);
 VAR_19 = (READ_RSP *)VAR_24.iov_base;
 if (VAR_17) {
  FUNC_2(VAR_11, "Send error in read = %d\n", VAR_17);
 } else {
  int VAR_31 = FUNC_8(VAR_19->DataLengthHigh);
  VAR_31 = VAR_31 << 16;
  VAR_31 += FUNC_8(VAR_19->DataLength);
  *VAR_14 = VAR_31;


  if ((VAR_31 > VAR_1)
    || (VAR_31 > VAR_29)) {
   FUNC_2(VAR_9, "bad length %d for count %d\n",
     VAR_31, VAR_29);
   VAR_17 = -VAR_8;
   *VAR_14 = 0;
  } else {
   VAR_20 = (char *) (&VAR_19->hdr.Protocol) +
     FUNC_8(VAR_19->DataOffset);




   if (*VAR_15)
    FUNC_9(*VAR_15, VAR_20, VAR_31);
  }
 }

 if (*VAR_15) {
  FUNC_7(VAR_22, VAR_24.iov_base);
 } else if (VAR_22 != VAR_4) {

  *VAR_15 = VAR_24.iov_base;
  if (VAR_22 == VAR_5)
   *VAR_16 = VAR_5;
  else if (VAR_22 == VAR_2)
   *VAR_16 = VAR_2;
 }



 return VAR_17;
}
