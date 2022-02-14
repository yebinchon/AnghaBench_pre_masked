
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int udev; int * command_res_urb; int * command_out_urb; struct mmc_host* mmc; } ;
struct mmc_host {int dummy; } ;
struct kref {int dummy; } ;


 struct vub300_mmc_host* FUNC_0 (struct kref*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kref *VAR_0)
{
 struct vub300_mmc_host *VAR_1 = FUNC_0(VAR_0);
 struct mmc_host *VAR_2 = VAR_1->mmc;
 FUNC_2(VAR_1->command_out_urb);
 VAR_1->command_out_urb = ((void*)0);
 FUNC_2(VAR_1->command_res_urb);
 VAR_1->command_res_urb = ((void*)0);
 FUNC_3(VAR_1->udev);
 FUNC_1(VAR_2);




}
