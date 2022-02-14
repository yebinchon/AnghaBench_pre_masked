
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct gfs2_rbm {int offset; } ;
struct gfs2_bitmap {unsigned int* bi_clone; int bi_offset; TYPE_1__* bi_bh; } ;
struct TYPE_2__ {unsigned int* b_data; } ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_bitmap* FUNC_0 (struct gfs2_rbm const*) ;

__attribute__((used)) static inline u8 FUNC_1(const struct gfs2_rbm *VAR_3, bool VAR_4)
{
 struct gfs2_bitmap *VAR_5 = FUNC_0(VAR_3);
 const u8 *VAR_6;
 const u8 *VAR_7;
 unsigned int VAR_8;

 if (VAR_4 && VAR_5->bi_clone)
  VAR_6 = VAR_5->bi_clone;
 else
  VAR_6 = VAR_5->bi_bh->b_data;
 VAR_6 += VAR_5->bi_offset;
 VAR_7 = VAR_6 + (VAR_3->offset / VAR_2);
 VAR_8 = (VAR_3->offset % VAR_2) * VAR_1;

 return (*VAR_7 >> VAR_8) & VAR_0;
}
