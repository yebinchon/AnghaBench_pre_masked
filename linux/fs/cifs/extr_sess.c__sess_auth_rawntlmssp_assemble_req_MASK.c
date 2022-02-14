
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sess_data {TYPE_3__* iov; int nls_cp; struct cifs_ses* ses; } ;
struct cifs_ses {int dummy; } ;
typedef int __u32 ;
struct TYPE_6__ {int Flags2; } ;
struct TYPE_7__ {int Capabilities; TYPE_1__ hdr; } ;
struct TYPE_9__ {TYPE_2__ req; } ;
struct TYPE_8__ {char* iov_base; int iov_len; } ;
typedef TYPE_4__ SESSION_SETUP_ANDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cifs_ses*,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**,int ) ;

__attribute__((used)) static int
FUNC_4(struct sess_data *VAR_5)
{
 SESSION_SETUP_ANDX *VAR_6;
 struct cifs_ses *VAR_7 = VAR_5->ses;
 __u32 VAR_8;
 char *VAR_9;

 VAR_6 = (SESSION_SETUP_ANDX *)VAR_5->iov[0].iov_base;

 VAR_8 = FUNC_1(VAR_7, VAR_6);
 if ((VAR_6->req.hdr.Flags2 & VAR_3) == 0) {
  FUNC_0(VAR_4, "NTLMSSP requires Unicode support\n");
  return -VAR_1;
 }

 VAR_6->req.hdr.Flags2 |= VAR_2;
 VAR_8 |= VAR_0;
 VAR_6->req.Capabilities |= FUNC_2(VAR_8);

 VAR_9 = VAR_5->iov[2].iov_base;

 if ((VAR_5->iov[0].iov_len + VAR_5->iov[1].iov_len) % 2) {
  *VAR_9 = 0;
  VAR_9++;
 }
 FUNC_3(&VAR_9, VAR_5->nls_cp);

 VAR_5->iov[2].iov_len = (long) VAR_9 -
     (long) VAR_5->iov[2].iov_base;

 return 0;
}
