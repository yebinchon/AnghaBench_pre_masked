
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {scalar_t__ working_request; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct isci_remote_device *VAR_1 = VAR_0;


 if (VAR_1->working_request)
  FUNC_0(VAR_1->working_request);
}
