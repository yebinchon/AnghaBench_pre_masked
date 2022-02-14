
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {struct dentry* dentry; } ;
struct dev_pm_opp {unsigned long rate; unsigned long clock_latency_ns; struct dentry* dentry; int pstate; int suspend; int turbo; int dynamic; int available; } ;
struct dentry {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct opp_table*) ;
 int FUNC_1 (char*,int ,struct dentry*,int *) ;
 struct dentry* FUNC_2 (char*,struct dentry*) ;
 int FUNC_3 (char*,int ,struct dentry*,int *) ;
 int FUNC_4 (char*,int ,struct dentry*,unsigned long*) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct dev_pm_opp*,struct opp_table*,struct dentry*) ;
 int FUNC_7 (char*,int,char*,unsigned long) ;

void FUNC_8(struct dev_pm_opp *VAR_1, struct opp_table *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->dentry;
 struct dentry *VAR_4;
 unsigned long VAR_5;
 char VAR_6[25];







 if (FUNC_5(VAR_1->rate))
  VAR_5 = VAR_1->rate;
 else
  VAR_5 = FUNC_0(VAR_2);

 FUNC_7(VAR_6, sizeof(VAR_6), "opp:%lu", VAR_5);


 VAR_4 = FUNC_2(VAR_6, VAR_3);

 FUNC_1("available", VAR_0, VAR_4, &VAR_1->available);
 FUNC_1("dynamic", VAR_0, VAR_4, &VAR_1->dynamic);
 FUNC_1("turbo", VAR_0, VAR_4, &VAR_1->turbo);
 FUNC_1("suspend", VAR_0, VAR_4, &VAR_1->suspend);
 FUNC_3("performance_state", VAR_0, VAR_4, &VAR_1->pstate);
 FUNC_4("rate_hz", VAR_0, VAR_4, &VAR_1->rate);
 FUNC_4("clock_latency_ns", VAR_0, VAR_4,
        &VAR_1->clock_latency_ns);

 FUNC_6(VAR_1, VAR_2, VAR_4);

 VAR_1->dentry = VAR_4;
}
