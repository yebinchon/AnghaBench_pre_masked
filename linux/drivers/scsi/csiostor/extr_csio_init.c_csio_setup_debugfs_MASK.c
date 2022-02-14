
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_hw {TYPE_1__* chip_ops; int debugfs_root; } ;
struct TYPE_2__ {int (* chip_dfs_create_ext_mem ) (struct csio_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct csio_hw*,char*,int ,int) ;
 int FUNC_2 (struct csio_hw*,int ) ;
 int FUNC_3 (struct csio_hw*) ;

__attribute__((used)) static int FUNC_4(struct csio_hw *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_5->debugfs_root))
  return -1;

 VAR_6 = FUNC_2(VAR_5, VAR_2);
 if (VAR_6 & VAR_0)
  FUNC_1(VAR_5, "edc0", VAR_3, 5);
 if (VAR_6 & VAR_1)
  FUNC_1(VAR_5, "edc1", VAR_4, 5);

 VAR_5->chip_ops->chip_dfs_create_ext_mem(VAR_5);
 return 0;
}
