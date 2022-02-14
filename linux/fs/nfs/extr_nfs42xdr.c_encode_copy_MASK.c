
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs42_copy_args {int sync; int count; int dst_pos; int src_pos; int dst_stateid; int src_stateid; } ;
struct compound_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_2 (struct xdr_stream*,int) ;
 int FUNC_3 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_2,
   const struct nfs42_copy_args *VAR_3,
   struct compound_hdr *VAR_4)
{
 FUNC_1(VAR_2, VAR_0, VAR_1, VAR_4);
 FUNC_0(VAR_2, &VAR_3->src_stateid);
 FUNC_0(VAR_2, &VAR_3->dst_stateid);

 FUNC_3(VAR_2, VAR_3->src_pos);
 FUNC_3(VAR_2, VAR_3->dst_pos);
 FUNC_3(VAR_2, VAR_3->count);

 FUNC_2(VAR_2, 1);
 FUNC_2(VAR_2, VAR_3->sync);
 FUNC_2(VAR_2, 0);
}
