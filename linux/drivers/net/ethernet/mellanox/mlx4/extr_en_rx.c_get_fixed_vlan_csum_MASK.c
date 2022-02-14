
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_hdr {int dummy; } ;
typedef int __wsum ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline __wsum FUNC_1(__wsum VAR_0,
      struct vlan_hdr *VAR_1)
{
 return FUNC_0(VAR_0, *(__wsum *)VAR_1);
}
