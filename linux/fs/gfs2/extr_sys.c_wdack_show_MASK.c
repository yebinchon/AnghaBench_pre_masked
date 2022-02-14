
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_wdack; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct gfs2_sbd *VAR_0, char *VAR_1)
{
 int VAR_2 = FUNC_0(&VAR_0->sd_wdack) ? 1 : 0;

 return FUNC_1(VAR_1, "%d\n", VAR_2);
}
