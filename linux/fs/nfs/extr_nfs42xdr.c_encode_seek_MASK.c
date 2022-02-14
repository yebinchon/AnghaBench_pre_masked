
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs42_seek_args {int sa_what; int sa_offset; int sa_stateid; } ;
struct compound_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int ) ;
 int FUNC_3 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_2,
   const struct nfs42_seek_args *VAR_3,
   struct compound_hdr *VAR_4)
{
 FUNC_1(VAR_2, VAR_0, VAR_1, VAR_4);
 FUNC_0(VAR_2, &VAR_3->sa_stateid);
 FUNC_3(VAR_2, VAR_3->sa_offset);
 FUNC_2(VAR_2, VAR_3->sa_what);
}
