
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct TYPE_2__ {int i_reserved_data_blocks; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct inode *VAR_0)
{
 FUNC_2(VAR_0);

 if (!FUNC_0(VAR_0)->i_reserved_data_blocks)
  return 0;
 return FUNC_1(VAR_0->i_mapping);
}
