
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tr_hdr ;
struct smb_rqst {int iov_len; int rq_nvec; struct smb_rqst* rq_iov; struct smb_rqst* iov_base; } ;
struct smb2_transform_hdr {int iov_len; int rq_nvec; struct smb2_transform_hdr* rq_iov; struct smb2_transform_hdr* iov_base; } ;
struct kvec {int iov_len; int rq_nvec; struct kvec* rq_iov; struct kvec* iov_base; } ;
struct TCP_Server_Info {TYPE_1__* ops; } ;
typedef int iov ;
typedef int cur_rqst ;
struct TYPE_2__ {int (* init_transform_rq ) (struct TCP_Server_Info*,int,struct smb_rqst*,struct smb_rqst*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct TCP_Server_Info*,int,struct smb_rqst*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct smb_rqst*,int ,int) ;
 int FUNC_3 (int,struct smb_rqst*) ;
 int FUNC_4 (struct TCP_Server_Info*,int,struct smb_rqst*,struct smb_rqst*) ;

__attribute__((used)) static int
FUNC_5(struct TCP_Server_Info *VAR_5, int VAR_6,
       struct smb_rqst *VAR_7, int VAR_8)
{
 struct kvec VAR_9;
 struct smb2_transform_hdr VAR_10;
 struct smb_rqst VAR_11[VAR_3];
 int VAR_12;

 if (!(VAR_8 & VAR_0))
  return FUNC_0(VAR_5, VAR_6, VAR_7);

 if (VAR_6 > VAR_3 - 1)
  return -VAR_2;

 FUNC_2(&VAR_11[0], 0, sizeof(VAR_11));
 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(&VAR_10, 0, sizeof(VAR_10));

 VAR_9.iov_base = &VAR_10;
 VAR_9.iov_len = sizeof(VAR_10);
 VAR_11[0].rq_iov = &VAR_9;
 VAR_11[0].rq_nvec = 1;

 if (!VAR_5->ops->init_transform_rq) {
  FUNC_1(VAR_4, "Encryption requested but transform "
    "callback is missing\n");
  return -VAR_1;
 }

 VAR_12 = VAR_5->ops->init_transform_rq(VAR_5, VAR_6 + 1,
         &VAR_11[0], VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_5, VAR_6 + 1, &VAR_11[0]);
 FUNC_3(VAR_6, &VAR_11[1]);
 return VAR_12;
}
