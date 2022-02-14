
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct gfs2_sbd*,char*,char*,char const*,char*,unsigned int) ;

int FUNC_2(struct gfs2_sbd *VAR_0, char *VAR_1,
      const char *VAR_2, char *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_1(VAR_0,
         "fatal: assertion \"%s\" failed\n"
         "   function = %s, file = %s, line = %u\n",
         VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0();
 return (VAR_5) ? -1 : -2;
}
