
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rsp; } ;
struct isci_request {TYPE_1__ stp; struct isci_host* owning_controller; } ;
struct isci_host {int uf_control; } ;
struct dev_to_host_fis {scalar_t__ fis_type; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct dev_to_host_fis*,int *) ;
 int FUNC_1 (struct isci_host*,int ) ;
 int FUNC_2 (int *,int ,void**) ;
 int FUNC_3 (int *,int ,void**) ;

__attribute__((used)) static enum sci_status FUNC_4(struct isci_request *VAR_2,
               u32 VAR_3)
{
 struct isci_host *VAR_4 = VAR_2->owning_controller;
 struct dev_to_host_fis *VAR_5;
 enum sci_status VAR_6;
 u32 *VAR_7;

 VAR_6 = FUNC_3(&VAR_4->uf_control,
              VAR_3,
              (void **)&VAR_5);

 if ((VAR_6 == VAR_1) &&
     (VAR_5->fis_type == VAR_0)) {
  FUNC_2(&VAR_4->uf_control,
             VAR_3,
             (void **)&VAR_7);

  FUNC_0(&VAR_2->stp.rsp,
             VAR_5,
             VAR_7);
 }

 FUNC_1(VAR_4, VAR_3);

 return VAR_6;
}
