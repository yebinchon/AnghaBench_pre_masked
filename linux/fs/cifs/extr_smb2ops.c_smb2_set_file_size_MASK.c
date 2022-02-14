
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_size; } ;
struct cifs_tcon {int dummy; } ;
struct TYPE_2__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {int pid; TYPE_1__ fid; int dentry; } ;
typedef int __u8 ;
typedef scalar_t__ __u64 ;
typedef int __le64 ;


 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (unsigned int const,struct cifs_tcon*,struct cifsFileInfo*,struct inode*,int) ;

__attribute__((used)) static int
FUNC_4(const unsigned int VAR_0, struct cifs_tcon *VAR_1,
     struct cifsFileInfo *VAR_2, __u64 VAR_3, bool VAR_4)
{
 __le64 VAR_5 = FUNC_1(VAR_3);
 struct inode *VAR_6;





 VAR_6 = FUNC_2(VAR_2->dentry);

 if (!VAR_4 && (VAR_3 > VAR_6->i_size + 8192)) {
  __u8 VAR_7 = 1;


  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_6, VAR_7);
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2->fid.persistent_fid,
       VAR_2->fid.volatile_fid, VAR_2->pid, &VAR_5);
}
