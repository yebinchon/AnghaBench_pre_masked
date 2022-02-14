
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mc13xxx *VAR_6, u32 VAR_7)
{
 FUNC_0(VAR_6->dev, "%s: rev: %d.%d, "
   "fin: %d, fab: %d, icid: %d/%d\n",
   VAR_6->variant->name,
   FUNC_1(VAR_7, VAR_4),
   FUNC_1(VAR_7, VAR_5),
   FUNC_1(VAR_7, VAR_1),
   FUNC_1(VAR_7, VAR_0),
   FUNC_1(VAR_7, VAR_2),
   FUNC_1(VAR_7, VAR_3));
}
