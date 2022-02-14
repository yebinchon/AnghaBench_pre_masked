
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_sas_nvram {int dummy; } ;
struct esas2r_request {scalar_t__ req_stat; int comp_cb; } ;
struct esas2r_adapter {scalar_t__ nvram_command_done; int nvram_waiter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct esas2r_adapter*,struct esas2r_request*,struct esas2r_sas_nvram*) ;
 int FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct esas2r_adapter *VAR_2, struct esas2r_request *VAR_3,
   struct esas2r_sas_nvram *VAR_4)
{
 int VAR_5 = 0;

 VAR_2->nvram_command_done = 0;
 VAR_3->comp_cb = VAR_1;

 if (FUNC_0(VAR_2, VAR_3, VAR_4)) {

  while (!VAR_2->nvram_command_done)
   FUNC_1(VAR_2->nvram_waiter,
       VAR_2->nvram_command_done);
  ;


  if (VAR_3->req_stat == VAR_0)
   VAR_5 = 1;
 }
 return VAR_5;
}
