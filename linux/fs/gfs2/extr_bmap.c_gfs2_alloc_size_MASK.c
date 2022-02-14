
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct metapath {scalar_t__ mp_fheight; scalar_t__ mp_aheight; scalar_t__* mp_list; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {unsigned int sd_inptrs; unsigned int sd_diptrs; } ;
struct gfs2_inode {scalar_t__ i_height; } ;
typedef scalar_t__ __be64 ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct gfs2_inode*) ;
 scalar_t__* FUNC_3 (scalar_t__,struct metapath*) ;
 scalar_t__* FUNC_4 (scalar_t__,struct metapath*) ;

__attribute__((used)) static u64 FUNC_5(struct inode *VAR_0, struct metapath *VAR_1, u64 VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_0);
 struct gfs2_sbd *VAR_4 = FUNC_1(VAR_0);
 const __be64 *VAR_5, *VAR_6, *VAR_7;
 if (FUNC_2(VAR_3) || VAR_1->mp_fheight != VAR_1->mp_aheight) {
  unsigned int VAR_8 = VAR_1->mp_fheight > 1 ?
   VAR_4->sd_inptrs : VAR_4->sd_diptrs;
  VAR_8 -= VAR_1->mp_list[VAR_1->mp_fheight - 1];
  if (VAR_2 > VAR_8)
   VAR_2 = VAR_8;
  return VAR_2;
 }

 VAR_5 = FUNC_4(VAR_3->i_height - 1, VAR_1);
 VAR_7 = FUNC_3(VAR_3->i_height - 1, VAR_1);
 if (VAR_7 - VAR_5 > VAR_2)
  VAR_7 = VAR_5 + VAR_2;
 for (VAR_6 = VAR_5; VAR_6 < VAR_7; VAR_6++) {
  if (*VAR_6)
   break;
 }
 return VAR_6 - VAR_5;
}
