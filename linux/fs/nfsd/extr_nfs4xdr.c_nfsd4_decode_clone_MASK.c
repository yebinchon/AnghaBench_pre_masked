
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {int dummy; } ;
struct nfsd4_clone {int cl_count; int cl_dst_pos; int cl_src_pos; int cl_dst_stateid; int cl_src_stateid; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nfsd4_compoundargs*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_4, struct nfsd4_clone *VAR_5)
{
 VAR_0;

 VAR_3 = FUNC_1(VAR_4, &VAR_5->cl_src_stateid);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_1(VAR_4, &VAR_5->cl_dst_stateid);
 if (VAR_3)
  return VAR_3;

 FUNC_0(8 + 8 + 8);
 VAR_2 = FUNC_2(VAR_2, &VAR_5->cl_src_pos);
 VAR_2 = FUNC_2(VAR_2, &VAR_5->cl_dst_pos);
 VAR_2 = FUNC_2(VAR_2, &VAR_5->cl_count);
 VAR_1;
}
