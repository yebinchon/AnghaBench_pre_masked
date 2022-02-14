
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int addr; int name; } ;
struct v4l2_dbg_register {int reg; int val; TYPE_1__ match; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void FUNC_1(const void *VAR_1, bool VAR_2)
{
 const struct v4l2_dbg_register *VAR_3 = VAR_1;

 FUNC_0("type=%u, ", VAR_3->match.type);
 if (VAR_3->match.type == VAR_0)
  FUNC_0("name=%.*s, ",
    (int)sizeof(VAR_3->match.name), VAR_3->match.name);
 else
  FUNC_0("addr=%u, ", VAR_3->match.addr);
 FUNC_0("reg=0x%llx, val=0x%llx\n",
   VAR_3->reg, VAR_3->val);
}
