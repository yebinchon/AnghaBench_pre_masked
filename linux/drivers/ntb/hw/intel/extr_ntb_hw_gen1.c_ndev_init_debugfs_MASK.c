
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdev; } ;
struct intel_ntb_dev {int * debugfs_dir; int * debugfs_info; TYPE_1__ ntb; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (char*,int ,int *,struct intel_ntb_dev*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct intel_ntb_dev *VAR_3)
{
 if (!VAR_1) {
  VAR_3->debugfs_dir = ((void*)0);
  VAR_3->debugfs_info = ((void*)0);
 } else {
  VAR_3->debugfs_dir =
   FUNC_0(FUNC_2(VAR_3->ntb.pdev),
        VAR_1);
  if (!VAR_3->debugfs_dir)
   VAR_3->debugfs_info = ((void*)0);
  else
   VAR_3->debugfs_info =
    FUNC_1("info", VAR_0,
          VAR_3->debugfs_dir, VAR_3,
          &VAR_2);
 }
}
