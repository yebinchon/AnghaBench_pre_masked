
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct b44 {int istat; int lock; int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct b44* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct b44 *VAR_5 = FUNC_7(VAR_4);
 u32 VAR_6, VAR_7;
 int VAR_8 = 0;

 FUNC_9(&VAR_5->lock);

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 VAR_7 = FUNC_3(VAR_5, VAR_0);





 VAR_6 &= VAR_7;
 if (VAR_6) {
  VAR_8 = 1;

  if (FUNC_11(!FUNC_8(VAR_4))) {
   FUNC_6(VAR_4, "late interrupt\n");
   goto irq_ack;
  }

  if (FUNC_5(&VAR_5->napi)) {



   VAR_5->istat = VAR_6;
   FUNC_1(VAR_5);
   FUNC_2(&VAR_5->napi);
  }

irq_ack:
  FUNC_4(VAR_5, VAR_1, VAR_6);
  FUNC_3(VAR_5, VAR_1);
 }
 FUNC_10(&VAR_5->lock);
 return FUNC_0(VAR_8);
}
