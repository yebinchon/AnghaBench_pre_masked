
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_2__ {int bc_ver; } ;
struct bnx2x {TYPE_1__ common; int fw_ver; int link_params; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct bnx2x*,char*,size_t) ;
 int FUNC_3 (char*,int,char*,int,int,int,char*,char*) ;
 int FUNC_4 (char*,int ,size_t) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct bnx2x *VAR_1, char *VAR_2, size_t VAR_3)
{
 if (FUNC_0(VAR_1)) {
  u8 VAR_4[VAR_0];

  VAR_4[0] = '\0';
  FUNC_1(&VAR_1->link_params,
          VAR_4, VAR_0);
  FUNC_4(VAR_2, VAR_1->fw_ver, VAR_3);
  FUNC_3(VAR_2 + FUNC_5(VAR_1->fw_ver), 32 - FUNC_5(VAR_1->fw_ver),
    "bc %d.%d.%d%s%s",
    (VAR_1->common.bc_ver & 0xff0000) >> 16,
    (VAR_1->common.bc_ver & 0xff00) >> 8,
    (VAR_1->common.bc_ver & 0xff),
    ((VAR_4[0] != '\0') ? " phy " : ""), VAR_4);
 } else {
  FUNC_2(VAR_1, VAR_2, VAR_3);
 }
}
