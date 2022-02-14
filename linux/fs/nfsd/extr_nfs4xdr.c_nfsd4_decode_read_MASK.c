
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_read {int rd_length; int rd_offset; int rd_stateid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfsd4_compoundargs*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundargs *VAR_4, struct nfsd4_read *VAR_5)
{
 VAR_0;

 VAR_3 = FUNC_2(VAR_4, &VAR_5->rd_stateid);
 if (VAR_3)
  return VAR_3;
 FUNC_0(12);
 VAR_2 = FUNC_3(VAR_2, &VAR_5->rd_offset);
 VAR_5->rd_length = FUNC_1(VAR_2++);

 VAR_1;
}
