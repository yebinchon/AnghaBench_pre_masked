
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_path {int path_length; TYPE_1__* hops; int nfc_credits; } ;
struct TYPE_2__ {int in_port; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct tb_path *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = VAR_1; VAR_2 < VAR_0->path_length; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0->hops[VAR_2].in_port,
           -VAR_0->nfc_credits);
  if (VAR_3)
   FUNC_1(VAR_0->hops[VAR_2].in_port,
         "nfc credits deallocation failed for hop %d\n",
         VAR_2);
 }
}
