
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int power_off; int power_on; int name; } ;
struct qmp_pd {TYPE_1__ pd; struct qmp* qmp; } ;
struct genpd_onecell_data {int num_domains; TYPE_1__** domains; } ;
struct qmp {struct device* dev; struct genpd_onecell_data pd_data; } ;
struct device {int of_node; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,size_t,int,int ) ;
 int FUNC_3 (int ,struct genpd_onecell_data*) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_6(struct qmp *VAR_5)
{
 struct genpd_onecell_data *VAR_6 = &VAR_5->pd_data;
 struct device *VAR_7 = VAR_5->dev;
 struct qmp_pd *VAR_8;
 size_t VAR_9 = FUNC_0(VAR_4);
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_2(VAR_7, VAR_9, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_6->domains = FUNC_2(VAR_7, VAR_9, sizeof(*VAR_6->domains),
         VAR_1);
 if (!VAR_6->domains)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_8[VAR_11].qmp = VAR_5;
  VAR_8[VAR_11].pd.name = VAR_4[VAR_11];
  VAR_8[VAR_11].pd.power_on = VAR_3;
  VAR_8[VAR_11].pd.power_off = VAR_2;

  VAR_10 = FUNC_4(&VAR_8[VAR_11].pd, ((void*)0), 1);
  if (VAR_10 < 0) {
   FUNC_1(VAR_7, "failed to init genpd\n");
   goto unroll_genpds;
  }

  VAR_6->domains[VAR_11] = &VAR_8[VAR_11].pd;
 }

 VAR_6->num_domains = VAR_11;

 VAR_10 = FUNC_3(VAR_7->of_node, VAR_6);
 if (VAR_10 < 0)
  goto unroll_genpds;

 return 0;

unroll_genpds:
 for (VAR_11--; VAR_11 >= 0; VAR_11--)
  FUNC_5(VAR_6->domains[VAR_11]);

 return VAR_10;
}
