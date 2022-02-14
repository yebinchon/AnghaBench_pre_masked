
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef enum nfs_cb_opnum4 { ____Placeholder_nfs_cb_opnum4 } nfs_cb_opnum4 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_1,
          enum nfs_cb_opnum4 VAR_2, int *VAR_3)
{
 __be32 *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_4(VAR_1, 4 + 4);
 if (FUNC_3(VAR_4 == ((void*)0)))
  goto out_overflow;
 VAR_5 = FUNC_0(VAR_4++);
 if (FUNC_3(VAR_5 != VAR_2))
  goto out_unexpected;
 *VAR_3 = FUNC_2(FUNC_0(VAR_4));
 return 0;
out_overflow:
 return -VAR_0;
out_unexpected:
 FUNC_1("NFSD: Callback server returned operation %d but "
  "we issued a request for %d\n", VAR_5, VAR_2);
 return -VAR_0;
}
