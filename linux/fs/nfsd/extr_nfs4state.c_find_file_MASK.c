
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int dummy; } ;
struct knfsd_fh {int dummy; } ;


 unsigned int FUNC_0 (struct knfsd_fh*) ;
 struct nfs4_file* FUNC_1 (struct knfsd_fh*,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct nfs4_file *
FUNC_4(struct knfsd_fh *VAR_0)
{
 struct nfs4_file *VAR_1;
 unsigned int VAR_2 = FUNC_0(VAR_0);

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0, VAR_2);
 FUNC_3();
 return VAR_1;
}
