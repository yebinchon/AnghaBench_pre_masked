
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct audit_features {int mask; int features; int lock; } ;
struct TYPE_2__ {int features; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int,int,int,int,int) ;
 struct audit_features* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4)
{
 struct audit_features *VAR_5;
 int VAR_6;

 FUNC_2(VAR_0 + 1 > FUNC_0(VAR_3));
 VAR_5 = FUNC_4(FUNC_5(VAR_4));



 for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
  u32 VAR_7 = FUNC_1(VAR_6);
  u32 VAR_8, VAR_9, VAR_10, VAR_11;


  if (!(VAR_7 & VAR_5->mask))
   continue;

  VAR_8 = VAR_2.features & VAR_7;
  VAR_9 = VAR_5->features & VAR_7;
  VAR_11 = (VAR_5->lock | VAR_2.lock) & VAR_7;
  VAR_10 = VAR_2.lock & VAR_7;


  if (VAR_10 && (VAR_9 != VAR_8)) {
   FUNC_3(VAR_6, VAR_8, VAR_9,
       VAR_10, VAR_11, 0);
   return -VAR_1;
  }
 }

 for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
  u32 VAR_12 = FUNC_1(VAR_6);
  u32 VAR_13, VAR_14, VAR_15, VAR_16;


  if (!(VAR_12 & VAR_5->mask))
   continue;

  VAR_13 = VAR_2.features & VAR_12;
  VAR_14 = VAR_5->features & VAR_12;
  VAR_15 = VAR_2.lock & VAR_12;
  VAR_16 = (VAR_5->lock | VAR_2.lock) & VAR_12;

  if (VAR_14 != VAR_13)
   FUNC_3(VAR_6, VAR_13, VAR_14,
       VAR_15, VAR_16, 1);

  if (VAR_14)
   VAR_2.features |= VAR_12;
  else
   VAR_2.features &= ~VAR_12;
  VAR_2.lock |= VAR_16;
 }

 return 0;
}
