
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; int i_sb; } ;
struct bmap {int dummy; } ;
struct TYPE_2__ {struct bmap* bmap; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct bmap*) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct inode *VAR_0, int VAR_1)
{
 struct bmap *VAR_2 = FUNC_0(VAR_0->i_sb)->bmap;

 if (!(VAR_1 || FUNC_2(VAR_0)))
  FUNC_1(VAR_0);




 FUNC_4(VAR_0->i_mapping, 0);


 FUNC_3(VAR_2);

 return (0);
}
