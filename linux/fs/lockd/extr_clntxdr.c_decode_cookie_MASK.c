
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct nlm_cookie {int len; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_2,
    struct nlm_cookie *VAR_3)
{
 u32 VAR_4;
 __be32 *VAR_5;

 VAR_5 = FUNC_5(VAR_2, 4);
 if (FUNC_4(VAR_5 == ((void*)0)))
  goto out_overflow;
 VAR_4 = FUNC_0(VAR_5++);

 if (VAR_4 == 0)
  goto out_hpux;
 if (VAR_4 > VAR_1)
  goto out_size;
 VAR_5 = FUNC_5(VAR_2, VAR_4);
 if (FUNC_4(VAR_5 == ((void*)0)))
  goto out_overflow;
 VAR_3->len = VAR_4;
 FUNC_2(VAR_3->data, VAR_5, VAR_4);
 return 0;
out_hpux:
 VAR_3->len = 4;
 FUNC_3(VAR_3->data, 0, 4);
 return 0;
out_size:
 FUNC_1("NFS: returned cookie was too long: %u\n", VAR_4);
 return -VAR_0;
out_overflow:
 return -VAR_0;
}
