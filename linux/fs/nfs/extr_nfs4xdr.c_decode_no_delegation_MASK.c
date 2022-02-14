
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
struct nfs_openres {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_1, struct nfs_openres *VAR_2)
{
 __be32 *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_2(VAR_1, 4);
 if (FUNC_1(!VAR_3))
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_3);
 switch (VAR_4) {
  case 129:
  case 128:
   FUNC_2(VAR_1, 4);

 }
 return 0;
}
