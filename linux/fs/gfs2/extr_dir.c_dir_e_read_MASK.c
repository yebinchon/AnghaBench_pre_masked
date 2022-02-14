
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct gfs2_inode {unsigned int i_depth; int * i_hash_cache; } ;
struct file_ra_state {scalar_t__ start; } ;
struct dir_context {int pos; } ;
typedef int __be64 ;


 int FUNC_0 (unsigned int) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct dir_context*,int*,unsigned int*,int ) ;
 int FUNC_8 (struct inode*,int,int,struct file_ra_state*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0, struct dir_context *VAR_1,
        struct file_ra_state *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4, VAR_5 = 0;
 u32 VAR_6, VAR_7;
 __be64 *VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 unsigned VAR_11 = 0;

 VAR_4 = FUNC_0(VAR_3->i_depth);
 VAR_6 = FUNC_6(VAR_1->pos);
 VAR_7 = VAR_6 >> (32 - VAR_3->i_depth);

 if (VAR_3->i_hash_cache == ((void*)0))
  VAR_2->start = 0;
 VAR_8 = FUNC_5(VAR_3);
 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);

 FUNC_8(VAR_0, VAR_4, VAR_7, VAR_2);

 while (VAR_7 < VAR_4) {
  VAR_10 = FUNC_7(VAR_0, VAR_1,
        &VAR_9, &VAR_11,
        FUNC_4(VAR_8[VAR_7]));
  if (VAR_10)
   break;

  VAR_5 = FUNC_0(VAR_3->i_depth - VAR_11);
  VAR_7 = (VAR_7 & ~(VAR_5 - 1)) + VAR_5;
 }

 if (VAR_10 > 0)
  VAR_10 = 0;
 return VAR_10;
}
