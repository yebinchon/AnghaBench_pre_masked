
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int kref; int flags; } ;
struct domain_device {struct isci_remote_device* lldd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline struct isci_remote_device *FUNC_2(struct domain_device *VAR_1)
{
 struct isci_remote_device *VAR_2 = VAR_1->lldd_dev;

 if (VAR_2 && !FUNC_1(VAR_0, &VAR_2->flags)) {
  FUNC_0(&VAR_2->kref);
  return VAR_2;
 }

 return ((void*)0);
}
