
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gfs2_jdesc {scalar_t__ jd_blocks; } ;



__attribute__((used)) static inline void FUNC_0(struct gfs2_jdesc *VAR_0, u32 *VAR_1)
{
 if (++*VAR_1 == VAR_0->jd_blocks)
         *VAR_1 = 0;
}
