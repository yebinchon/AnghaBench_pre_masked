
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ ar_spectator; } ;
struct gfs2_sbd {int sd_kobj; TYPE_1__ sd_args; struct super_block* sd_vfs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3(struct gfs2_sbd *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->sd_vfs;
 char VAR_3[20];
 char VAR_4[20];
 char *VAR_5[] = { VAR_3, VAR_4, ((void*)0) };
 FUNC_2(VAR_3, "RDONLY=%d", FUNC_1(VAR_2));
 FUNC_2(VAR_4, "SPECTATOR=%d", VAR_1->sd_args.ar_spectator ? 1 : 0);
 FUNC_0(&VAR_1->sd_kobj, VAR_0, VAR_5);
}
