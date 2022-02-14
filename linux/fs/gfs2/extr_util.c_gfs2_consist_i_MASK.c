
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,char const*,char*,unsigned int) ;

int FUNC_1(struct gfs2_sbd *VAR_0, int VAR_1, const char *VAR_2,
     char *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_0,
         "fatal: filesystem consistency error - function = %s, file = %s, line = %u\n",
         VAR_2, VAR_3, VAR_4);
 return VAR_5;
}
