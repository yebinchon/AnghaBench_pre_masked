
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_sock {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline bool FUNC_1(struct vxlan_sock *VAR_1)
{
 return VAR_1->flags & VAR_0 ||
        FUNC_0();
}
