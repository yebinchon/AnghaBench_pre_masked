
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {int flags; int io_tree; scalar_t__ defrag_bytes; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_3, u64 VAR_4, u64 VAR_5)
{

 if (!(FUNC_0(VAR_3)->flags & VAR_0) &&
     !(FUNC_0(VAR_3)->flags & VAR_1))
  return 0;






 if (FUNC_0(VAR_3)->defrag_bytes &&
     FUNC_1(&FUNC_0(VAR_3)->io_tree, VAR_4, VAR_5,
      VAR_2, 0, ((void*)0)))
  return 1;

 return 0;
}
