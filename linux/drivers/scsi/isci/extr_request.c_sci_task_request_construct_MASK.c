
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scu_task_context {int dummy; } ;
struct isci_request {int protocol; int tc; int flags; } ;
struct isci_remote_device {struct domain_device* domain_dev; } ;
struct isci_host {int dummy; } ;
struct domain_device {scalar_t__ dev_type; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct domain_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct isci_host*,struct isci_remote_device*,struct isci_request*) ;
 int FUNC_3 (int ,int *) ;

enum sci_status FUNC_4(struct isci_host *VAR_6,
         struct isci_remote_device *VAR_7,
         u16 VAR_8, struct isci_request *VAR_9)
{
 struct domain_device *VAR_10 = VAR_7->domain_dev;
 enum sci_status VAR_11 = VAR_5;


 FUNC_2(VAR_6, VAR_7, VAR_9);

 if (VAR_10->dev_type == VAR_1 || FUNC_0(VAR_10)) {
  FUNC_3(VAR_0, &VAR_9->flags);
  FUNC_1(VAR_9->tc, 0, sizeof(struct scu_task_context));


  if (FUNC_0(VAR_10))
   VAR_9->protocol = VAR_3;
  else
   VAR_9->protocol = VAR_2;
 } else
  VAR_11 = VAR_4;

 return VAR_11;
}
