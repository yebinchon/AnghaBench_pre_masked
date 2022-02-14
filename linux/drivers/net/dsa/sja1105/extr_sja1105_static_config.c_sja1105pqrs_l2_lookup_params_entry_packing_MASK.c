
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_l2_lookup_params_entry {int learn_once; int owr_dyn; int use_static; int no_mgmt_learn; int no_enf_hostprt; int shared_learn; int drpnolearn; int start_dynspc; int maxage; int * maxaddrp; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t
FUNC_1(void *VAR_1, void *VAR_2,
        enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_l2_lookup_params_entry *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 for (VAR_7 = 0, VAR_6 = 58; VAR_7 < 5; VAR_7++, VAR_6 += 11)
  FUNC_0(VAR_1, &VAR_5->maxaddrp[VAR_7],
    VAR_6 + 10, VAR_6 + 0, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->maxage, 57, 43, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->start_dynspc, 42, 33, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->drpnolearn, 32, 28, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->shared_learn, 27, 27, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->no_enf_hostprt, 26, 26, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->no_mgmt_learn, 25, 25, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->use_static, 24, 24, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->owr_dyn, 23, 23, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->learn_once, 22, 22, VAR_4, VAR_3);
 return VAR_4;
}
