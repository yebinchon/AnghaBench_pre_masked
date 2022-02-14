
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {scalar_t__* mp_list; } ;
struct gfs2_sbd {scalar_t__ sd_inptrs; scalar_t__ sd_diptrs; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (struct metapath*,scalar_t__*,int) ;

__attribute__((used)) static inline bool FUNC_1(struct gfs2_sbd *VAR_0,
        struct metapath *VAR_1, int VAR_2,
        __u16 *VAR_3, unsigned int VAR_4)
{
 __u16 VAR_5;

 if (VAR_3) {
  bool VAR_6 = VAR_2 < VAR_4;
  if (!FUNC_0(VAR_1, VAR_3, VAR_2))
   return 0;
  VAR_5 = VAR_3[VAR_2] + VAR_6;
 } else
  VAR_5 = (VAR_2 > 0) ? VAR_0->sd_inptrs : VAR_0->sd_diptrs;
 return VAR_1->mp_list[VAR_2] >= VAR_5;
}
