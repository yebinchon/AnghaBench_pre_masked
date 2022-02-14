
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vxlanhdr {int vx_flags; int vx_vni; } ;
struct sk_buff {scalar_t__ remcsum_offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,size_t) ;
 int FUNC_1 (struct sk_buff*,void*,size_t,size_t,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct vxlanhdr *VAR_3,
     struct sk_buff *VAR_4, u32 VAR_5)
{
 size_t VAR_6, VAR_7;

 if (!(VAR_3->vx_flags & VAR_1) || VAR_4->remcsum_offload)
  goto out;

 VAR_6 = FUNC_4(VAR_3->vx_vni);
 VAR_7 = VAR_6 + FUNC_3(VAR_3->vx_vni);

 if (!FUNC_0(VAR_4, VAR_7 + sizeof(u16)))
  return 0;

 FUNC_1(VAR_4, (void *)(FUNC_2(VAR_4) + 1), VAR_6, VAR_7,
       !!(VAR_5 & VAR_0));
out:
 VAR_3->vx_flags &= ~VAR_1;
 VAR_3->vx_vni &= VAR_2;
 return 1;
}
