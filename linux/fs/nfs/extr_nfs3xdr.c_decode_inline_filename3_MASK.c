
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_3,
       const char **VAR_4, u32 *VAR_5)
{
 __be32 *VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_3(VAR_3, 4);
 if (FUNC_2(!VAR_6))
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 > VAR_2)
  goto out_nametoolong;
 VAR_6 = FUNC_3(VAR_3, VAR_7);
 if (FUNC_2(!VAR_6))
  return -VAR_0;
 *VAR_4 = (const char *)VAR_6;
 *VAR_5 = VAR_7;
 return 0;

out_nametoolong:
 FUNC_1("NFS: returned filename too long: %u\n", VAR_7);
 return -VAR_1;
}
