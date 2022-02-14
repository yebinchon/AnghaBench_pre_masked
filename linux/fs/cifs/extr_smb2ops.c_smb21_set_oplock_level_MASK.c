
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {unsigned int oplock; int vfs_inode; } ;
typedef int message ;
typedef int __u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,char*,int *) ;
 void FUNC_1 (struct cifsInodeInfo*,int,unsigned int,int*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct cifsInodeInfo *VAR_9, __u32 VAR_10,
         unsigned int VAR_11, bool *VAR_12)
{
 char VAR_13[5] = {0};
 unsigned int VAR_14 = 0;

 VAR_10 &= 0xFF;
 if (VAR_10 == VAR_8)
  return;


 if (VAR_10 & VAR_7)
  return FUNC_1(VAR_9, VAR_10, VAR_11,
          VAR_12);

 if (VAR_10 & VAR_5) {
  VAR_14 |= VAR_1;
  FUNC_2(VAR_13, "R");
 }
 if (VAR_10 & VAR_4) {
  VAR_14 |= VAR_0;
  FUNC_2(VAR_13, "H");
 }
 if (VAR_10 & VAR_6) {
  VAR_14 |= VAR_2;
  FUNC_2(VAR_13, "W");
 }
 if (!VAR_14)
  FUNC_3(VAR_13, "None", sizeof(VAR_13));

 VAR_9->oplock = VAR_14;
 FUNC_0(VAR_3, "%s Lease granted on inode %p\n", VAR_13,
   &VAR_9->vfs_inode);
}
