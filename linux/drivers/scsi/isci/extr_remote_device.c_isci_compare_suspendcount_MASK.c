
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ suspend_count; } ;
struct isci_remote_device {TYPE_1__ rnc; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(
 struct isci_remote_device *VAR_0,
 u32 VAR_1)
{
 FUNC_1();




 return (VAR_1 != VAR_0->rnc.suspend_count)
     || FUNC_0(&VAR_0->rnc);
}
