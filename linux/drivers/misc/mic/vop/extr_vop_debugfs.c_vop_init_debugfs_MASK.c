
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_info {int dbg; TYPE_1__* vpdev; } ;
typedef int name ;
struct TYPE_2__ {int dnode; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int ,struct vop_info*,int *) ;
 int FUNC_2 (char*,int,char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct vop_info *VAR_3)
{
 char VAR_4[16];

 FUNC_2(VAR_4, sizeof(VAR_4), "%s%d", VAR_0, VAR_3->vpdev->dnode);
 VAR_3->dbg = FUNC_0(VAR_4, ((void*)0));
 FUNC_1("dp", 0444, VAR_3->dbg, VAR_3, &VAR_1);
 FUNC_1("vdev_info", 0444, VAR_3->dbg, VAR_3, &VAR_2);
}
