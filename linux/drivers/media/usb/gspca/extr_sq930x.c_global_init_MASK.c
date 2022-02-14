
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int sensor; int gspca_dev; int type; } ;
struct TYPE_2__ {int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sd*,int ) ;
 int FUNC_2 (struct sd*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int *,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct sd *VAR_7, int VAR_8)
{
 switch (VAR_7->sensor) {
 case 130:
  if (VAR_8)
   FUNC_5(&VAR_7->gspca_dev,
     VAR_3,
     8, 8);
  FUNC_1(VAR_7, VAR_6[VAR_7->sensor].gpio);
  break;
 case 129:
  if (VAR_7->type != VAR_0)
   FUNC_2(VAR_7, VAR_1, 0x00ff);
  else
   FUNC_2(VAR_7, 0, 0x00ff);
  FUNC_3(50);
  if (VAR_8)
   FUNC_5(&VAR_7->gspca_dev,
     VAR_4,
     8, 8);
  FUNC_1(VAR_7, VAR_6[VAR_7->sensor].gpio);
  break;
 case 128:
  if (VAR_8)
   FUNC_5(&VAR_7->gspca_dev,
     VAR_5,
     FUNC_0(VAR_5),
     8);
  FUNC_1(VAR_7, VAR_6[VAR_7->sensor].gpio);
  FUNC_2(VAR_7, VAR_2, VAR_2);
  break;
 default:

  if (VAR_8)
   FUNC_4(&VAR_7->gspca_dev);
  else
   FUNC_1(VAR_7, VAR_6[VAR_7->sensor].gpio);
  break;
 }
}
