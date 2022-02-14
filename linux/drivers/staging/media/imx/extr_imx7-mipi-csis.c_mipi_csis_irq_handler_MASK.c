
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct csi_state {int slock; TYPE_1__* events; scalar_t__ debug; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int mask; int counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct csi_state*,int ) ;
 int FUNC_1 (struct csi_state*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct csi_state *VAR_6 = VAR_5;
 unsigned long VAR_7;
 unsigned int VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_1);

 FUNC_2(&VAR_6->slock, VAR_7);


 if ((VAR_9 & VAR_2) || VAR_6->debug) {
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   if (!(VAR_9 & VAR_6->events[VAR_8].mask))
    continue;
   VAR_6->events[VAR_8].counter++;
  }
 }
 FUNC_3(&VAR_6->slock, VAR_7);

 FUNC_1(VAR_6, VAR_1, VAR_9);

 return VAR_0;
}
