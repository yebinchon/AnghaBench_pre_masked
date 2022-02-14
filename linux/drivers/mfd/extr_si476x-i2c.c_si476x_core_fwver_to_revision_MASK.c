
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_core {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct si476x_core *VAR_3,
      int VAR_4, int VAR_5,
      int VAR_6, int VAR_7)
{
 switch (VAR_4) {
 case 129:
  switch (VAR_5) {
  case 5:
   return VAR_0;
  case 8:
   return VAR_1;
  case 10:
   return VAR_2;
  default:
   goto unknown_revision;
  }
 case 131:
  switch (VAR_5) {
  case 5:
   return VAR_0;
  case 7:
   return VAR_1;
  case 9:
   return VAR_2;
  default:
   goto unknown_revision;
  }
 case 128:
  switch (VAR_5) {
  case 3:
   return VAR_0;
  case 5:
   return VAR_1;
  case 7:
   return VAR_2;
  default:
   goto unknown_revision;
  }
 case 130:
 default:
  FUNC_0();
  return -1;
 }

unknown_revision:
 FUNC_1(&VAR_3->client->dev,
  "Unsupported version of the firmware: %d.%d.%d, "
  "reverting to A10 compatible functions\n",
  VAR_5, VAR_6, VAR_7);

 return VAR_0;
}
