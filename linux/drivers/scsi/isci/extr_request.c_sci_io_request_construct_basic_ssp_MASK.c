
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {int total_xfer_len; int data_dir; } ;
struct isci_request {int sm; int protocol; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sas_task* FUNC_0 (struct isci_request*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct isci_request*) ;
 int FUNC_3 (struct isci_request*,int ,int ) ;

__attribute__((used)) static enum sci_status FUNC_4(struct isci_request *VAR_3)
{
 struct sas_task *VAR_4 = FUNC_0(VAR_3);

 VAR_3->protocol = VAR_0;

 FUNC_3(VAR_3,
        VAR_4->data_dir,
        VAR_4->total_xfer_len);

 FUNC_2(VAR_3);

 FUNC_1(&VAR_3->sm, VAR_1);

 return VAR_2;
}
