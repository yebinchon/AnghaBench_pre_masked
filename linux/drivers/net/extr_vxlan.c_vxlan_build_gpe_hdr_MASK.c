
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxlanhdr_gpe {int np_applied; int next_protocol; } ;
struct vxlanhdr {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct vxlanhdr *VAR_1, u32 VAR_2,
          __be16 VAR_3)
{
 struct vxlanhdr_gpe *VAR_4 = (struct vxlanhdr_gpe *)VAR_1;

 VAR_4->np_applied = 1;
 VAR_4->next_protocol = FUNC_0(VAR_3);
 if (!VAR_4->next_protocol)
  return -VAR_0;
 return 0;
}
