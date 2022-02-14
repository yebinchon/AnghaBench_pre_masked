
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dw_mci_slot {unsigned int clock; unsigned int __clk_old; int id; int ctype; TYPE_1__* mmc; int flags; struct dw_mci* host; } ;
struct dw_mci {scalar_t__ state; unsigned int current_speed; unsigned int bus_hz; } ;
struct TYPE_2__ {int actual_clock; int caps; unsigned int f_min; int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *,char*,int,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (struct dw_mci_slot*,int,int ) ;
 int FUNC_3 (struct dw_mci*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct dw_mci_slot *VAR_13, bool VAR_14)
{
 struct dw_mci *VAR_15 = VAR_13->host;
 unsigned int VAR_16 = VAR_13->clock;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19 = VAR_10 | VAR_9;


 if (VAR_15->state == VAR_12)
  VAR_19 |= VAR_11;

 VAR_13->mmc->actual_clock = 0;

 if (!VAR_16) {
  FUNC_3(VAR_15, VAR_1, 0);
  FUNC_2(VAR_13, VAR_19, 0);
 } else if (VAR_16 != VAR_15->current_speed || VAR_14) {
  VAR_17 = VAR_15->bus_hz / VAR_16;
  if (VAR_15->bus_hz % VAR_16 && VAR_15->bus_hz > VAR_16)




   VAR_17 += 1;

  VAR_17 = (VAR_15->bus_hz != VAR_16) ? FUNC_0(VAR_17, 2) : 0;

  if ((VAR_16 != VAR_13->__clk_old &&
   !FUNC_5(VAR_4, &VAR_13->flags)) ||
   VAR_14) {

   if (!VAR_14)
    FUNC_1(&VAR_13->mmc->class_dev,
      "Bus speed (slot %d) = %dHz (slot req %dHz, actual %dHZ div = %d)\n",
      VAR_13->id, VAR_15->bus_hz, VAR_16,
      VAR_17 ? ((VAR_15->bus_hz / VAR_17) >> 1) :
      VAR_15->bus_hz, VAR_17);





   if (VAR_13->mmc->caps & VAR_6 &&
     VAR_13->mmc->f_min == VAR_16)
    FUNC_4(VAR_4, &VAR_13->flags);
  }


  FUNC_3(VAR_15, VAR_1, 0);
  FUNC_3(VAR_15, VAR_2, 0);


  FUNC_2(VAR_13, VAR_19, 0);


  FUNC_3(VAR_15, VAR_0, VAR_17);


  FUNC_2(VAR_13, VAR_19, 0);


  VAR_18 = VAR_7 << VAR_13->id;
  if (!FUNC_5(VAR_5, &VAR_13->flags))
   VAR_18 |= VAR_8 << VAR_13->id;
  FUNC_3(VAR_15, VAR_1, VAR_18);


  FUNC_2(VAR_13, VAR_19, 0);


  VAR_13->__clk_old = VAR_16;
  VAR_13->mmc->actual_clock = VAR_17 ? ((VAR_15->bus_hz / VAR_17) >> 1) :
       VAR_15->bus_hz;
 }

 VAR_15->current_speed = VAR_16;


 FUNC_3(VAR_15, VAR_3, (VAR_13->ctype << VAR_13->id));
}
