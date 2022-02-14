
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ifork {int if_height; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_ifork*) ;

__attribute__((used)) static inline int FUNC_1(struct xfs_ifork *VAR_1)
{
 if (VAR_1->if_height == 1)
  return FUNC_0(VAR_1);
 return VAR_0;
}
