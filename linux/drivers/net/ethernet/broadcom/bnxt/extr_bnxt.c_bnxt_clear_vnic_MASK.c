
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int flags; int vnic_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*,int) ;

__attribute__((used)) static void FUNC_5(struct bnxt *VAR_2)
{
 if (!VAR_2->vnic_info)
  return;

 FUNC_0(VAR_2);
 if (!(VAR_2->flags & VAR_0)) {

  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }

 if (VAR_2->flags & VAR_1)
  FUNC_4(VAR_2, 0);
 FUNC_3(VAR_2);
 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_2);
}
