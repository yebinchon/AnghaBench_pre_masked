
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fid_mutex; void* fid; } ;
struct cifs_tcon {int num_remote_opens; int num_local_opens; int stat_lock; TYPE_1__ crfid; int open_file_lock; int tcon_list; int openFileList; int tc_count; int tidStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct cifs_tcon*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

struct cifs_tcon *
FUNC_7(void)
{
 struct cifs_tcon *VAR_3;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->crfid.fid = FUNC_4(sizeof(*VAR_3->crfid.fid), VAR_1);
 if (!VAR_3->crfid.fid) {
  FUNC_3(VAR_3);
  return ((void*)0);
 }

 FUNC_1(&VAR_2);
 VAR_3->tidStatus = VAR_0;
 ++VAR_3->tc_count;
 FUNC_0(&VAR_3->openFileList);
 FUNC_0(&VAR_3->tcon_list);
 FUNC_6(&VAR_3->open_file_lock);
 FUNC_5(&VAR_3->crfid.fid_mutex);
 FUNC_6(&VAR_3->stat_lock);
 FUNC_2(&VAR_3->num_local_opens, 0);
 FUNC_2(&VAR_3->num_remote_opens, 0);

 return VAR_3;
}
