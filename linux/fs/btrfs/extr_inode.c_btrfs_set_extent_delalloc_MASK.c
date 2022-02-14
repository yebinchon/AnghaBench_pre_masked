
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct extent_state {int dummy; } ;
struct TYPE_2__ {int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,unsigned int,struct extent_state**) ;

int FUNC_4(struct inode *VAR_0, u64 VAR_1, u64 VAR_2,
         unsigned int VAR_3,
         struct extent_state **VAR_4)
{
 FUNC_2(FUNC_1(VAR_2));
 return FUNC_3(&FUNC_0(VAR_0)->io_tree, VAR_1, VAR_2,
       VAR_3, VAR_4);
}
