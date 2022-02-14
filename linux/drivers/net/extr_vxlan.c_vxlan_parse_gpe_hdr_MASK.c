
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxlanhdr_gpe {scalar_t__ version; int next_protocol; scalar_t__ oam_flag; int np_applied; } ;
struct vxlanhdr {int vx_flags; } ;
struct sk_buff {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct vxlanhdr *VAR_1,
    __be16 *VAR_2,
    struct sk_buff *VAR_3, u32 VAR_4)
{
 struct vxlanhdr_gpe *VAR_5 = (struct vxlanhdr_gpe *)VAR_1;


 if (!VAR_5->np_applied)
  return 0;



 if (VAR_5->version != 0)
  return 0;




 if (VAR_5->oam_flag)
  return 0;

 *VAR_2 = FUNC_0(VAR_5->next_protocol);
 if (!*VAR_2)
  return 0;

 VAR_1->vx_flags &= ~VAR_0;
 return 1;
}
