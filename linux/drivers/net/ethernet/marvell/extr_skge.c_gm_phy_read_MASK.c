
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct skge_hw {TYPE_1__** dev; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (struct skge_hw*,int,int ,int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct skge_hw *VAR_0, int VAR_1, u16 VAR_2)
{
 u16 VAR_3 = 0;
 if (FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3))
  FUNC_1("%s: phy read timeout\n", VAR_0->dev[VAR_1]->name);
 return VAR_3;
}
