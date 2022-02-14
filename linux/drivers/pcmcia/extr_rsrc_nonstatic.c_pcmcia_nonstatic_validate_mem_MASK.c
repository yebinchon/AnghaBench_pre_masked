
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* next; } ;
struct socket_data {TYPE_1__ mem_db_valid; } ;
struct pcmcia_socket {int state; int features; struct socket_data* resource_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_socket*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_socket *VAR_5)
{
 struct socket_data *VAR_6 = VAR_5->resource_data;
 unsigned int VAR_7 = VAR_1;
 int VAR_8;

 if (!VAR_4 || !(VAR_5->state & VAR_2))
  return 0;

 if (VAR_5->features & VAR_3)
  VAR_7 = VAR_0;

 VAR_8 = FUNC_0(VAR_5, VAR_7);

 if (VAR_6->mem_db_valid.next != &VAR_6->mem_db_valid)
  return 0;

 return VAR_8;
}
