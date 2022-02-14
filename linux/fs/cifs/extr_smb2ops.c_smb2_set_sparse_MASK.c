
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct cifs_tcon {int broken_sparse_sup; } ;
struct cifsInodeInfo {int cifsAttrs; } ;
struct TYPE_2__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; } ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int,scalar_t__*,int,int ,int *,int *) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static bool FUNC_3(const unsigned int VAR_4, struct cifs_tcon *VAR_5,
  struct cifsFileInfo *VAR_6, struct inode *VAR_7, __u8 VAR_8)
{
 struct cifsInodeInfo *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_7);


 if ((VAR_9->cifsAttrs & VAR_1) && VAR_8)
  return 1;

 if (!(VAR_9->cifsAttrs & VAR_1) && !VAR_8)
  return 1;
 if (VAR_5->broken_sparse_sup)
  return 0;

 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6->fid.persistent_fid,
   VAR_6->fid.volatile_fid, VAR_2,
   1 ,
   &VAR_8, 1, VAR_0, ((void*)0), ((void*)0));
 if (VAR_10) {
  VAR_5->broken_sparse_sup = 1;
  FUNC_2(VAR_3, "set sparse rc = %d\n", VAR_10);
  return 0;
 }

 if (VAR_8)
  VAR_9->cifsAttrs |= VAR_1;
 else
  VAR_9->cifsAttrs &= (~VAR_1);

 return 1;
}
