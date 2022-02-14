
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int dummy; } ;
struct knfsd_fh {int dummy; } ;


 unsigned int FUNC_0 (struct knfsd_fh*) ;
 struct nfs4_file* FUNC_1 (struct knfsd_fh*,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct knfsd_fh*,unsigned int,struct nfs4_file*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct nfs4_file *
FUNC_8(struct nfs4_file *VAR_1, struct knfsd_fh *VAR_2)
{
 struct nfs4_file *VAR_3;
 unsigned int VAR_4 = FUNC_0(VAR_2);

 FUNC_4();
 VAR_3 = FUNC_1(VAR_2, VAR_4);
 FUNC_5();
 if (VAR_3)
  return VAR_3;

 FUNC_6(&VAR_0);
 VAR_3 = FUNC_1(VAR_2, VAR_4);
 if (FUNC_2(VAR_3 == ((void*)0))) {
  FUNC_3(VAR_2, VAR_4, VAR_1);
  VAR_3 = VAR_1;
 }
 FUNC_7(&VAR_0);

 return VAR_3;
}
