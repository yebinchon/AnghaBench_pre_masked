
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {unsigned long base_addr; } ;
struct TYPE_6__ {int lock; struct device* bus_dev; } ;
typedef TYPE_1__ DFX_board_t ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_1__* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_2__* FUNC_11 (struct device*) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_18, void *VAR_19)
{
 struct net_device *VAR_20 = VAR_19;
 DFX_board_t *VAR_21 = FUNC_7(VAR_20);
 struct device *VAR_22 = VAR_21->bus_dev;
 int VAR_23 = FUNC_2(VAR_22);
 int VAR_24 = FUNC_0(VAR_22);
 int VAR_25 = FUNC_1(VAR_22);



 if (VAR_23) {
  u32 VAR_26;

  FUNC_4(VAR_21, VAR_3, &VAR_26);
  if (!(VAR_26 & VAR_6))
   return VAR_1;

  FUNC_9(&VAR_21->lock);


  FUNC_5(VAR_21, VAR_2,
        VAR_4);


  FUNC_3(VAR_20);


  FUNC_5(VAR_21, VAR_3,
        VAR_6);
  FUNC_5(VAR_21, VAR_2,
        (VAR_5 |
         VAR_4));

  FUNC_10(&VAR_21->lock);
 }
 if (VAR_24) {
  unsigned long VAR_27 = FUNC_11(VAR_22)->base_addr;
  u8 VAR_28;

  VAR_28 = FUNC_6(VAR_27 + VAR_9);
  if (!(VAR_28 & VAR_8))
   return VAR_1;

  FUNC_9(&VAR_21->lock);


  VAR_28 &= ~VAR_7;
  FUNC_8(VAR_28, VAR_27 + VAR_9);


  FUNC_3(VAR_20);


  VAR_28 = FUNC_6(VAR_27 + VAR_9);
  VAR_28 |= VAR_7;
  FUNC_8(VAR_28, VAR_27 + VAR_9);

  FUNC_10(&VAR_21->lock);
 }
 if (VAR_25) {
  u32 VAR_29;

  FUNC_4(VAR_21, VAR_10, &VAR_29);
  if (!(VAR_29 & (VAR_13 |
    VAR_17 |
    VAR_14 |
    VAR_16 |
    VAR_12 |
    VAR_11 |
    VAR_15)))
   return VAR_1;

  FUNC_9(&VAR_21->lock);


  FUNC_3(VAR_20);

  FUNC_10(&VAR_21->lock);
 }

 return VAR_0;
}
