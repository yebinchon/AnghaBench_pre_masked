
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smb_com_ntransact_rsp {int ParameterCount; } ;
struct kvec {char* iov_base; scalar_t__ iov_len; } ;
struct TYPE_8__ {int num_acl_get; } ;
struct TYPE_9__ {TYPE_2__ cifs_stats; } ;
struct cifs_tcon {TYPE_3__ stats; int ses; } ;
struct cifs_ntsd {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __le32 ;
struct TYPE_7__ {int smb_buf_length; } ;
struct TYPE_10__ {TYPE_1__ hdr; int ByteCount; void* AclFlags; int Fid; scalar_t__ MaxSetupCount; void* MaxParameterCount; } ;
typedef TYPE_4__ QUERY_SEC_DESC_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int const,int ,struct kvec*,int,int*,int ,struct kvec*) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 struct cifs_ntsd* FUNC_9 (char*,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int,struct cifs_tcon*,void**) ;
 int FUNC_12 (char*,char**,char**,int*,int*) ;

int
FUNC_13(const unsigned int VAR_10, struct cifs_tcon *VAR_11, __u16 VAR_12,
    struct cifs_ntsd **VAR_13, __u32 *VAR_14)
{
 int VAR_15 = 0;
 int VAR_16 = 0;
 QUERY_SEC_DESC_REQ *VAR_17;
 struct kvec VAR_18[1];
 struct kvec VAR_19;

 FUNC_2(VAR_6, "GetCifsACL\n");

 *VAR_14 = 0;
 *VAR_13 = ((void*)0);

 VAR_15 = FUNC_11(VAR_8, 0,
   8 , VAR_11, (void **) &VAR_17);
 if (VAR_15)
  return VAR_15;

 VAR_17->MaxParameterCount = FUNC_6(4);

 VAR_17->MaxSetupCount = 0;
 VAR_17->Fid = VAR_12;
 VAR_17->AclFlags = FUNC_6(VAR_2 | VAR_1 |
         VAR_0);
 VAR_17->ByteCount = FUNC_5(11);
 FUNC_8(VAR_17, 11);
 VAR_18[0].iov_base = (char *)VAR_17;
 VAR_18[0].iov_len = FUNC_1(VAR_17->hdr.smb_buf_length) + 4;

 VAR_15 = FUNC_0(VAR_10, VAR_11->ses, VAR_18, 1 , &VAR_16,
     0, &VAR_19);
 FUNC_3(VAR_17);
 FUNC_4(&VAR_11->stats.cifs_stats.num_acl_get);
 if (VAR_15) {
  FUNC_2(VAR_6, "Send error in QuerySecDesc = %d\n", VAR_15);
 } else {
  __le32 *VAR_20;
  __u32 VAR_21;
  __u32 VAR_22;
  struct smb_com_ntransact_rsp *VAR_23;
  char *VAR_24;


  VAR_15 = FUNC_12(VAR_19.iov_base, (char **)&VAR_20,
     &VAR_24, &VAR_21, VAR_14);
  if (VAR_15)
   goto qsec_out;
  VAR_23 = (struct smb_com_ntransact_rsp *)VAR_19.iov_base;

  FUNC_2(VAR_6, "smb %p parm %p data %p\n",
    VAR_23, VAR_20, *VAR_13);

  if (FUNC_10(VAR_23->ParameterCount) != 4) {
   VAR_15 = -VAR_4;
   *VAR_14 = 0;
   goto qsec_out;
  }



  VAR_22 = FUNC_10(*VAR_20);
  if (VAR_22 != *VAR_14) {
   FUNC_2(VAR_9, "acl length %d does not match %d\n",
     VAR_22, *VAR_14);
   if (*VAR_14 > VAR_22)
    *VAR_14 = VAR_22;
  }



  if ((*VAR_14 < sizeof(struct cifs_ntsd) + 8) ||
      (*VAR_14 >= 64 * 1024)) {
   FUNC_2(VAR_9, "bad acl length %d\n", *VAR_14);
   VAR_15 = -VAR_3;
   *VAR_14 = 0;
  } else {
   *VAR_13 = FUNC_9(VAR_24, *VAR_14, VAR_7);
   if (*VAR_13 == ((void*)0)) {
    *VAR_14 = 0;
    VAR_15 = -VAR_5;
   }
  }
 }
qsec_out:
 FUNC_7(VAR_16, VAR_19.iov_base);
 return VAR_15;
}
