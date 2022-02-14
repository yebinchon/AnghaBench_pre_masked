
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {scalar_t__ next_port_scan; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct zfcp_adapter *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4 = FUNC_0(FUNC_1());

 VAR_2->next_port_scan = VAR_0 + VAR_3 + VAR_4;
}
