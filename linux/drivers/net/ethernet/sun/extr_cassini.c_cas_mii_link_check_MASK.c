
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cas {scalar_t__ lstate; int link_cntl; int link_fcntl; int timer_ticks; int dev; scalar_t__ opened; int link_transition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cas*) ;
 int FUNC_1 (struct cas*,int) ;
 int FUNC_2 (struct cas*,int ) ;
 int FUNC_3 (struct cas*,int ,int) ;
 int FUNC_4 (struct cas*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct cas*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_8(struct cas *VAR_12, const u16 VAR_13)
{
 int VAR_14;

 if (VAR_13 & VAR_2) {





  if ((VAR_12->lstate == VAR_10) &&
      (VAR_12->link_cntl & VAR_0)) {
   VAR_12->lstate = VAR_9;
   VAR_12->link_transition = VAR_3;
   FUNC_1(VAR_12, 0);
   VAR_12->link_fcntl = FUNC_2(VAR_12, VAR_6);
   VAR_12->timer_ticks = 5;
   if (VAR_12->opened)
    FUNC_7(VAR_12, VAR_7, VAR_12->dev,
        "Got link after fallback, retrying autoneg once...\n");
   FUNC_3(VAR_12, VAR_6,
          VAR_12->link_fcntl | VAR_0 |
          VAR_1);
   FUNC_1(VAR_12, 1);

  } else if (VAR_12->lstate != VAR_11) {
   VAR_12->lstate = VAR_11;
   VAR_12->link_transition = VAR_5;

   if (VAR_12->opened) {
    FUNC_4(VAR_12);
    FUNC_6(VAR_12->dev);
   }
  }
  return 0;
 }




 VAR_14 = 0;
 if (VAR_12->lstate == VAR_11) {
  VAR_12->lstate = VAR_8;
  VAR_12->link_transition = VAR_4;

  FUNC_5(VAR_12->dev);
  if (VAR_12->opened)
   FUNC_7(VAR_12, VAR_7, VAR_12->dev, "Link down\n");
  VAR_14 = 1;

 } else if (++VAR_12->timer_ticks > 10)
  FUNC_0(VAR_12);

 return VAR_14;
}
