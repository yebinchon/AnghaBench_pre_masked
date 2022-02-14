
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct de_private {scalar_t__ media_type; int media_timer; int dev; scalar_t__ media_lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (struct de_private*) ;
 int FUNC_3 (struct de_private*,scalar_t__) ;
 int FUNC_4 (struct de_private*) ;
 int FUNC_5 (struct de_private*) ;
 int FUNC_6 (struct de_private*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9 (struct de_private *VAR_8, u32 VAR_9)
{
 if (VAR_9 & VAR_6) {

  if ((VAR_8->media_type == VAR_0 ||
       VAR_8->media_type == VAR_1) &&
      (VAR_8->media_lock ||
       !FUNC_3(VAR_8, VAR_2)))
   return;

  if ((VAR_8->media_type == VAR_0 ||
       VAR_8->media_type == VAR_1)) {
   VAR_8->media_type = VAR_2;
   FUNC_6(VAR_8);
   FUNC_4(VAR_8);
   FUNC_5(VAR_8);
  }
  FUNC_2(VAR_8);
  FUNC_7(&VAR_8->media_timer, VAR_7 + VAR_3);
  return;
 }

 FUNC_0(!(VAR_9 & VAR_5));

 if (FUNC_8(VAR_8->dev) && VAR_8->media_type != VAR_0 &&
     VAR_8->media_type != VAR_1) {
  FUNC_1(VAR_8);
  FUNC_7(&VAR_8->media_timer, VAR_7 + VAR_4);
 }
}
