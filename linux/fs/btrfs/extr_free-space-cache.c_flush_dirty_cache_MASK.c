
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {scalar_t__ i_size; } ;
struct TYPE_2__ {int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,int ,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0, (u64)-1);
 if (VAR_2)
  FUNC_2(&FUNC_0(VAR_1)->io_tree, 0, VAR_1->i_size - 1,
     VAR_0, 0, 0, ((void*)0));

 return VAR_2;
}
