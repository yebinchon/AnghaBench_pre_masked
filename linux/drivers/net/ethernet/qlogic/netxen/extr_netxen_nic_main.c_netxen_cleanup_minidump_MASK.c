
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * md_capture_buff; int * md_template; } ;
struct netxen_adapter {TYPE_1__ mdump; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static
void FUNC_2(struct netxen_adapter *VAR_0)
{
 FUNC_0(VAR_0->mdump.md_template);
 VAR_0->mdump.md_template = ((void*)0);

 if (VAR_0->mdump.md_capture_buff) {
  FUNC_1(VAR_0->mdump.md_capture_buff);
  VAR_0->mdump.md_capture_buff = ((void*)0);
 }
}
