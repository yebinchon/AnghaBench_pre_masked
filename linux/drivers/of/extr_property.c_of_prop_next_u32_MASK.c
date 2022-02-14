
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property {void* value; int length; } ;
typedef void __be32 ;


 int FUNC_0 (void const*) ;

const __be32 *FUNC_1(struct property *VAR_0, const __be32 *VAR_1,
          u32 *VAR_2)
{
 const void *VAR_3 = VAR_1;

 if (!VAR_0)
  return ((void*)0);

 if (!VAR_1) {
  VAR_3 = VAR_0->value;
  goto out_val;
 }

 VAR_3 += sizeof(*VAR_1);
 if (VAR_3 >= VAR_0->value + VAR_0->length)
  return ((void*)0);

out_val:
 *VAR_2 = FUNC_0(VAR_3);
 return VAR_3;
}
