
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int palette_load_complete; int last_frame_complete; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_12, void *VAR_13)
{
 u32 VAR_14;

 VAR_14 = FUNC_2(VAR_3);

 if (VAR_14 & (VAR_6 | VAR_9))
  FUNC_4(VAR_14);
 else {
  if (VAR_14 & VAR_5) {
   u32 VAR_15;






   VAR_15 = FUNC_2(VAR_1);
   VAR_15 &= ~VAR_2;
   FUNC_3(VAR_15, VAR_1);
   FUNC_0(&VAR_11.last_frame_complete);
  }
  if (VAR_14 & VAR_8) {
   FUNC_1();
   FUNC_0(&VAR_11.palette_load_complete);
  }
 }
 VAR_14 &= ~(VAR_10 |
      VAR_8 |
      VAR_4 |
      VAR_7);
 FUNC_3(VAR_14, VAR_3);
 return VAR_0;
}
