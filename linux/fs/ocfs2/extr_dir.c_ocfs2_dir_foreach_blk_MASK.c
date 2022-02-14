
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct dir_context {int dummy; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,int *,struct dir_context*,int) ;
 int FUNC_2 (struct inode*,int *,struct dir_context*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, u64 *VAR_2,
     struct dir_context *VAR_3,
     bool VAR_4)
{
 if (FUNC_0(VAR_1)->ip_dyn_features & VAR_0)
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
