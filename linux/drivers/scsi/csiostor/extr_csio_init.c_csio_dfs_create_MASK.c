
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int pdev; int debugfs_root; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct csio_hw *VAR_1)
{
 if (VAR_0) {
  VAR_1->debugfs_root = FUNC_1(FUNC_2(VAR_1->pdev),
       VAR_0);
  FUNC_0(VAR_1);
 }

 return 0;
}
