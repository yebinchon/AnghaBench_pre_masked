
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpwd {int lock; TYPE_1__* devs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int runstatus; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpwd*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct cpwd *VAR_5 = VAR_4;




 FUNC_1(&VAR_5->lock);

 FUNC_0(VAR_5, VAR_1);
 VAR_5->devs[VAR_1].runstatus |= VAR_2;

 FUNC_2(&VAR_5->lock);

 return VAR_0;
}
