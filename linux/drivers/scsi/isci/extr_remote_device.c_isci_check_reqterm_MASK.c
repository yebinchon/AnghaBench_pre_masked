
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isci_request {int flags; } ;
struct isci_remote_device {int dummy; } ;
struct isci_host {int scic_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct isci_remote_device*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(
 struct isci_host *VAR_1,
 struct isci_remote_device *VAR_2,
 struct isci_request *VAR_3,
 u32 VAR_4)
{
 unsigned long VAR_5;
 bool VAR_6;

 FUNC_1(&VAR_1->scic_lock, VAR_5);
 VAR_6 = FUNC_0(VAR_2, VAR_4)
  && !FUNC_3(VAR_0, &VAR_3->flags);
 FUNC_2(&VAR_1->scic_lock, VAR_5);

 return VAR_6;
}
