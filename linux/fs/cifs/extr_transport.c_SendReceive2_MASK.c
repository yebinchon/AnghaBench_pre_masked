
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct kvec {int iov_base; int iov_len; } ;
struct cifs_ses {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int const,struct kvec*) ;
 int FUNC_1 (struct kvec*) ;
 struct kvec* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct kvec*,struct kvec*,int) ;
 int FUNC_4 (struct smb_rqst*,int ,int) ;

int
FUNC_5(const unsigned int VAR_4, struct cifs_ses *VAR_5,
      struct kvec *VAR_6, int VAR_7, int *VAR_8 ,
      const int VAR_9, struct kvec *VAR_10)
{
 struct smb_rqst VAR_11;
 struct kvec VAR_12[VAR_0], *VAR_13;
 int VAR_14;

 if (VAR_7 + 1 > VAR_0) {
  VAR_13 = FUNC_2(VAR_7 + 1, sizeof(struct kvec),
     VAR_3);
  if (!VAR_13) {

   *VAR_8 = VAR_1;
   return -VAR_2;
  }
 } else
  VAR_13 = VAR_12;


 FUNC_3(VAR_13 + 1, VAR_6, (sizeof(struct kvec) * VAR_7));

 VAR_13[0].iov_base = VAR_13[1].iov_base;
 VAR_13[0].iov_len = 4;
 VAR_13[1].iov_base += 4;
 VAR_13[1].iov_len -= 4;

 FUNC_4(&VAR_11, 0, sizeof(struct smb_rqst));
 VAR_11.rq_iov = VAR_13;
 VAR_11.rq_nvec = VAR_7 + 1;

 VAR_14 = FUNC_0(VAR_4, VAR_5, &VAR_11, VAR_8, VAR_9, VAR_10);
 if (VAR_7 + 1 > VAR_0)
  FUNC_1(VAR_13);
 return VAR_14;
}
