
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frozen; } ;
struct super_block {TYPE_1__ s_writers; } ;
struct gfs2_sbd {struct super_block* sd_vfs; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct gfs2_sbd *VAR_2, char *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->sd_vfs;
 int VAR_5 = (VAR_4->s_writers.frozen == VAR_1) ? 0 : 1;

 return FUNC_0(VAR_3, VAR_0, "%d\n", VAR_5);
}
