
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_packed_desc {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct vring_packed_desc* FUNC_0 (unsigned int,int,int ) ;

__attribute__((used)) static struct vring_packed_desc *FUNC_1(unsigned int VAR_1,
             gfp_t VAR_2)
{
 struct vring_packed_desc *VAR_3;






 VAR_2 &= ~VAR_0;

 VAR_3 = FUNC_0(VAR_1, sizeof(struct vring_packed_desc), VAR_2);

 return VAR_3;
}
