
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wr_bytes_written; } ;
struct nfsd4_copy {int nf_dst; int nf_src; TYPE_1__ cp_res; } ;
typedef scalar_t__ ssize_t ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct nfsd4_copy*) ;
 int VAR_0 ;
 int FUNC_1 (struct nfsd4_copy*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static __be32 FUNC_4(struct nfsd4_copy *VAR_1, bool VAR_2)
{
 __be32 VAR_3;
 ssize_t VAR_4;

 VAR_4 = FUNC_0(VAR_1);



 if (VAR_4 < 0 && !VAR_1->cp_res.wr_bytes_written)
  VAR_3 = FUNC_3(VAR_4);
 else {
  FUNC_1(VAR_1, VAR_2);
  VAR_3 = VAR_0;
 }

 FUNC_2(VAR_1->nf_src);
 FUNC_2(VAR_1->nf_dst);
 return VAR_3;
}
