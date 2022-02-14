
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int end; int start; } ;
struct pcmcia_socket {int dummy; } ;
struct TYPE_5__ {int map; struct resource* res; } ;
typedef TYPE_1__ pccard_mem_map ;
struct TYPE_6__ {int member_4; int map; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ pccard_io_map ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pcmcia_socket*,TYPE_2__*) ;
 int FUNC_2 (struct pcmcia_socket*,TYPE_1__*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_socket *VAR_0)
{
 int VAR_1;
 struct resource VAR_2 = { .start = 0, .end = 0x0fff };
        pccard_io_map VAR_3 = { 0, 0, 0, 0, 1 };
 pccard_mem_map VAR_4 = { .res = &VAR_2, };

        FUNC_0("i82092aa_init");

        for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
         VAR_3.map = VAR_1;
                FUNC_1(VAR_0, &VAR_3);
 }
        for (VAR_1 = 0; VAR_1 < 5; VAR_1++) {
         VAR_4.map = VAR_1;
                FUNC_2(VAR_0, &VAR_4);
 }

 FUNC_3("i82092aa_init");
 return 0;
}
