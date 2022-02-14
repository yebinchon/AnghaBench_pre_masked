
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int end; } ;
struct pcmcia_socket {int dummy; } ;
struct TYPE_5__ {int map; struct resource* res; } ;
typedef TYPE_1__ pccard_mem_map ;
struct TYPE_6__ {int member_4; int map; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ pccard_io_map ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_socket*,TYPE_2__*) ;
 int FUNC_1 (struct pcmcia_socket*,TYPE_1__*) ;
 int FUNC_2 (struct pcmcia_socket*,int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_1)
{
 int VAR_2;
 struct resource VAR_3 = { .end = 0x0fff };
 pccard_io_map VAR_4 = { 0, 0, 0, 0, 1 };
 pccard_mem_map VAR_5 = { .res = &VAR_3, };

 FUNC_2(VAR_1, &VAR_0);
 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  VAR_4.map = VAR_2;
  FUNC_0(VAR_1, &VAR_4);
 }
 for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
  VAR_5.map = VAR_2;
  FUNC_1(VAR_1, &VAR_5);
 }

 return 0;
}
