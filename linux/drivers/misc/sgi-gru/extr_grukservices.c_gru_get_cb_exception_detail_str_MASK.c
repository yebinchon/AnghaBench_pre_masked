
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_control_block_status {scalar_t__ istatus; } ;
struct control_block_extended_exc_detail {int opc; int exopc; int ecause; int exceptdet1; int exceptdet0; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,struct control_block_extended_exc_detail*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static char *FUNC_3(int VAR_1, void *VAR_2,
          char *VAR_3, int VAR_4)
{
 struct gru_control_block_status *VAR_5 = (void *)VAR_2;
 struct control_block_extended_exc_detail VAR_6;

 if (VAR_1 > 0 && VAR_5->istatus == VAR_0) {
  FUNC_0(VAR_2, &VAR_6);
  FUNC_2(VAR_3, VAR_4,
   "GRU:%d exception: cb %p, opc %d, exopc %d, ecause 0x%x,"
   "excdet0 0x%lx, excdet1 0x%x", FUNC_1(),
   VAR_5, VAR_6.opc, VAR_6.exopc, VAR_6.ecause,
   VAR_6.exceptdet0, VAR_6.exceptdet1);
 } else {
  FUNC_2(VAR_3, VAR_4, "No exception");
 }
 return VAR_3;
}
