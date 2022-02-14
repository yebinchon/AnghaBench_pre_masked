
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b44 {int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*,int ,int*) ;
 int FUNC_2 (struct b44*,int,int) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct b44 *VAR_15)
{
 u32 VAR_16, VAR_17;

 if (VAR_15->flags & VAR_1) {
  VAR_15->flags |= VAR_0;
  if (!FUNC_7(VAR_15->dev)) {
   u32 VAR_18 = FUNC_3(VAR_15, VAR_5);
   if (VAR_15->flags & VAR_3)
    VAR_18 |= VAR_14;
   else
    VAR_18 &= ~VAR_14;
   FUNC_4(VAR_15, VAR_5, VAR_18);
   FUNC_8(VAR_15->dev);
   FUNC_0(VAR_15);
  }
  return;
 }

 if (!FUNC_1(VAR_15, VAR_12, &VAR_16) &&
     !FUNC_1(VAR_15, VAR_4, &VAR_17) &&
     (VAR_16 != 0xffff)) {
  if (VAR_17 & VAR_11)
   VAR_15->flags |= VAR_0;
  else
   VAR_15->flags &= ~VAR_0;
  if (VAR_17 & VAR_10)
   VAR_15->flags |= VAR_3;
  else
   VAR_15->flags &= ~VAR_3;

  if (!FUNC_7(VAR_15->dev) &&
      (VAR_16 & VAR_7)) {
   u32 VAR_19 = FUNC_3(VAR_15, VAR_5);
   u32 VAR_20, VAR_21;

   if (VAR_15->flags & VAR_3)
    VAR_19 |= VAR_14;
   else
    VAR_19 &= ~VAR_14;
   FUNC_4(VAR_15, VAR_5, VAR_19);

   if (!(VAR_15->flags & VAR_2) &&
       !FUNC_1(VAR_15, VAR_9, &VAR_20) &&
       !FUNC_1(VAR_15, VAR_13, &VAR_21))
    FUNC_2(VAR_15, VAR_20, VAR_21);


   FUNC_8(VAR_15->dev);
   FUNC_0(VAR_15);
  } else if (FUNC_7(VAR_15->dev) && !(VAR_16 & VAR_7)) {

   FUNC_6(VAR_15->dev);
   FUNC_0(VAR_15);
  }

  if (VAR_16 & VAR_8)
   FUNC_5(VAR_15->dev, "Remote fault detected in PHY\n");
  if (VAR_16 & VAR_6)
   FUNC_5(VAR_15->dev, "Jabber detected in PHY\n");
 }
}
