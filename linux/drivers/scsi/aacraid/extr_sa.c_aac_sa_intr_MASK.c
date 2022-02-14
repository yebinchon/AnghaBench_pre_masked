
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aac_dev {TYPE_1__* queues; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int PRISETIRQMASK; } ;
struct TYPE_3__ {int * queue; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 TYPE_2__ VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct aac_dev*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct aac_dev*,int ) ;
 unsigned short FUNC_4 (struct aac_dev*,int ) ;
 int FUNC_5 (struct aac_dev*,int ,unsigned short) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_15, void *VAR_16)
{
 struct aac_dev *VAR_17 = VAR_16;
 unsigned short VAR_18, VAR_19;

 VAR_18 = FUNC_4(VAR_17, VAR_5);




 VAR_19 = ~(FUNC_4(VAR_17, VAR_14.PRISETIRQMASK));



 if (VAR_18 & VAR_19) {
  if (VAR_18 & VAR_13) {
   FUNC_1(VAR_17, FUNC_3(VAR_17, VAR_11));
   FUNC_5(VAR_17, VAR_4, VAR_13);
   FUNC_5(VAR_17, VAR_6, VAR_12);
  } else if (VAR_18 & VAR_0) {
   FUNC_5(VAR_17, VAR_4, VAR_0);
   FUNC_0(&VAR_17->queues->queue[VAR_7]);
  } else if (VAR_18 & VAR_1) {
   FUNC_5(VAR_17, VAR_4, VAR_1);
   FUNC_2(&VAR_17->queues->queue[VAR_8]);
  } else if (VAR_18 & VAR_2) {
   FUNC_5(VAR_17, VAR_4, VAR_2);
  } else if (VAR_18 & VAR_3) {
   FUNC_5(VAR_17, VAR_4, VAR_3);
  }
  return VAR_9;
 }
 return VAR_10;
}
