
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {int num; int base; struct resource_map* next; } ;
struct socket_data {struct resource_map mem_db; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pcmcia_socket*,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pcmcia_socket *VAR_3, unsigned int VAR_4)
{
 struct resource_map *VAR_5, VAR_6;
 struct socket_data *VAR_7 = VAR_3->resource_data;
 unsigned long VAR_8 = 0;

 for (VAR_5 = VAR_7->mem_db.next; VAR_5 != &VAR_7->mem_db; VAR_5 = VAR_6.next) {
  VAR_6 = *VAR_5;
  VAR_8 += FUNC_0(VAR_3, VAR_6.base, VAR_6.num, VAR_2, VAR_1);
 }
 if (VAR_8 > 0)
  return 0;
 return -VAR_0;
}
