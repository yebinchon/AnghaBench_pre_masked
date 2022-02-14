
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {int dummy; } ;
struct csio_lnode {int flags; struct csio_lnode* pln; struct fc_vport* fc_vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct csio_lnode*,char*) ;
 int FUNC_1 (struct fc_vport*,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct csio_lnode *VAR_4)
{
 struct fc_vport *VAR_5 = VAR_4->fc_vport;
 struct csio_lnode *VAR_6 = VAR_4->pln;
 char VAR_7[16];


 FUNC_0(VAR_6, VAR_7);
 if (FUNC_2(VAR_7, "READY")) {
  FUNC_1(VAR_5, VAR_2);
  return;
 }

 if (!(VAR_6->flags & VAR_0)) {
  FUNC_1(VAR_5, VAR_3);
  return;
 }


 FUNC_0(VAR_4, VAR_7);
 if (FUNC_2(VAR_7, "READY")) {
  FUNC_1(VAR_5, VAR_2);
  return;
 }
 FUNC_1(VAR_5, VAR_1);
}
