
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_copy {int cp_synchronous; int cp_count; int cp_dst_pos; int cp_src_pos; int cp_dst_stateid; int cp_src_stateid; } ;
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
FUNC_4(struct nfsd4_compoundargs *VAR_4, struct nfsd4_copy *VAR_5)
{
 VAR_0;

 VAR_3 = FUNC_2(VAR_4, &VAR_5->cp_src_stateid);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_4, &VAR_5->cp_dst_stateid);
 if (VAR_3)
  return VAR_3;

 FUNC_0(8 + 8 + 8 + 4 + 4 + 4);
 VAR_2 = FUNC_3(VAR_2, &VAR_5->cp_src_pos);
 VAR_2 = FUNC_3(VAR_2, &VAR_5->cp_dst_pos);
 VAR_2 = FUNC_3(VAR_2, &VAR_5->cp_count);
 VAR_2++;
 VAR_5->cp_synchronous = FUNC_1(VAR_2++);


 VAR_1;
}
