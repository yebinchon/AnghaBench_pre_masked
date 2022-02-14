
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cphy*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct cphy *VAR_9)
{
 int VAR_10 = 0;
 u32 VAR_11;




 while (1) {
  u32 VAR_12;

  (void) FUNC_0(VAR_9,
    VAR_1,
    &VAR_12);
  VAR_12 &= VAR_0;
  if (!VAR_12)
   break;

  if (VAR_12 & VAR_3) {
   (void) FUNC_0(VAR_9,
    VAR_4, &VAR_11);

   if (VAR_11 & VAR_3)
    VAR_9->state |= VAR_7;
   else {
    VAR_9->state &= ~VAR_7;
    if (VAR_9->state & VAR_5)
     VAR_9->state &= ~VAR_6;
    VAR_10 |= VAR_8;
   }
  }

  if (VAR_12 & VAR_2)
   VAR_9->state |= VAR_6;

  if ((VAR_9->state & (VAR_7 | VAR_6)) ==
   (VAR_7 | VAR_6))
    VAR_10 |= VAR_8;
 }
 return VAR_10;
}
