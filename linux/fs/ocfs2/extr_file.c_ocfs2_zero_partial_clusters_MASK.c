
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct ocfs2_super {unsigned int s_clustersize; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*,int *) ;
 int * FUNC_6 (struct ocfs2_super*,int ) ;
 int FUNC_7 (int *,struct inode*,int) ;
 int FUNC_8 (struct inode*,int *,unsigned int,unsigned int) ;
 int FUNC_9 (unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_10 (unsigned long long,unsigned long long) ;
 int FUNC_11 (unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1,
           u64 VAR_2, u64 VAR_3)
{
 int VAR_4 = 0;
 u64 VAR_5 = 0;
 u64 VAR_6 = VAR_2 + VAR_3;
 struct ocfs2_super *VAR_7 = FUNC_2(VAR_1->i_sb);
 unsigned int VAR_8 = VAR_7->s_clustersize;
 handle_t *VAR_9;
 FUNC_9(
  (unsigned long long)FUNC_1(VAR_1)->ip_blkno,
  (unsigned long long)VAR_2, (unsigned long long)VAR_6);






 if ((VAR_2 & (VAR_8 - 1)) == 0 && (VAR_6 & (VAR_8 - 1)) == 0)
  goto out;

 VAR_9 = FUNC_6(VAR_7, VAR_0);
 if (FUNC_0(VAR_9)) {
  VAR_4 = FUNC_3(VAR_9);
  FUNC_4(VAR_4);
  goto out;
 }
 if ((VAR_2 & (VAR_8 - 1)) != 0) {




  VAR_5 = (u64)VAR_7->s_clustersize +
   (VAR_2 & ~(VAR_7->s_clustersize - 1));
  if (VAR_5 > VAR_6)
   VAR_5 = VAR_6;

  FUNC_10(
   (unsigned long long)VAR_2,
   (unsigned long long)VAR_5);

  VAR_4 = FUNC_8(VAR_1, VAR_9, VAR_2,
          VAR_5);
  if (VAR_4)
   FUNC_4(VAR_4);
 }

 if (VAR_5 < VAR_6) {





  VAR_2 = VAR_6 & ~(VAR_7->s_clustersize - 1);

  FUNC_11(
   (unsigned long long)VAR_2, (unsigned long long)VAR_6);

  VAR_4 = FUNC_8(VAR_1, VAR_9, VAR_2, VAR_6);
  if (VAR_4)
   FUNC_4(VAR_4);
 }
 FUNC_7(VAR_9, VAR_1, 1);

 FUNC_5(VAR_7, VAR_9);
out:
 return VAR_4;
}
