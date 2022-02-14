
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sas_task {scalar_t__ data_dir; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ rsp; } ;
struct isci_request {int sci_status; int sm; int scu_status; TYPE_2__ stp; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sas_task* FUNC_0 (struct isci_request*) ;
 int FUNC_1 (struct isci_request*,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static enum sci_status FUNC_3(struct isci_request *VAR_7,
         u32 VAR_8)
{
 struct sas_task *VAR_9 = FUNC_0(VAR_7);
 enum sci_status VAR_10;

 VAR_10 = FUNC_1(VAR_7, VAR_8);

 if (VAR_10 == VAR_4) {
  if (VAR_7->stp.rsp.status & VAR_0)
   VAR_10 = VAR_2;
 } else {
  VAR_10 = VAR_2;
 }

 if (VAR_10 != VAR_4) {
  VAR_7->scu_status = VAR_5;
  VAR_7->sci_status = VAR_10;
 } else {
  VAR_7->scu_status = VAR_6;
  VAR_7->sci_status = VAR_4;
 }


 if (VAR_9->data_dir == VAR_1)
  FUNC_2(&VAR_7->sm, VAR_3);

 return VAR_10;
}
