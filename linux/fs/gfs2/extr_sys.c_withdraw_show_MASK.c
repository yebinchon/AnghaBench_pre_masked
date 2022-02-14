
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct gfs2_sbd *VAR_2, char *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_1, &VAR_2->sd_flags);
 return FUNC_0(VAR_3, VAR_0, "%u\n", VAR_4);
}
