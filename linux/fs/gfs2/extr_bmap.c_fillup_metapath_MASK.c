
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {unsigned int mp_aheight; scalar_t__* mp_bh; } ;
struct gfs2_inode {int dummy; } ;


 int FUNC_0 (struct gfs2_inode*,struct metapath*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct gfs2_inode *VAR_0, struct metapath *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = 0;
 int VAR_4;

 if (VAR_2) {

  for (VAR_3 = VAR_2 - 1; VAR_3 > 0; VAR_3--) {
   if (VAR_1->mp_bh[VAR_3])
    break;
  }
 }
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;
 return VAR_1->mp_aheight - VAR_3 - 1;
}
