
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs42_layout_error {int * errors; int stateid; int length; int offset; } ;
struct compound_hdr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int FUNC_3 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int * FUNC_4 (struct xdr_stream*,int) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct xdr_stream *VAR_2,
          const struct nfs42_layout_error *VAR_3,
          struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 FUNC_3(VAR_2, VAR_0, VAR_1, VAR_4);
 VAR_5 = FUNC_4(VAR_2, 8 + 8);
 VAR_5 = FUNC_5(VAR_5, VAR_3->offset);
 VAR_5 = FUNC_5(VAR_5, VAR_3->length);
 FUNC_2(VAR_2, &VAR_3->stateid);
 VAR_5 = FUNC_4(VAR_2, 4);
 *VAR_5 = FUNC_0(1);
 FUNC_1(VAR_2, &VAR_3->errors[0]);
}
