
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int domain; } ;
struct TYPE_4__ {int ngpio; TYPE_1__ irq; int parent; } ;
struct mcp23s08 {int cached_gpio; int irq_rise; int irq_fall; int lock; TYPE_2__ chip; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct mcp23s08*,int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct mcp23s08 *VAR_8 = VAR_7;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17;
 bool VAR_18, VAR_19, VAR_20,
  VAR_21, VAR_22;

 FUNC_5(&VAR_8->lock);
 if (FUNC_4(VAR_8, VAR_5, &VAR_11))
  goto unlock;

 if (FUNC_4(VAR_8, VAR_3, &VAR_9))
  goto unlock;

 if (FUNC_4(VAR_8, VAR_4, &VAR_10))
  goto unlock;

 if (FUNC_4(VAR_8, VAR_1, &VAR_16))
  goto unlock;


 if (FUNC_4(VAR_8, VAR_2, &VAR_13))
  goto unlock;

 VAR_14 = VAR_8->cached_gpio;
 VAR_8->cached_gpio = VAR_13;
 FUNC_6(&VAR_8->lock);

 if (VAR_11 == 0) {

  return VAR_0;
 }

 FUNC_1(VAR_8->chip.parent,
  "intcap 0x%04X intf 0x%04X gpio_orig 0x%04X gpio 0x%04X\n",
  VAR_9, VAR_11, VAR_14, VAR_13);

 for (VAR_12 = 0; VAR_12 < VAR_8->chip.ngpio; VAR_12++) {
  VAR_18 = VAR_11 & FUNC_0(VAR_12);
  if (VAR_12 < 8 && VAR_18)
   VAR_15 = 0x00FF;
  else if (VAR_12 >= 8 && VAR_18)
   VAR_15 = 0xFF00;
  else
   VAR_15 = 0x00;

  VAR_19 = (VAR_15 &
   (VAR_9 & FUNC_0(VAR_12))) !=
   (VAR_15 & (FUNC_0(VAR_12) & VAR_14));
  VAR_22 = FUNC_0(VAR_12) & VAR_13;
  VAR_20 = (FUNC_0(VAR_12) & VAR_14) !=
   (FUNC_0(VAR_12) & VAR_13);
  VAR_21 = (FUNC_0(VAR_12) & VAR_10) &&
   ((FUNC_0(VAR_12) & VAR_13) !=
   (FUNC_0(VAR_12) & VAR_16));

  if (((VAR_20 || VAR_19) &&
   (FUNC_0(VAR_12) & VAR_8->irq_rise) && VAR_22) ||
      ((VAR_20 || VAR_19) &&
   (FUNC_0(VAR_12) & VAR_8->irq_fall) && !VAR_22) ||
      VAR_21) {
   VAR_17 = FUNC_3(VAR_8->chip.irq.domain, VAR_12);
   FUNC_2(VAR_17);
  }
 }

 return VAR_0;

unlock:
 FUNC_6(&VAR_8->lock);
 return VAR_0;
}
