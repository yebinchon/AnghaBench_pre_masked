
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_data {int mem_db; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;



 int VAR_0 ;

 int FUNC_0 (int *,unsigned long,unsigned long) ;
 int FUNC_1 (struct pcmcia_socket*,unsigned long,unsigned long,int *,int *) ;
 int FUNC_2 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_1, unsigned int VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 struct socket_data *VAR_5 = VAR_1->resource_data;
 unsigned long VAR_6 = VAR_4 - VAR_3 + 1;
 int VAR_7 = 0;

 if (VAR_4 < VAR_3)
  return -VAR_0;

 switch (VAR_2) {
 case 129:
  VAR_7 = FUNC_0(&VAR_5->mem_db, VAR_3, VAR_6);
  if (!VAR_7)
   FUNC_1(VAR_1, VAR_3, VAR_6, ((void*)0), ((void*)0));
  break;
 case 128:
  VAR_7 = FUNC_2(&VAR_5->mem_db, VAR_3, VAR_6);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
