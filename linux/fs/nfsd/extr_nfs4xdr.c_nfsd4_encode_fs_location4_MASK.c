
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfsd4_fs_location {int path; int hosts; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct xdr_stream*,char,int ) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,char,int ,char,char) ;

__attribute__((used)) static __be32 FUNC_2(struct xdr_stream *VAR_0,
     struct nfsd4_fs_location *VAR_1)
{
 __be32 VAR_2;

 VAR_2 = FUNC_1(VAR_0, ':', VAR_1->hosts,
      '[', ']');
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, '/', VAR_1->path);
 if (VAR_2)
  return VAR_2;
 return 0;
}
