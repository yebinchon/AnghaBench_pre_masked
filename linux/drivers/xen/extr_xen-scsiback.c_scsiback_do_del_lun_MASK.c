
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vscsibk_info {TYPE_1__* dev; } ;
struct ids_tuple {int dummy; } ;
struct TYPE_2__ {int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct vscsibk_info*,struct ids_tuple*) ;
 scalar_t__ FUNC_2 (int ,int ,char const*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct vscsibk_info *VAR_2, const char *VAR_3,
    struct ids_tuple *VAR_4)
{
 if (!FUNC_1(VAR_2, VAR_4)) {
  if (FUNC_2(VAR_0, VAR_2->dev->nodename, VAR_3,
      "%d", VAR_1))
   FUNC_0("xenbus_printf error %s\n", VAR_3);
 }
}
