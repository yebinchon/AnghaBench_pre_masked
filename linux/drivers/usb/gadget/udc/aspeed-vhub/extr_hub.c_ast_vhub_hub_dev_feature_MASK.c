
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ast_vhub_ep {TYPE_1__* vhub; } ;
struct TYPE_2__ {int wakeup_en; } ;


 int FUNC_0 (struct ast_vhub_ep*,char*,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ast_vhub_ep *VAR_3,
        u16 VAR_4, u16 VAR_5,
        bool VAR_6)
{
 FUNC_0(VAR_3, "%s_FEATURE(dev val=%02x)\n",
       VAR_6 ? "SET" : "CLEAR", VAR_5);

 if (VAR_5 != VAR_0)
  return VAR_2;

 VAR_3->vhub->wakeup_en = VAR_6;
 FUNC_0(VAR_3, "Hub remote wakeup %s\n",
       VAR_6 ? "enabled" : "disabled");

 return VAR_1;
}
