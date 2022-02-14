
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_daddr_t ;
struct xlog {int l_logBBsize; } ;


 int FUNC_0 (int,int ,int*) ;

__attribute__((used)) static inline xfs_daddr_t
FUNC_1(
 struct xlog *VAR_0,
 xfs_daddr_t VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, VAR_0->l_logBBsize, &VAR_2);
 return VAR_2;
}
