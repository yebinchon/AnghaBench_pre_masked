
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cifs_tcon {int fscache; } ;
struct cifs_fscache_inode_auxdata {int last_change_time_nsec; int last_write_time_nsec; int last_change_time_sec; int last_write_time_sec; int eof; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int i_size; TYPE_2__ i_ctime; TYPE_1__ i_mtime; } ;
struct cifsInodeInfo {TYPE_3__ vfs_inode; int uniqueid; int fscache; int server_eof; } ;
typedef int auxdata ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int,struct cifs_fscache_inode_auxdata*,int,struct cifsInodeInfo*,int ,int) ;
 int FUNC_1 (struct cifs_fscache_inode_auxdata*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct cifsInodeInfo *VAR_1,
           struct cifs_tcon *VAR_2)
{
 struct cifs_fscache_inode_auxdata VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.eof = VAR_1->server_eof;
 VAR_3.last_write_time_sec = VAR_1->vfs_inode.i_mtime.tv_sec;
 VAR_3.last_change_time_sec = VAR_1->vfs_inode.i_ctime.tv_sec;
 VAR_3.last_write_time_nsec = VAR_1->vfs_inode.i_mtime.tv_nsec;
 VAR_3.last_change_time_nsec = VAR_1->vfs_inode.i_ctime.tv_nsec;

 VAR_1->fscache =
  FUNC_0(VAR_2->fscache,
           &VAR_0,
           &VAR_1->uniqueid, sizeof(VAR_1->uniqueid),
           &VAR_3, sizeof(VAR_3),
           VAR_1, VAR_1->vfs_inode.i_size, 1);
}
