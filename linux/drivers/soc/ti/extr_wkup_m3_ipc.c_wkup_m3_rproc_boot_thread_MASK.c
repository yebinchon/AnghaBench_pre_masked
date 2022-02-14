
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wkup_m3_ipc {int rproc; int sync_complete; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct wkup_m3_ipc *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 int VAR_2;

 FUNC_2(&VAR_0->sync_complete);

 VAR_2 = FUNC_3(VAR_0->rproc);
 if (VAR_2)
  FUNC_0(VAR_1, "rproc_boot failed\n");

 FUNC_1(0);
}
