
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_pf {int dummy; } ;
struct nfp_level_size {int total_size; int requested_level; } ;
struct nfp_dumpspec {int size; int data; } ;
struct nfp_dump_prolog {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct nfp_pf*,int ,int ,struct nfp_level_size*,int ) ;

s64 FUNC_3(struct nfp_pf *VAR_1, struct nfp_dumpspec *VAR_2,
    u32 VAR_3)
{
 struct nfp_level_size VAR_4;
 int VAR_5;

 VAR_4.requested_level = FUNC_1(VAR_3);
 VAR_4.total_size = FUNC_0(sizeof(struct nfp_dump_prolog));

 VAR_5 = FUNC_2(VAR_1, VAR_2->data, VAR_2->size, &VAR_4,
    VAR_0);
 if (VAR_5)
  return VAR_5;

 return VAR_4.total_size;
}
