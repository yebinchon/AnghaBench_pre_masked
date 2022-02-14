
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlanhdr {int dummy; } ;
struct sk_buff {int remcsum_offload; } ;
struct gro_remcsum {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int csum_valid; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct vxlanhdr* FUNC_1 (struct sk_buff*,void*,unsigned int,size_t,size_t,size_t,struct gro_remcsum*,int) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static struct vxlanhdr *FUNC_4(struct sk_buff *VAR_0,
       unsigned int VAR_1,
       struct vxlanhdr *VAR_2, size_t VAR_3,
       __be32 VAR_4,
       struct gro_remcsum *VAR_5,
       bool VAR_6)
{
 size_t VAR_7, VAR_8;

 if (VAR_0->remcsum_offload)
  return VAR_2;

 if (!FUNC_0(VAR_0)->csum_valid)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_4);
 VAR_8 = VAR_7 + FUNC_2(VAR_4);

 VAR_2 = FUNC_1(VAR_0, (void *)VAR_2, VAR_1, VAR_3,
         VAR_7, VAR_8, VAR_5, VAR_6);

 VAR_0->remcsum_offload = 1;

 return VAR_2;
}
