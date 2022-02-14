
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct smb_hdr {int smb_buf_length; } ;
struct sess_data {TYPE_1__* iov; int buf0_type; int ses; int xid; } ;
struct kvec {int member_1; int * member_0; } ;
typedef scalar_t__ __u16 ;
struct TYPE_3__ {scalar_t__ iov_base; scalar_t__ iov_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int,int *,int ,struct kvec*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,struct kvec*,int) ;
 int FUNC_5 (scalar_t__,struct smb_hdr*) ;

__attribute__((used)) static int
FUNC_6(struct sess_data *VAR_1)
{
 int VAR_2;
 struct smb_hdr *VAR_3 = (struct smb_hdr *) VAR_1->iov[0].iov_base;
 __u16 VAR_4;
 struct kvec VAR_5 = { ((void*)0), 0 };

 VAR_4 = VAR_1->iov[1].iov_len + VAR_1->iov[2].iov_len;
 VAR_3->smb_buf_length =
  FUNC_3(FUNC_1(VAR_3->smb_buf_length) + VAR_4);
 FUNC_5(VAR_4, VAR_3);

 VAR_2 = FUNC_0(VAR_1->xid, VAR_1->ses,
     VAR_1->iov, 3 ,
     &VAR_1->buf0_type,
     VAR_0, &VAR_5);
 FUNC_2(VAR_1->iov[0].iov_base);
 FUNC_4(&VAR_1->iov[0], &VAR_5, sizeof(struct kvec));

 return VAR_2;
}
