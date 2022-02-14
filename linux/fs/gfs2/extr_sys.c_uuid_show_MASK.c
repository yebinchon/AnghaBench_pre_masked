
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_uuid; } ;
struct gfs2_sbd {struct super_block* sd_vfs; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct gfs2_sbd *VAR_1, char *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->sd_vfs;

 VAR_2[0] = '\0';
 if (FUNC_1(&VAR_3->s_uuid))
  return 0;
 return FUNC_0(VAR_2, VAR_0, "%pUB\n", &VAR_3->s_uuid);
}
