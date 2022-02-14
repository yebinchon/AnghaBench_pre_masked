
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_inode; } ;
struct address_space {scalar_t__ nrpages; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int FUNC_0 (struct address_space*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct address_space*,int ,int) ;
 int FUNC_3 () ;

void FUNC_4(struct block_device *VAR_0)
{
 struct address_space *VAR_1 = VAR_0->bd_inode->i_mapping;

 if (VAR_1->nrpages) {
  FUNC_1();
  FUNC_3();
  FUNC_2(VAR_1, 0, -1);
 }



 FUNC_0(VAR_1);
}
