
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int phydev; int name; int irq; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct b44 {int flags; TYPE_1__ timer; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct b44*,int ) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*) ;
 int FUNC_5 (struct b44*) ;
 int FUNC_6 (struct b44*) ;
 int FUNC_7 (struct b44*,int ) ;
 int FUNC_8 (struct b44*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct b44* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_15 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_9)
{
 struct b44 *VAR_10 = FUNC_11(VAR_9);
 int VAR_11;

 VAR_11 = FUNC_1(VAR_10, VAR_3);
 if (VAR_11)
  goto out;

 FUNC_10(&VAR_10->napi);

 FUNC_8(VAR_10);
 FUNC_7(VAR_10, VAR_2);

 FUNC_2(VAR_10);

 VAR_11 = FUNC_14(VAR_9->irq, VAR_6, VAR_5, VAR_9->name, VAR_9);
 if (FUNC_16(VAR_11 < 0)) {
  FUNC_9(&VAR_10->napi);
  FUNC_3(VAR_10, VAR_0);
  FUNC_6(VAR_10);
  FUNC_5(VAR_10);
  goto out;
 }

 FUNC_15(&VAR_10->timer, VAR_7, 0);
 VAR_10->timer.expires = VAR_8 + VAR_4;
 FUNC_0(&VAR_10->timer);

 FUNC_4(VAR_10);

 if (VAR_10->flags & VAR_1)
  FUNC_13(VAR_9->phydev);

 FUNC_12(VAR_9);
out:
 return VAR_11;
}
