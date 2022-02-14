
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freezer {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct freezer*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (struct freezer*) ;

__attribute__((used)) static void FUNC_5(struct freezer *VAR_5, bool VAR_6,
    unsigned int VAR_7)
{

 FUNC_3(&VAR_3);

 if (!(VAR_5->state & VAR_0))
  return;

 if (VAR_6) {
  if (!(VAR_5->state & VAR_1))
   FUNC_1(&VAR_4);
  VAR_5->state |= VAR_7;
  FUNC_2(VAR_5);
 } else {
  bool VAR_8 = VAR_5->state & VAR_1;

  VAR_5->state &= ~VAR_7;

  if (!(VAR_5->state & VAR_1)) {
   if (VAR_8)
    FUNC_0(&VAR_4);
   VAR_5->state &= ~VAR_2;
   FUNC_4(VAR_5);
  }
 }
}
