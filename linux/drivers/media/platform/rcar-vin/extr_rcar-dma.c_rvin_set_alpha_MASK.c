
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pixelformat; } ;
struct rvin_dev {unsigned int alpha; scalar_t__ state; int qlock; TYPE_1__ format; } ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rvin_dev*,int ) ;
 int FUNC_2 (struct rvin_dev*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct rvin_dev *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_3(&VAR_4->qlock, VAR_6);

 VAR_4->alpha = VAR_5;

 if (VAR_4->state == VAR_0)
  goto out;

 switch (VAR_4->format.pixelformat) {
 case 128:
  VAR_7 = FUNC_1(VAR_4, VAR_3) & ~VAR_2;
  if (VAR_4->alpha)
   VAR_7 |= VAR_2;
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_4, VAR_3) & ~VAR_1;
  VAR_7 |= FUNC_0(VAR_4->alpha);
  break;
 default:
  goto out;
 }

 FUNC_2(VAR_4, VAR_7, VAR_3);
out:
 FUNC_4(&VAR_4->qlock, VAR_6);
}
