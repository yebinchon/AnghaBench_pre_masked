
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs42_falloc_args {int falloc_length; int falloc_offset; int falloc_stateid; } ;


 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_0,
        const struct nfs42_falloc_args *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->falloc_stateid);
 FUNC_1(VAR_0, VAR_1->falloc_offset);
 FUNC_1(VAR_0, VAR_1->falloc_length);
}
