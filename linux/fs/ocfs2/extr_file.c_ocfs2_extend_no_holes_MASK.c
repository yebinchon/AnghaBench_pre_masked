
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_inode_info {int ip_flags; scalar_t__ ip_clusters; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct buffer_head*,int ) ;

int FUNC_7(struct inode *VAR_1, struct buffer_head *VAR_2,
     u64 VAR_3, u64 VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 struct ocfs2_inode_info *VAR_7 = FUNC_1(VAR_1);





 FUNC_0(!VAR_2 && FUNC_5(VAR_1));
 FUNC_0(!VAR_2 && !(VAR_7->ip_flags & VAR_0));

 VAR_6 = FUNC_3(VAR_1->i_sb, VAR_3);
 if (VAR_6 < VAR_7->ip_clusters)
  VAR_6 = 0;
 else
  VAR_6 -= VAR_7->ip_clusters;

 if (VAR_6) {
  VAR_5 = FUNC_4(VAR_1, VAR_7->ip_clusters,
           VAR_6, 0);
  if (VAR_5) {
   FUNC_2(VAR_5);
   goto out;
  }
 }






 VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_4);
 if (VAR_5 < 0)
  FUNC_2(VAR_5);

out:
 return VAR_5;
}
