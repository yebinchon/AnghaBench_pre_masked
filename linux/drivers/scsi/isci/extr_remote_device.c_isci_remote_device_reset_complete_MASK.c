
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int dummy; } ;
struct isci_host {int scic_lock; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int FUNC_0 (struct isci_remote_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

enum sci_status FUNC_3(
 struct isci_host *VAR_0,
 struct isci_remote_device *VAR_1)
{
 unsigned long VAR_2;
 enum sci_status VAR_3;

 FUNC_1(&VAR_0->scic_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(&VAR_0->scic_lock, VAR_2);

 return VAR_3;
}
