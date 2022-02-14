
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debugfs_entry; } ;
struct bdisp_dev {TYPE_1__ dbg; int id; } ;
typedef int dirname ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bdisp_dev*) ;
 int FUNC_2 (char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int,char*,char*,int ) ;

int FUNC_4(struct bdisp_dev *VAR_7)
{
 char VAR_8[16];

 FUNC_3(VAR_8, sizeof(VAR_8), "%s%d", VAR_0, VAR_7->id);
 VAR_7->dbg.debugfs_entry = FUNC_2(VAR_8, ((void*)0));
 if (!VAR_7->dbg.debugfs_entry)
  goto err;

 if (!FUNC_0(VAR_6))
  goto err;

 if (!FUNC_0(VAR_2))
  goto err;

 if (!FUNC_0(VAR_3))
  goto err;

 if (!FUNC_0(VAR_4))
  goto err;

 if (!FUNC_0(VAR_5))
  goto err;

 return 0;

err:
 FUNC_1(VAR_7);
 return -VAR_1;
}
