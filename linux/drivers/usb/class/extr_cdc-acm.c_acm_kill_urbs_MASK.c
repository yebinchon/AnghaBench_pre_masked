
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acm {int rx_buflimit; int * read_urbs; TYPE_1__* wb; int ctrlurb; } ;
struct TYPE_2__ {int urb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct acm *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->ctrlurb);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->wb[VAR_2].urb);
 for (VAR_2 = 0; VAR_2 < VAR_1->rx_buflimit; VAR_2++)
  FUNC_0(VAR_1->read_urbs[VAR_2]);
}
