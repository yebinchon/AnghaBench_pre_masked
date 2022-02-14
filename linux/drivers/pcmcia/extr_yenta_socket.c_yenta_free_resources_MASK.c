
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yenta_socket {TYPE_1__* dev; } ;
struct resource {scalar_t__ start; scalar_t__ end; scalar_t__ flags; } ;
struct TYPE_2__ {struct resource* resource; } ;


 int VAR_0 ;
 int FUNC_0 (struct resource*) ;

__attribute__((used)) static void FUNC_1(struct yenta_socket *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  struct resource *VAR_3;
  VAR_3 = VAR_1->dev->resource + VAR_0 + VAR_2;
  if (VAR_3->start != 0 && VAR_3->end != 0)
   FUNC_0(VAR_3);
  VAR_3->start = VAR_3->end = VAR_3->flags = 0;
 }
}
