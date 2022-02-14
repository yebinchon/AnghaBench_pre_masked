
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {unsigned int start; unsigned int end; int * parent; int flags; } ;
struct pcmcia_socket {int dev; TYPE_1__* resource_ops; } ;
struct TYPE_2__ {int (* find_io ) (struct pcmcia_socket*,int ,unsigned int*,unsigned int,unsigned int,int **) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,struct resource*,int) ;
 int FUNC_2 (struct pcmcia_socket*,struct resource*) ;
 int FUNC_3 (int *,struct resource*) ;
 int FUNC_4 (struct pcmcia_socket*,int ,unsigned int*,unsigned int,unsigned int,int **) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_socket *VAR_2, struct resource *VAR_3,
   unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6 = VAR_3->start;
 unsigned int VAR_7 = VAR_3->end;
 int VAR_8;

 VAR_3->flags |= VAR_1;

 FUNC_0(&VAR_2->dev, "alloc_io_space request for %pR, %d lines\n",
  VAR_3, VAR_4);

 VAR_5 = VAR_6 ? (VAR_4 ? 1<<VAR_4 : 0) : 1;
 if (VAR_5 && (VAR_5 < VAR_7)) {
  if (VAR_6) {
   FUNC_0(&VAR_2->dev, "odd IO request\n");
   VAR_5 = 0;
  } else
   while (VAR_5 && (VAR_5 < VAR_7))
    VAR_5 <<= 1;
 }
 if (VAR_6 & ~(VAR_5-1)) {
  FUNC_0(&VAR_2->dev, "odd IO request\n");
  VAR_5 = 0;
 }

 VAR_8 = VAR_2->resource_ops->find_io(VAR_2, VAR_3->flags, &VAR_6, VAR_7, VAR_5,
    &VAR_3->parent);
 if (VAR_8) {
  FUNC_0(&VAR_2->dev, "alloc_io_space request failed (%d)\n", VAR_8);
  return -VAR_0;
 }

 VAR_3->start = VAR_6;
 VAR_3->end = VAR_3->start + VAR_7 - 1;

 if (VAR_3->parent) {
  VAR_8 = FUNC_3(VAR_3->parent, VAR_3);
  if (VAR_8) {
   FUNC_1(&VAR_2->dev,
    "request_resource %pR failed: %d\n", VAR_3, VAR_8);
   VAR_3->parent = ((void*)0);
   FUNC_2(VAR_2, VAR_3);
  }
 }
 FUNC_0(&VAR_2->dev, "alloc_io_space request result %d: %pR\n", VAR_8, VAR_3);
 return VAR_8;
}
