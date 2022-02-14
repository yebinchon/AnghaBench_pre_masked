
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_channel_attrs {scalar_t__ maxreq_sz; scalar_t__ maxresp_sz; int maxops; scalar_t__ maxresp_cached; scalar_t__ headerpadsz; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32 FUNC_0(struct nfsd4_channel_attrs *VAR_4)
{
 VAR_4->headerpadsz = 0;

 if (VAR_4->maxreq_sz < VAR_0)
  return VAR_3;
 if (VAR_4->maxresp_sz < VAR_1)
  return VAR_3;
 VAR_4->maxresp_cached = 0;
 if (VAR_4->maxops < 2)
  return VAR_3;

 return VAR_2;
}
