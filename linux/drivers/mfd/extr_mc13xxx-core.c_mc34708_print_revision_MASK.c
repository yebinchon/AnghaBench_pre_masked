
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mc13xxx {TYPE_1__* variant; int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mc13xxx *VAR_4, u32 VAR_5)
{
 FUNC_0(VAR_4->dev, "%s: rev %d.%d, fin: %d, fab: %d\n",
   VAR_4->variant->name,
   FUNC_1(VAR_5, VAR_2),
   FUNC_1(VAR_5, VAR_3),
   FUNC_1(VAR_5, VAR_1),
   FUNC_1(VAR_5, VAR_0));
}
