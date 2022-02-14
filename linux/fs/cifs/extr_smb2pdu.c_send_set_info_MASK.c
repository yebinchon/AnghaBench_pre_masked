
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct smb_rqst {unsigned int rq_nvec; struct kvec* rq_iov; } ;
struct smb2_set_info_rsp {int dummy; } ;
struct kvec {scalar_t__ iov_base; } ;
struct cifs_tcon {int tid; struct cifs_ses* ses; } ;
struct cifs_ses {int Suid; int server; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct smb_rqst*) ;
 int FUNC_1 (struct cifs_tcon*,struct smb_rqst*,int ,int ,int ,scalar_t__,scalar_t__,int ,void**,unsigned int*) ;
 int FUNC_2 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_3 (struct cifs_tcon*,int ) ;
 int FUNC_4 (int,struct smb2_set_info_rsp*) ;
 int FUNC_5 (struct kvec*) ;
 struct kvec* FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (struct smb_rqst*,int ,int) ;
 scalar_t__ FUNC_8 (struct cifs_tcon*) ;
 int FUNC_9 (unsigned int const,int ,int ,int ,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_10(const unsigned int VAR_6, struct cifs_tcon *VAR_7,
        u64 VAR_8, u64 VAR_9, u32 VAR_10, u8 VAR_11,
        u8 VAR_12, u32 VAR_13, unsigned int VAR_14,
  void **VAR_15, unsigned int *VAR_16)
{
 struct smb_rqst VAR_17;
 struct smb2_set_info_rsp *VAR_18 = ((void*)0);
 struct kvec *VAR_19;
 struct kvec VAR_20;
 int VAR_21 = 0;
 int VAR_22;
 struct cifs_ses *VAR_23 = VAR_7->ses;
 int VAR_24 = 0;

 if (!VAR_23 || !(VAR_23->server))
  return -VAR_2;

 if (!VAR_14)
  return -VAR_1;

 if (FUNC_8(VAR_7))
  VAR_24 |= VAR_0;

 VAR_19 = FUNC_6(VAR_14, sizeof(struct kvec), VAR_4);
 if (!VAR_19)
  return -VAR_3;

 FUNC_7(&VAR_17, 0, sizeof(struct smb_rqst));
 VAR_17.rq_iov = VAR_19;
 VAR_17.rq_nvec = VAR_14;

 VAR_21 = FUNC_1(VAR_7, &VAR_17, VAR_8, VAR_9, VAR_10,
    VAR_11, VAR_12, VAR_13,
    VAR_15, VAR_16);
 if (VAR_21) {
  FUNC_5(VAR_19);
  return VAR_21;
 }


 VAR_21 = FUNC_2(VAR_6, VAR_23, &VAR_17, &VAR_22, VAR_24,
       &VAR_20);
 FUNC_0(&VAR_17);
 VAR_18 = (struct smb2_set_info_rsp *)VAR_20.iov_base;

 if (VAR_21 != 0) {
  FUNC_3(VAR_7, VAR_5);
  FUNC_9(VAR_6, VAR_8, VAR_7->tid,
    VAR_23->Suid, VAR_11, (__u32)VAR_12, VAR_21);
 }

 FUNC_4(VAR_22, VAR_18);
 FUNC_5(VAR_19);
 return VAR_21;
}
