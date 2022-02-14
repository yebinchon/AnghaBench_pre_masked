
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {unsigned int irq; TYPE_1__** resource; int dev; int * prod_id; } ;
typedef int devname ;
struct TYPE_2__ {unsigned int start; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_5 (struct pcmcia_device*) ;
 int FUNC_6 (struct pcmcia_device*) ;
 scalar_t__ FUNC_7 (struct pcmcia_device*,int ,int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int ,int) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct pcmcia_device *VAR_2)
{
 int VAR_3 = -1;
 char VAR_4[128];
 int VAR_5;
 int (*VAR_6)(unsigned int VAR_7, unsigned VAR_8);

 VAR_4[0] = 0;
 if (VAR_2->prod_id[1])
  FUNC_9(VAR_4, VAR_2->prod_id[1], sizeof(VAR_4));




 if (FUNC_7(VAR_2, VAR_1, ((void*)0)))
  return -VAR_0;

 do {
  if (!VAR_2->irq) {

   FUNC_5(VAR_2);
   break;
  }




  VAR_3 = FUNC_6(VAR_2);
  if (VAR_3 != 0) {
   FUNC_5(VAR_2);
   break;
  }

 } while (0);

 if (VAR_4[0]) {
  char *VAR_9 = FUNC_10(VAR_4, ' ');
  if (!VAR_9)
   VAR_9 = VAR_4;
  else VAR_9++;
  if (FUNC_8("M1", VAR_9) == 0) {
   VAR_5 = 129;
  } else if (FUNC_8("M2", VAR_9) == 0) {
   VAR_5 = 128;
  } else {
   VAR_5 = 130;
  }
 } else
  VAR_5 = 130;


 if (VAR_3 != 0) {
  FUNC_0(VAR_2);
  return -VAR_0;
 }


 switch (VAR_5) {
 case 129: VAR_6 = FUNC_2; break;
 case 128: VAR_6 = FUNC_3; break;
 default:
 case 130: VAR_6 = FUNC_1; break;
 }
 if ((VAR_3 = (*VAR_6)(VAR_2->resource[0]->start, VAR_2->irq)) < 0) {
  FUNC_4(&VAR_2->dev,
   "avm_cs: failed to add AVM-Controller at i/o %#x, irq %d\n",
   (unsigned int) VAR_2->resource[0]->start, VAR_2->irq);
  FUNC_0(VAR_2);
  return -VAR_0;
 }
 return 0;

}
