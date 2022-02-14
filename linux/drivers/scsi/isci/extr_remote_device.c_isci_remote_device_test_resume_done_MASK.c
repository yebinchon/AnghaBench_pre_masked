
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int rnc; int flags; } ;
struct isci_host {int scic_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(
 struct isci_host *VAR_2,
 struct isci_remote_device *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5;

 FUNC_1(&VAR_2->scic_lock, VAR_4);
 VAR_5 = !FUNC_3(VAR_0, &VAR_3->flags)
  || FUNC_3(VAR_1, &VAR_3->flags)
  || FUNC_0(&VAR_3->rnc);
 FUNC_2(&VAR_2->scic_lock, VAR_4);

 return VAR_5;
}
