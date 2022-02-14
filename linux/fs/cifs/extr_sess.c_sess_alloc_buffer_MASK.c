
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_hdr {int smb_buf_length; } ;
struct sess_data {int buf0_type; TYPE_1__* iov; struct cifs_ses* ses; } ;
struct cifs_ses {int dummy; } ;
struct TYPE_2__ {char* iov_base; scalar_t__ iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct smb_hdr*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,struct cifs_ses*,void**) ;

__attribute__((used)) static int
FUNC_4(struct sess_data *VAR_5, int VAR_6)
{
 int VAR_7;
 struct cifs_ses *VAR_8 = VAR_5->ses;
 struct smb_hdr *VAR_9;

 VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_8,
      (void **)&VAR_9);

 if (VAR_7)
  return VAR_7;

 VAR_5->iov[0].iov_base = (char *)VAR_9;
 VAR_5->iov[0].iov_len = FUNC_0(VAR_9->smb_buf_length) + 4;




 VAR_5->buf0_type = VAR_1;


 VAR_5->iov[2].iov_base = FUNC_2(2000, VAR_3);
 if (!VAR_5->iov[2].iov_base) {
  VAR_7 = -VAR_2;
  goto out_free_smb_buf;
 }

 return 0;

out_free_smb_buf:
 FUNC_1(VAR_9);
 VAR_5->iov[0].iov_base = ((void*)0);
 VAR_5->iov[0].iov_len = 0;
 VAR_5->buf0_type = VAR_0;
 return VAR_7;
}
