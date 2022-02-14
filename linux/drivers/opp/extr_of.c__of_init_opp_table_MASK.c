
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct opp_table {int is_genpd; struct device_node* np; int shared_opp; int voltage_tolerance_v1; int clock_latency_ns_max; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (struct device_node*,int) ;
 int FUNC_1 (struct opp_table*,struct device*,struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;

void FUNC_7(struct opp_table *VAR_2, struct device *VAR_3,
   int VAR_4)
{
 struct device_node *VAR_5, *VAR_6;
 u32 VAR_7;





 VAR_5 = FUNC_3(VAR_3->of_node);
 if (!VAR_5)
  return;

 if (!FUNC_6(VAR_5, "clock-latency", &VAR_7))
  VAR_2->clock_latency_ns_max = VAR_7;
 FUNC_6(VAR_5, "voltage-tolerance",
        &VAR_2->voltage_tolerance_v1);

 if (FUNC_2(VAR_5, "#power-domain-cells", ((void*)0)))
  VAR_2->is_genpd = 1;


 VAR_6 = FUNC_0(VAR_5, VAR_4);
 FUNC_4(VAR_5);

 if (!VAR_6)
  return;

 if (FUNC_5(VAR_6, "opp-shared"))
  VAR_2->shared_opp = VAR_1;
 else
  VAR_2->shared_opp = VAR_0;

 VAR_2->np = VAR_6;

 FUNC_1(VAR_2, VAR_3, VAR_6);
 FUNC_4(VAR_6);
}
