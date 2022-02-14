
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_data {int io_db; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;



 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

 int FUNC_0 (int *,unsigned long,unsigned long) ;
 int FUNC_1 (struct pcmcia_socket*,unsigned long,unsigned long) ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_4, unsigned int VAR_5, unsigned long VAR_6, unsigned long VAR_7)
{
 struct socket_data *VAR_8 = VAR_4->resource_data;
 unsigned long VAR_9;
 int VAR_10 = 0;
 VAR_9 = VAR_7 - VAR_6 + 1;

 if (VAR_7 < VAR_6)
  return -VAR_1;

 if (VAR_7 > VAR_2)
  return -VAR_1;

 switch (VAR_5) {
 case 129:
  if (FUNC_0(&VAR_8->io_db, VAR_6, VAR_9) != 0) {
   VAR_10 = -VAR_0;
   break;
  }




  break;
 case 128:
  FUNC_2(&VAR_8->io_db, VAR_6, VAR_9);
  break;
 default:
  VAR_10 = -VAR_1;
  break;
 }

 return VAR_10;
}
