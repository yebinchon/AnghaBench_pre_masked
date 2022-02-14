
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_lookup {int lo_len; int lo_name; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundargs *VAR_4, struct nfsd4_lookup *VAR_5)
{
 VAR_0;

 FUNC_0(4);
 VAR_5->lo_len = FUNC_2(VAR_2++);
 FUNC_0(VAR_5->lo_len);
 FUNC_1(VAR_5->lo_name, VAR_5->lo_len);
 if ((VAR_3 = FUNC_3(VAR_5->lo_name, VAR_5->lo_len)))
  return VAR_3;

 VAR_1;
}
