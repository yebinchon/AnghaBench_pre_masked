
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * if_root; } ;
struct xfs_ifork {TYPE_1__ if_u1; scalar_t__ if_height; scalar_t__ if_bytes; } ;


 int FUNC_0 (int *,scalar_t__) ;

void
FUNC_1(
 struct xfs_ifork *VAR_0)
{
 FUNC_0(VAR_0->if_u1.if_root, VAR_0->if_height);

 VAR_0->if_bytes = 0;
 VAR_0->if_height = 0;
 VAR_0->if_u1.if_root = ((void*)0);
}
