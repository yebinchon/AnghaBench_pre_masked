
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {unsigned long next_port_scan; int scan_work; int work_queue; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct zfcp_adapter *VAR_3)
{
 unsigned long VAR_4 = VAR_0;
 unsigned long VAR_5 = VAR_3->next_port_scan;
 unsigned long VAR_6 = 0, VAR_7;


 if (FUNC_3(VAR_4, VAR_5)) {
  VAR_6 = VAR_5 - VAR_4;

  VAR_7 = FUNC_1(VAR_2 + VAR_1);
  VAR_6 = FUNC_0(VAR_6, VAR_7);
 }

 FUNC_2(VAR_3->work_queue, &VAR_3->scan_work, VAR_6);
}
