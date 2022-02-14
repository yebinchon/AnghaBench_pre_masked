
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_debugfs_entry {int data; int ops; int mode; int name; } ;
struct adapter {int debugfs_root; } ;


 int FUNC_0 (int ,int ,int ,void*,int ) ;

void FUNC_1(struct adapter *VAR_0,
         struct t4_debugfs_entry *VAR_1,
         unsigned int VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_1[VAR_3].name, VAR_1[VAR_3].mode,
        VAR_0->debugfs_root,
        (void *)VAR_0 + VAR_1[VAR_3].data,
        VAR_1[VAR_3].ops);
}
