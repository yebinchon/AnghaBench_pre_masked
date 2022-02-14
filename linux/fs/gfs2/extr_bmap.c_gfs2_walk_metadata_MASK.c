
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u16 ;
struct metapath {int mp_fheight; unsigned int mp_aheight; unsigned int* mp_list; int ** mp_bh; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {unsigned int sd_inptrs; unsigned int sd_diptrs; } ;
struct gfs2_inode {scalar_t__ i_height; } ;
typedef int (* gfs2_metadata_walker ) (struct metapath*,unsigned int) ;
typedef enum walker_status { ____Placeholder_walker_status } walker_status ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 struct gfs2_inode* FUNC_2 (struct inode*) ;
 struct gfs2_sbd* FUNC_3 (struct inode*) ;



 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (struct gfs2_inode*,struct metapath*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct metapath *VAR_1,
  u64 VAR_2, gfs2_metadata_walker VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_2(VAR_0);
 struct gfs2_sbd *VAR_5 = FUNC_3(VAR_0);
 u64 VAR_6 = 1;
 unsigned int VAR_7;
 int VAR_8;






 for (VAR_7 = VAR_1->mp_fheight - 1; VAR_7 >= VAR_1->mp_aheight; VAR_7--) {
  VAR_2 += VAR_1->mp_list[VAR_7] * VAR_6;
  VAR_1->mp_list[VAR_7] = 0;
  VAR_6 *= VAR_5->sd_inptrs;
 }

 for (;;) {
  u16 VAR_9 = VAR_1->mp_list[VAR_7];
  enum walker_status VAR_10;
  unsigned int VAR_11;
  u64 VAR_12;


  VAR_11 = (VAR_7 >= 1 ? VAR_5->sd_inptrs : VAR_5->sd_diptrs) - VAR_9;
  VAR_12 = VAR_11 * VAR_6;
  if (VAR_12 > VAR_2)
   VAR_11 = FUNC_1(VAR_2, VAR_6);
  VAR_10 = VAR_3(VAR_1, VAR_11);
  switch (VAR_10) {
  case 128:
   return 1;
  case 129:
   FUNC_0(VAR_1->mp_aheight == VAR_1->mp_fheight);
   VAR_11 = VAR_1->mp_list[VAR_7] - VAR_9;
   VAR_12 = VAR_11 * VAR_6;
   break;
  case 130:
   break;
  }
  if (VAR_12 >= VAR_2)
   break;
  VAR_2 -= VAR_12;
  if (VAR_10 == 129)
   goto fill_up_metapath;

lower_metapath:

  FUNC_4(VAR_1->mp_bh[VAR_7]);
  VAR_1->mp_bh[VAR_7] = ((void*)0);
  VAR_1->mp_list[VAR_7] = 0;
  if (!VAR_7)
   break;
  VAR_7--;
  VAR_6 *= VAR_5->sd_inptrs;


  (VAR_1->mp_list[VAR_7])++;
  if (VAR_1->mp_list[VAR_7] >= VAR_5->sd_inptrs) {
   if (!VAR_7)
    break;
   goto lower_metapath;
  }

fill_up_metapath:

  VAR_8 = FUNC_6(VAR_4, VAR_1, VAR_4->i_height - 1);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7 += VAR_8;
  for (; VAR_8; VAR_8--)
   FUNC_5(VAR_6, VAR_5->sd_inptrs);
  VAR_1->mp_aheight = VAR_7 + 1;
 }
 return 0;
}
