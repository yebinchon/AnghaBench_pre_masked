
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pending; } ;
struct softing {TYPE_1__ tx; int * dpram; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct softing*,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct softing *VAR_3)
{
 int VAR_4;

 do {

  FUNC_0(0, &VAR_3->dpram[VAR_1]);
  FUNC_0(0, &VAR_3->dpram[VAR_1+1]);
  FUNC_0(1, &VAR_3->dpram[VAR_0]);
  FUNC_0(0, &VAR_3->dpram[VAR_0+1]);

  VAR_4 = FUNC_2(VAR_3, 0, "reset_can");
  if (!VAR_4)
   break;
  if (FUNC_1(VAR_2))

   break;
 } while (1);
 VAR_3->tx.pending = 0;
 return VAR_4;
}
