
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int * irq; void* priv; int state; } ;


 size_t FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mii_bus* FUNC_1 (size_t,int ) ;

struct mii_bus *FUNC_2(size_t VAR_5)
{
 struct mii_bus *VAR_6;
 size_t VAR_7 = FUNC_0(sizeof(*VAR_6), VAR_2);
 size_t VAR_8;
 int VAR_9;


 if (VAR_5)
  VAR_8 = VAR_7 + VAR_5;
 else
  VAR_8 = sizeof(*VAR_6);

 VAR_6 = FUNC_1(VAR_8, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->state = VAR_1;
 if (VAR_5)
  VAR_6->priv = (void *)VAR_6 + VAR_7;


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  VAR_6->irq[VAR_9] = VAR_4;

 return VAR_6;
}
