
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ifork {int if_seq; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct xfs_ifork *VAR_0)
{
 FUNC_1(VAR_0->if_seq, FUNC_0(VAR_0->if_seq) + 1);
}
