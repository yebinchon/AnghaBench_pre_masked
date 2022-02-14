
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int dummy; } ;
struct isci_host {int scic_lock; } ;
struct domain_device {int lldd_dev; } ;


 int VAR_0 ;
 struct isci_host* FUNC_0 (struct domain_device*) ;
 struct isci_remote_device* FUNC_1 (int ) ;
 int FUNC_2 (struct isci_remote_device*) ;
 int FUNC_3 (struct isci_host*,struct domain_device*,struct isci_remote_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct domain_device *VAR_1)
{
 struct isci_host *VAR_2 = FUNC_0(VAR_1);
 struct isci_remote_device *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_4(&VAR_2->scic_lock, VAR_4);
 VAR_3 = FUNC_1(VAR_1->lldd_dev);
 FUNC_5(&VAR_2->scic_lock, VAR_4);

 if (!VAR_3) {



  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_3(VAR_2, VAR_1, VAR_3);
 out:
 FUNC_2(VAR_3);
 return VAR_5;
}
