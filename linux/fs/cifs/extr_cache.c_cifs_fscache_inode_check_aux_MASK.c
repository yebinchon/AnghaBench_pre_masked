
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct cifs_fscache_inode_auxdata {int last_change_time_nsec; int last_write_time_nsec; int last_change_time_sec; int last_write_time_sec; int eof; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {TYPE_2__ i_ctime; TYPE_1__ i_mtime; } ;
struct cifsInodeInfo {TYPE_3__ vfs_inode; int server_eof; } ;
typedef int loff_t ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
typedef int auxdata ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const*,struct cifs_fscache_inode_auxdata*,int) ;
 int FUNC_1 (struct cifs_fscache_inode_auxdata*,int ,int) ;

__attribute__((used)) static enum
fscache_checkaux FUNC_2(void *VAR_2,
           const void *VAR_3,
           uint16_t VAR_4,
           loff_t VAR_5)
{
 struct cifs_fscache_inode_auxdata VAR_6;
 struct cifsInodeInfo *VAR_7 = VAR_2;

 if (VAR_4 != sizeof(VAR_6))
  return VAR_0;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.eof = VAR_7->server_eof;
 VAR_6.last_write_time_sec = VAR_7->vfs_inode.i_mtime.tv_sec;
 VAR_6.last_change_time_sec = VAR_7->vfs_inode.i_ctime.tv_sec;
 VAR_6.last_write_time_nsec = VAR_7->vfs_inode.i_mtime.tv_nsec;
 VAR_6.last_change_time_nsec = VAR_7->vfs_inode.i_ctime.tv_nsec;

 if (FUNC_0(VAR_3, &VAR_6, VAR_4) != 0)
  return VAR_0;

 return VAR_1;
}
