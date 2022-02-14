
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hix5hd2_priv {TYPE_1__* pool; int dev; } ;
struct TYPE_2__ {int * desc; int phys_addr; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct hix5hd2_priv *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->pool[VAR_2].desc) {
   FUNC_0(VAR_1->dev, VAR_1->pool[VAR_2].size,
       VAR_1->pool[VAR_2].desc,
       VAR_1->pool[VAR_2].phys_addr);
   VAR_1->pool[VAR_2].desc = ((void*)0);
  }
 }
}
