
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_data {int io_db; } ;
struct resource {int dummy; } ;
struct pcmcia_socket {TYPE_1__* cb_dev; struct socket_data* resource_data; int dev; } ;
struct pcmcia_align_data {unsigned long mask; unsigned long offset; int * map; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct resource*,int,unsigned long,unsigned long,int,int ,struct pcmcia_align_data*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (int ,struct resource*,int,int,unsigned long,int ,int ,struct pcmcia_align_data*) ;
 int VAR_2 ;
 struct resource* FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static struct resource *FUNC_5(struct pcmcia_socket *VAR_3,
      unsigned long VAR_4, int VAR_5,
      unsigned long VAR_6)
{
 struct resource *VAR_7 = FUNC_4(0, VAR_5, VAR_0,
      FUNC_1(&VAR_3->dev));
 struct socket_data *VAR_8 = VAR_3->resource_data;
 struct pcmcia_align_data VAR_9;
 unsigned long VAR_10 = VAR_4;
 int VAR_11;

 VAR_9.mask = VAR_6 - 1;
 VAR_9.offset = VAR_4 & VAR_9.mask;
 VAR_9.map = &VAR_8->io_db;







  VAR_11 = FUNC_0(&VAR_1, VAR_7, VAR_5, VAR_10, ~0UL,
     1, VAR_2, &VAR_9);

 if (VAR_11 != 0) {
  FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
 }
 return VAR_7;
}
