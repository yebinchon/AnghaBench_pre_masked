
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct cifs_tcon {int tc_count; scalar_t__ tidStatus; TYPE_2__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* server; } ;
struct TYPE_3__ {int response_q; int request_q; } ;


 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 struct cifs_tcon* FUNC_2 (struct cifs_sb_info*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_3)
{
 struct cifs_sb_info *VAR_4 = FUNC_0(VAR_3);
 struct cifs_tcon *VAR_5;

 if (VAR_4 == ((void*)0))
  return;

 VAR_5 = FUNC_2(VAR_4);

 FUNC_4(&VAR_2);
 if ((VAR_5->tc_count > 1) || (VAR_5->tidStatus == VAR_0)) {



  FUNC_5(&VAR_2);
  return;
 } else if (VAR_5->tc_count == 1)
  VAR_5->tidStatus = VAR_0;
 FUNC_5(&VAR_2);



 if (VAR_5->ses && VAR_5->ses->server) {
  FUNC_1(VAR_1, "wake up tasks now - umount begin not complete\n");
  FUNC_6(&VAR_5->ses->server->request_q);
  FUNC_6(&VAR_5->ses->server->response_q);
  FUNC_3(1);

  FUNC_6(&VAR_5->ses->server->response_q);
  FUNC_3(1);
 }

 return;
}
