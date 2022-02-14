
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u_long ;
struct socket_data {int mem_db; int mem_db_valid; } ;
struct resource {int dummy; } ;
struct pcmcia_socket {int features; TYPE_1__* cb_dev; struct socket_data* resource_data; int dev; } ;
struct pcmcia_align_data {unsigned long mask; unsigned long offset; int * map; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct resource*,unsigned long,unsigned long,unsigned long,int,int ,struct pcmcia_align_data*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (int ,struct resource*,unsigned long,int,unsigned long,int ,int ,struct pcmcia_align_data*) ;
 int VAR_3 ;
 struct resource* FUNC_4 (int ,unsigned long,int ,int ) ;

__attribute__((used)) static struct resource *FUNC_5(u_long VAR_4, u_long VAR_5,
  u_long VAR_6, int VAR_7, struct pcmcia_socket *VAR_8)
{
 struct resource *VAR_9 = FUNC_4(0, VAR_5, VAR_0,
      FUNC_1(&VAR_8->dev));
 struct socket_data *VAR_10 = VAR_8->resource_data;
 struct pcmcia_align_data VAR_11;
 unsigned long VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_7 = VAR_7 || !(VAR_8->features & VAR_1);

 VAR_11.mask = VAR_6 - 1;
 VAR_11.offset = VAR_4 & VAR_11.mask;

 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  VAR_11.map = &VAR_10->mem_db_valid;
  if (VAR_7) {
   VAR_13 = 0x100000UL;
   VAR_12 = VAR_4 < VAR_13 ? VAR_4 : 0;
  } else {
   VAR_13 = ~0UL;
   VAR_12 = 0x100000UL + VAR_4;
  }

  for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {







   {
    VAR_14 = FUNC_0(&VAR_2,
       VAR_9, VAR_5, VAR_12, VAR_13, 1,
       VAR_3, &VAR_11);
   }
   if (VAR_14 == 0)
    break;
   VAR_11.map = &VAR_10->mem_db;
  }
  if (VAR_14 == 0 || VAR_7)
   break;
  VAR_7 = 1;
 }

 if (VAR_14 != 0) {
  FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
 }
 return VAR_9;
}
