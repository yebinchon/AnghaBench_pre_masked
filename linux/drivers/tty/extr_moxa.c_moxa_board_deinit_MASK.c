
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct moxa_board_conf {unsigned int numPorts; TYPE_1__* ports; int * basemem; scalar_t__ ready; } ;
struct TYPE_2__ {int port; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 struct moxa_board_conf* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct moxa_board_conf *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;

 FUNC_3(&VAR_4);
 FUNC_5(&VAR_3);
 VAR_5->ready = 0;
 FUNC_6(&VAR_3);


 for (VAR_6 = 0; VAR_6 < VAR_5->numPorts; VAR_6++)
  if (FUNC_8(&VAR_5->ports[VAR_6].port))
   FUNC_9(&VAR_5->ports[VAR_6].port, 0);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_7(&VAR_5->ports[VAR_6].port);

 while (1) {
  VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_5->numPorts; VAR_6++)
   if (FUNC_8(&VAR_5->ports[VAR_6].port))
    VAR_7++;
  FUNC_4(&VAR_4);
  if (!VAR_7)
   break;
  FUNC_2(50);
  FUNC_3(&VAR_4);
 }

 VAR_8 = (VAR_5 - VAR_2) * VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_5->numPorts; VAR_6++)
  FUNC_10(VAR_1, VAR_8 + VAR_6);

 FUNC_0(VAR_5->basemem);
 VAR_5->basemem = ((void*)0);
 FUNC_1(VAR_5->ports);
}
