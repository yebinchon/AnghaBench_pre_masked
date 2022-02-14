
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs42_seek_res {int sr_offset; int sr_eof; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_2, struct nfs42_seek_res *VAR_3)
{
 int VAR_4;
 __be32 *VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_4(VAR_2, 4 + 8);
 if (FUNC_2(!VAR_5))
  return -VAR_0;

 VAR_3->sr_eof = FUNC_0(VAR_5++);
 VAR_5 = FUNC_3(VAR_5, &VAR_3->sr_offset);
 return 0;
}
