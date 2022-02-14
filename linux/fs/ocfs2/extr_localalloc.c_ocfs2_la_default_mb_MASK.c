
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct ocfs2_super {int s_clustersize; unsigned int osb_clusters_at_boot; unsigned int max_slots; struct super_block* sb; int s_feature_incompat; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct super_block*,int) ;
 int FUNC_1 (struct super_block*,int ,int ) ;
 int FUNC_2 (struct super_block*) ;

unsigned int FUNC_3(struct ocfs2_super *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 struct super_block *VAR_7 = VAR_2->sb;

 VAR_4 = FUNC_0(VAR_2->sb,
  8 * FUNC_1(VAR_7, 0, VAR_2->s_feature_incompat));






 if ((VAR_7->s_blocksize == 512 && VAR_2->s_clustersize <= 8192)
     || (VAR_7->s_blocksize == 1024 && VAR_2->s_clustersize == 4096))
  return VAR_1;





 VAR_4 -= 16;
 VAR_4 &= 0xFFFFFFFB;

 VAR_3 = VAR_4;




 if (VAR_3 > VAR_0) {
  if (VAR_4 > (2 * VAR_0))
   VAR_3 = 256;
  else {
   unsigned int VAR_8 = VAR_4;

   while (VAR_8 > 256)
    VAR_8 = VAR_8 >> 1;

   VAR_3 = VAR_8;
  }
 }

 VAR_6 = VAR_2->osb_clusters_at_boot / VAR_2->max_slots;
 VAR_6 = FUNC_0(VAR_2->sb, VAR_6);

 if (VAR_6 < VAR_3)
  VAR_3 = VAR_6;


 VAR_5 = FUNC_0(VAR_2->sb,
      FUNC_2(VAR_7) * 8);
 if (VAR_3 > VAR_5)
  VAR_3 = VAR_5;

 return VAR_3;
}
