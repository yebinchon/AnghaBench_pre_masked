
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_l2_lookup_params_entry {int no_mgmt_learn; int no_enf_hostprt; int shared_learn; int poly; int dyn_tbsz; int maxage; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t
FUNC_1(void *VAR_1, void *VAR_2,
      enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_l2_lookup_params_entry *VAR_5 = VAR_2;

 FUNC_0(VAR_1, &VAR_5->maxage, 31, 17, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->dyn_tbsz, 16, 14, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->poly, 13, 6, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->shared_learn, 5, 5, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->no_enf_hostprt, 4, 4, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->no_mgmt_learn, 3, 3, VAR_4, VAR_3);
 return VAR_4;
}
