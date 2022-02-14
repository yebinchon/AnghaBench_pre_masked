
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {TYPE_1__* sd_vfs; } ;
typedef int ssize_t ;
struct TYPE_2__ {int s_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct gfs2_sbd *VAR_1, char *VAR_2)
{
 return FUNC_2(VAR_2, VAR_0, "%u:%u\n",
   FUNC_0(VAR_1->sd_vfs->s_dev), FUNC_1(VAR_1->sd_vfs->s_dev));
}
