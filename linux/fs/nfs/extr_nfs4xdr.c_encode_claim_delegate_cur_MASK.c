
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct qstr {int name; int len; } ;
typedef int nfs4_stateid ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int const*) ;
 int FUNC_2 (struct xdr_stream*,int ,int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static inline void FUNC_4(struct xdr_stream *VAR_1, const struct qstr *VAR_2, const nfs4_stateid *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_3(VAR_1, 4);
 *VAR_4 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, VAR_3);
 FUNC_2(VAR_1, VAR_2->len, VAR_2->name);
}
