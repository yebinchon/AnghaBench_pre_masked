
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,char const*,char*,unsigned int) ;

int FUNC_1(struct gfs2_sbd *VAR_0, const char *VAR_1, char *VAR_2,
      unsigned int VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_0,
         "fatal: I/O error\n"
         "  function = %s, file = %s, line = %u\n",
         VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
