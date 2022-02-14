
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * if_root; } ;
struct xfs_ifork {TYPE_1__ if_u1; int if_height; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_ifork *VAR_0)
{
 VAR_0->if_height--;
 FUNC_0(VAR_0->if_u1.if_root);
 VAR_0->if_u1.if_root = ((void*)0);
}
