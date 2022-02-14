
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct super_block {int * s_fs_info; TYPE_2__* s_bdev; } ;
struct TYPE_12__ {int kset; } ;
struct TYPE_10__ {scalar_t__ ar_spectator; } ;
struct gfs2_sbd {TYPE_3__ sd_kobj; int sd_table_name; TYPE_1__ sd_args; struct super_block* sd_vfs; } ;
struct TYPE_13__ {int kobj; } ;
struct TYPE_11__ {int bd_disk; } ;


 int VAR_0 ;
 TYPE_9__* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,char**) ;
 int VAR_3 ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *,char*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int VAR_4 ;

int FUNC_10(struct gfs2_sbd *VAR_5)
{
 struct super_block *VAR_6 = VAR_5->sd_vfs;
 int VAR_7;
 char VAR_8[20];
 char VAR_9[20];
 char *VAR_10[] = { VAR_8, VAR_9, ((void*)0) };

 FUNC_6(VAR_8, "RDONLY=%d", FUNC_5(VAR_6));
 FUNC_6(VAR_9, "SPECTATOR=%d", VAR_5->sd_args.ar_spectator ? 1 : 0);

 VAR_5->sd_kobj.kset = VAR_1;
 VAR_7 = FUNC_2(&VAR_5->sd_kobj, &VAR_2, ((void*)0),
         "%s", VAR_5->sd_table_name);
 if (VAR_7)
  goto fail_reg;

 VAR_7 = FUNC_7(&VAR_5->sd_kobj, &VAR_4);
 if (VAR_7)
  goto fail_reg;

 VAR_7 = FUNC_7(&VAR_5->sd_kobj, &VAR_3);
 if (VAR_7)
  goto fail_tune;

 VAR_7 = FUNC_8(&VAR_5->sd_kobj,
      &FUNC_0(VAR_6->s_bdev->bd_disk)->kobj,
      "device");
 if (VAR_7)
  goto fail_lock_module;

 FUNC_4(&VAR_5->sd_kobj, VAR_0, VAR_10);
 return 0;

fail_lock_module:
 FUNC_9(&VAR_5->sd_kobj, &VAR_3);
fail_tune:
 FUNC_9(&VAR_5->sd_kobj, &VAR_4);
fail_reg:
 FUNC_1(VAR_5, "error %d adding sysfs files\n", VAR_7);
 FUNC_3(&VAR_5->sd_kobj);
 VAR_6->s_fs_info = ((void*)0);
 return VAR_7;
}
