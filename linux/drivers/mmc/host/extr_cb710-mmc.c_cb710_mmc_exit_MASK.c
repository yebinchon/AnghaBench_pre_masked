
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mmc_host {int dummy; } ;
struct cb710_slot {int dummy; } ;
struct cb710_mmc_reader {int finish_req_tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cb710_slot*,int ,int ) ;
 struct cb710_slot* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct cb710_slot*,int *) ;
 struct mmc_host* FUNC_3 (struct cb710_slot*) ;
 int FUNC_4 (struct cb710_slot*,int ,int ) ;
 int FUNC_5 (struct cb710_slot*,int ,int ) ;
 int FUNC_6 (struct mmc_host*) ;
 struct cb710_mmc_reader* FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct cb710_slot *VAR_4 = FUNC_1(VAR_3);
 struct mmc_host *VAR_5 = FUNC_3(VAR_4);
 struct cb710_mmc_reader *VAR_6 = FUNC_7(VAR_5);

 FUNC_0(VAR_4, 0, VAR_2);

 FUNC_8(VAR_5);


 FUNC_0(VAR_4, 0, ~0);
 FUNC_2(VAR_4, ((void*)0));


 FUNC_5(VAR_4, VAR_1, 0);
 FUNC_4(VAR_4, VAR_0, 0);

 FUNC_9(&VAR_6->finish_req_tasklet);

 FUNC_6(VAR_5);
 return 0;
}
