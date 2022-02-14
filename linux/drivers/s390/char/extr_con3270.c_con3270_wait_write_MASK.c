
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct con3270 {TYPE_1__ view; int write; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct con3270 *VAR_0)
{
 while (!VAR_0->write) {
  FUNC_1(VAR_0->view.dev);
  FUNC_0();
 }
}
