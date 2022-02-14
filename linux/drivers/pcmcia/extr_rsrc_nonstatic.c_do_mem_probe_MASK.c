
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct socket_data {int mem_db; } ;
struct pcmcia_socket {int map_size; int dev; struct socket_data* resource_data; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct pcmcia_socket*,int,int,int (*) (struct pcmcia_socket*,struct resource*,unsigned int*)) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_socket *VAR_0, u_long VAR_1, u_long VAR_2,
   int VAR_3 (struct pcmcia_socket *VAR_4,
          struct resource *VAR_5,
          unsigned int *VAR_6),
   int VAR_7 (struct pcmcia_socket *VAR_8,
          struct resource *VAR_9,
          unsigned int *VAR_10))
{
 struct socket_data *VAR_11 = VAR_0->resource_data;
 u_long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 FUNC_0(&VAR_0->dev, "cs: memory probe 0x%06lx-0x%06lx:",
   VAR_1, VAR_1+VAR_2-1);
 VAR_14 = VAR_15 = 0;
 VAR_16 = (VAR_2 < 0x20000) ? 0x2000 : ((VAR_2>>4) & ~0x1fff);

 if (VAR_16 > 0x800000)
  VAR_16 = 0x800000;

 if (VAR_16 < 2 * VAR_0->map_size)
  VAR_16 = 2 * VAR_0->map_size;
 for (VAR_12 = VAR_13 = VAR_1; VAR_12 < VAR_1+VAR_2; VAR_12 = VAR_13 + VAR_16) {
  if (!VAR_15) {
   for (VAR_13 = VAR_12; VAR_13 < VAR_1+VAR_2; VAR_13 += VAR_16) {
    if (!FUNC_1(VAR_0, VAR_13, VAR_16, VAR_3))
     break;
   }
   VAR_15 = ((VAR_12 == VAR_1) && (VAR_13 == VAR_1+VAR_2));
  }
  if ((VAR_15) && (VAR_7)) {
   for (VAR_13 = VAR_12; VAR_13 < VAR_1+VAR_2; VAR_13 += VAR_16)
    if (!FUNC_1(VAR_0, VAR_13, VAR_16, VAR_7))
     break;
  }
  if (VAR_12 != VAR_13) {
   if (!VAR_14)
    FUNC_2(" excluding");
   FUNC_2(" %#05lx-%#05lx", VAR_12, VAR_13-1);
   FUNC_3(&VAR_11->mem_db, VAR_12, VAR_13-VAR_12);
   VAR_14 += VAR_13-VAR_12;
  }
 }
 FUNC_2("%s\n", !VAR_14 ? " clean" : "");
 return VAR_2 - VAR_14;
}
