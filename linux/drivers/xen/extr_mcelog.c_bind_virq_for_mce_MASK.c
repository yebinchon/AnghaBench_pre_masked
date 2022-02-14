
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int info; int ncpus; } ;
struct TYPE_4__ {TYPE_1__ mc_physcpuinfo; } ;
struct xen_mc {TYPE_2__ u; int cmd; } ;
struct mcinfo_logical_cpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xen_mc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,char*,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xen_mc*,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_7;
 struct xen_mc VAR_8;

 FUNC_4(&VAR_8, 0, sizeof(struct xen_mc));


 VAR_8.cmd = VAR_3;
 FUNC_6(VAR_8.u.mc_physcpuinfo.info, VAR_4);
 VAR_7 = FUNC_0(&VAR_8);
 if (VAR_7) {
  FUNC_5("Failed to get CPU numbers\n");
  return VAR_7;
 }


 VAR_5 = VAR_8.u.mc_physcpuinfo.ncpus;
 VAR_4 = FUNC_2(VAR_5, sizeof(struct mcinfo_logical_cpu),
        VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_6(VAR_8.u.mc_physcpuinfo.info, VAR_4);
 VAR_7 = FUNC_0(&VAR_8);
 if (VAR_7) {
  FUNC_5("Failed to get CPU info\n");
  FUNC_3(VAR_4);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_2, 0,
           VAR_6, 0, "mce", ((void*)0));
 if (VAR_7 < 0) {
  FUNC_5("Failed to bind virq\n");
  FUNC_3(VAR_4);
  return VAR_7;
 }

 return 0;
}
