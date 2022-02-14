
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debugfs_entry; } ;
struct hva_dev {TYPE_1__ dbg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hva_dev*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(struct hva_dev *VAR_5)
{
 VAR_5->dbg.debugfs_entry = FUNC_0(VAR_0, ((void*)0));
 if (!VAR_5->dbg.debugfs_entry)
  goto err;

 if (!FUNC_1(VAR_1))
  goto err;

 if (!FUNC_1(VAR_2))
  goto err;

 if (!FUNC_1(VAR_3))
  goto err;

 if (!FUNC_1(VAR_4))
  goto err;

 return;

err:
 FUNC_2(VAR_5);
}
