
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bnxt {int flags; int state; } ;
typedef int netdev_features_t ;


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
 int FUNC_0 (struct bnxt*,int,int) ;
 int FUNC_1 (struct bnxt*,int,int) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*,int) ;
 struct bnxt* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_13, netdev_features_t VAR_14)
{
 struct bnxt *VAR_15 = FUNC_4(VAR_13);
 u32 VAR_16 = VAR_15->flags;
 u32 VAR_17;
 int VAR_18 = 0;
 bool VAR_19 = 0;
 bool VAR_20 = 0;

 VAR_16 &= ~VAR_0;
 if (VAR_14 & VAR_9)
  VAR_16 |= VAR_2;
 else if (VAR_14 & VAR_11)
  VAR_16 |= VAR_3;

 if (VAR_15->flags & VAR_4)
  VAR_16 &= ~VAR_7;

 if (VAR_14 & VAR_10)
  VAR_16 |= VAR_6;

 if (VAR_14 & VAR_12)
  VAR_16 |= VAR_5;

 VAR_17 = VAR_16 ^ VAR_15->flags;
 if (VAR_17 & VAR_7) {
  VAR_20 = 1;
  if ((VAR_15->flags & VAR_7) == 0 ||
      (VAR_16 & VAR_7) == 0 ||
      (VAR_15->flags & VAR_1))
   VAR_19 = 1;
 }

 if (VAR_17 & ~VAR_7)
  VAR_19 = 1;

 if (VAR_16 != VAR_15->flags) {
  u32 VAR_21 = VAR_15->flags;

  if (!FUNC_5(VAR_8, &VAR_15->state)) {
   VAR_15->flags = VAR_16;
   if (VAR_20)
    FUNC_2(VAR_15);
   return VAR_18;
  }

  if (VAR_19) {
   FUNC_0(VAR_15, 0, 0);
   VAR_15->flags = VAR_16;
   if (VAR_20)
    FUNC_2(VAR_15);

   return FUNC_1(VAR_15, 0, 0);
  }
  if (VAR_20) {
   VAR_15->flags = VAR_16;
   VAR_18 = FUNC_3(VAR_15,
       (VAR_16 & VAR_7) ?
       1 : 0);
   if (VAR_18)
    VAR_15->flags = VAR_21;
  }
 }
 return VAR_18;
}
