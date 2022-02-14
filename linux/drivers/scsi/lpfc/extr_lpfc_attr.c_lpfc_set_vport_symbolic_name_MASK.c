
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ port_state; } ;
struct fc_vport {scalar_t__ dd_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct fc_vport *VAR_2)
{
 struct lpfc_vport *VAR_3 = *(struct lpfc_vport **)VAR_2->dd_data;

 if (VAR_3->port_state == VAR_0)
  FUNC_0(VAR_3, VAR_1, 0, 0);
}
