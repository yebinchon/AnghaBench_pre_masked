
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct adapter {int debugfs_root; } ;
struct TYPE_3__ {int fops; int mode; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,void*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_1)
{
 int VAR_2;

 FUNC_1(FUNC_2(VAR_1->debugfs_root));




 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_3(VAR_0[VAR_2].name,
        VAR_0[VAR_2].mode,
        VAR_1->debugfs_root, (void *)VAR_1,
        VAR_0[VAR_2].fops);

 return 0;
}
