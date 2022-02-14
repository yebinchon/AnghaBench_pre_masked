
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpddr2_timings {int tDQSCK_max_derated; int tRAS_max_ns; int tZQinit; int tZQCL; int tZQCS; int tFAW; int tDQSCK_max; int tCKESR; int tRTP; int tXP; int tWTR; int tRRD; int tRAS_min; int tWR; int tRCD; int tRPab; int min_freq; int max_freq; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_0,
  struct lpddr2_timings *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, "max-freq", &VAR_1->max_freq);
 VAR_2 |= FUNC_0(VAR_0, "min-freq", &VAR_1->min_freq);
 VAR_2 |= FUNC_0(VAR_0, "tRPab", &VAR_1->tRPab);
 VAR_2 |= FUNC_0(VAR_0, "tRCD", &VAR_1->tRCD);
 VAR_2 |= FUNC_0(VAR_0, "tWR", &VAR_1->tWR);
 VAR_2 |= FUNC_0(VAR_0, "tRAS-min", &VAR_1->tRAS_min);
 VAR_2 |= FUNC_0(VAR_0, "tRRD", &VAR_1->tRRD);
 VAR_2 |= FUNC_0(VAR_0, "tWTR", &VAR_1->tWTR);
 VAR_2 |= FUNC_0(VAR_0, "tXP", &VAR_1->tXP);
 VAR_2 |= FUNC_0(VAR_0, "tRTP", &VAR_1->tRTP);
 VAR_2 |= FUNC_0(VAR_0, "tCKESR", &VAR_1->tCKESR);
 VAR_2 |= FUNC_0(VAR_0, "tDQSCK-max", &VAR_1->tDQSCK_max);
 VAR_2 |= FUNC_0(VAR_0, "tFAW", &VAR_1->tFAW);
 VAR_2 |= FUNC_0(VAR_0, "tZQCS", &VAR_1->tZQCS);
 VAR_2 |= FUNC_0(VAR_0, "tZQCL", &VAR_1->tZQCL);
 VAR_2 |= FUNC_0(VAR_0, "tZQinit", &VAR_1->tZQinit);
 VAR_2 |= FUNC_0(VAR_0, "tRAS-max-ns", &VAR_1->tRAS_max_ns);
 VAR_2 |= FUNC_0(VAR_0, "tDQSCK-max-derated",
  &VAR_1->tDQSCK_max_derated);

 return VAR_2;
}
