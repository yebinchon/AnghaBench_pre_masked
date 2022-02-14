
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_request {int dummy; } ;
struct isci_remote_device {int started_request_count; int kref; struct isci_port* owning_port; } ;
struct isci_port {int dummy; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct isci_port*,struct isci_remote_device*,struct isci_request*) ;

__attribute__((used)) static void FUNC_2(struct isci_remote_device *VAR_1,
       struct isci_request *VAR_2,
       enum sci_status VAR_3)
{
 struct isci_port *VAR_4 = VAR_1->owning_port;


 if (VAR_3 != VAR_0)
  FUNC_1(VAR_4, VAR_1, VAR_2);
 else {
  FUNC_0(&VAR_1->kref);
  VAR_1->started_request_count++;
 }
}
