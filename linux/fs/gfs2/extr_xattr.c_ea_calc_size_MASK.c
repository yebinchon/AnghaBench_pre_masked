
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {unsigned int sd_jbsize; } ;
struct gfs2_ea_header {int dummy; } ;
typedef int __be64 ;


 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (size_t,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gfs2_sbd *VAR_0, unsigned int VAR_1, size_t VAR_2,
   unsigned int *VAR_3)
{
 unsigned int VAR_4 = VAR_0->sd_jbsize;


 *VAR_3 = FUNC_0(sizeof(struct gfs2_ea_header) + VAR_1 + VAR_2, 8);

 if (*VAR_3 <= VAR_4)
  return 1;


 *VAR_3 = FUNC_0(sizeof(struct gfs2_ea_header) + VAR_1 +
        (sizeof(__be64) * FUNC_1(VAR_2, VAR_4)), 8);

 return 0;
}
