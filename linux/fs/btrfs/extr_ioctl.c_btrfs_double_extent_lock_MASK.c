
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0, u64 VAR_1,
         struct inode *VAR_2, u64 VAR_3, u64 VAR_4)
{
 if (VAR_0 < VAR_2) {
  FUNC_2(VAR_0, VAR_2);
  FUNC_2(VAR_1, VAR_3);
 } else if (VAR_0 == VAR_2 && VAR_3 < VAR_1) {
  FUNC_2(VAR_1, VAR_3);
 }
 FUNC_1(&FUNC_0(VAR_0)->io_tree, VAR_1, VAR_1 + VAR_4 - 1);
 FUNC_1(&FUNC_0(VAR_2)->io_tree, VAR_3, VAR_3 + VAR_4 - 1);
}
