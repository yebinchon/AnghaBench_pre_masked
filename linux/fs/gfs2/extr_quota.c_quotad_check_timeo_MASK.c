
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {struct super_block* sd_vfs; int sd_tune; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int *,unsigned int*) ;
 int FUNC_1 (struct gfs2_sbd*,char const*,int) ;

__attribute__((used)) static void FUNC_2(struct gfs2_sbd *VAR_1, const char *VAR_2,
          int (*VAR_3)(struct super_block *VAR_4, int VAR_5),
          unsigned long VAR_6, unsigned long *VAR_7,
          unsigned int *VAR_8)
{
 if (VAR_6 >= *VAR_7) {
  int VAR_9 = VAR_3(VAR_1->sd_vfs, 0);
  FUNC_1(VAR_1, VAR_2, VAR_9);
  *VAR_7 = FUNC_0(&VAR_1->sd_tune, VAR_8) * VAR_0;
 } else {
  *VAR_7 -= VAR_6;
 }
}
