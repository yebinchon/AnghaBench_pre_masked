
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int sm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct isci_remote_device*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct isci_remote_device *VAR_2 = VAR_1;

 if (FUNC_0(VAR_2))
  return;


 FUNC_1(&VAR_2->sm, VAR_0);
}
