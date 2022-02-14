
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {struct resource_map* next; } ;
struct socket_data {struct resource_map io_db; struct resource_map mem_db; struct resource_map mem_db_valid; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;


 int FUNC_0 (struct resource_map*) ;

__attribute__((used)) static void FUNC_1(struct pcmcia_socket *VAR_0)
{
 struct socket_data *VAR_1 = VAR_0->resource_data;
 struct resource_map *VAR_2, *VAR_3;

 for (VAR_2 = VAR_1->mem_db_valid.next; VAR_2 != &VAR_1->mem_db_valid; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_2);
 }
 for (VAR_2 = VAR_1->mem_db.next; VAR_2 != &VAR_1->mem_db; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_2);
 }
 for (VAR_2 = VAR_1->io_db.next; VAR_2 != &VAR_1->io_db; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_2);
 }
}
