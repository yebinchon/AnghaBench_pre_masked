
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int pps_pending; int pps_status; int pps_complete; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tcpm_port *VAR_0, int VAR_1)
{
 if (VAR_0->pps_pending) {
  VAR_0->pps_status = VAR_1;
  VAR_0->pps_pending = 0;
  FUNC_0(&VAR_0->pps_complete);
 }
}
