
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int* mp_list; struct buffer_head** mp_bh; } ;
struct gfs2_sbd {int dummy; } ;
struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;
typedef int __u16 ;
typedef scalar_t__ __be64 ;


 unsigned int VAR_0 ;
 scalar_t__* FUNC_0 (unsigned int,struct metapath*) ;
 scalar_t__ FUNC_1 (struct metapath*,int*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct gfs2_sbd *VAR_1, struct metapath *VAR_2,
        unsigned int VAR_3,
        __u16 *VAR_4, unsigned int VAR_5)
{
 struct buffer_head *VAR_6 = VAR_2->mp_bh[VAR_3];
 __be64 *VAR_7, *VAR_8, *VAR_9;

 VAR_7 = FUNC_0(VAR_3, VAR_2);
 VAR_8 = VAR_7 + VAR_2->mp_list[VAR_3];
 VAR_9 = (__be64 *)(VAR_6->b_data + VAR_6->b_size);
 if (VAR_4 && FUNC_1(VAR_2, VAR_4, VAR_3)) {
  bool VAR_10 = VAR_3 < VAR_5;
  VAR_9 = VAR_7 + VAR_4[VAR_3] + VAR_10;
 }

 while (VAR_8 < VAR_9) {
  if (*VAR_8) {
   VAR_2->mp_list[VAR_3] = VAR_8 - VAR_7;
   VAR_3++;
   if (VAR_3 < VAR_0)
    VAR_2->mp_list[VAR_3] = 0;
   return 1;
  }
  VAR_8++;
 }
 return 0;
}
