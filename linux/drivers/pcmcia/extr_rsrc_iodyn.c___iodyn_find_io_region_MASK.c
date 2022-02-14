
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct pcmcia_socket {TYPE_1__* cb_dev; int dev; } ;
struct pcmcia_align_data {unsigned long mask; unsigned long offset; } ;
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
 struct pcmcia_align_data VAR_8;
 unsigned long VAR_9 = VAR_4;
 int VAR_10;

 VAR_8.mask = VAR_6 - 1;
 VAR_8.offset = VAR_4 & VAR_8.mask;







  VAR_10 = FUNC_0(&VAR_1, VAR_7, VAR_5, VAR_9, ~0UL,
     1, VAR_2, &VAR_8);

 if (VAR_10 != 0) {
  FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
 }
 return VAR_7;
}
