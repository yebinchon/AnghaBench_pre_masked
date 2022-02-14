
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int mp_fheight; int mp_aheight; int* mp_list; } ;
struct gfs2_sbd {int sd_inptrs; } ;
typedef int sector_t ;



__attribute__((used)) static sector_t FUNC_0(struct gfs2_sbd *VAR_0, struct metapath *VAR_1)
{
 sector_t VAR_2 = 1, VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = VAR_1->mp_fheight - 1; VAR_4 >= 0; VAR_4--) {
  if (VAR_4 < VAR_1->mp_aheight)
   VAR_3 += VAR_1->mp_list[VAR_4] * VAR_2;
  VAR_2 *= VAR_0->sd_inptrs;
 }
 return VAR_3;
}
