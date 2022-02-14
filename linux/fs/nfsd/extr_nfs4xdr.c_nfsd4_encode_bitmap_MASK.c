
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_2(struct xdr_stream *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 __be32 *VAR_5;

 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_1, 16);
  if (!VAR_5)
   goto out_resource;
  *VAR_5++ = FUNC_0(3);
  *VAR_5++ = FUNC_0(VAR_2);
  *VAR_5++ = FUNC_0(VAR_3);
  *VAR_5++ = FUNC_0(VAR_4);
 } else if (VAR_3) {
  VAR_5 = FUNC_1(VAR_1, 12);
  if (!VAR_5)
   goto out_resource;
  *VAR_5++ = FUNC_0(2);
  *VAR_5++ = FUNC_0(VAR_2);
  *VAR_5++ = FUNC_0(VAR_3);
 } else {
  VAR_5 = FUNC_1(VAR_1, 8);
  if (!VAR_5)
   goto out_resource;
  *VAR_5++ = FUNC_0(1);
  *VAR_5++ = FUNC_0(VAR_2);
 }

 return 0;
out_resource:
 return VAR_0;
}
