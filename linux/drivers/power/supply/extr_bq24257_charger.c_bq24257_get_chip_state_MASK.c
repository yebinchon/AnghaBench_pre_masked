
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq24257_state {int status; int fault; int power_good; } ;
struct bq24257_device {scalar_t__ pg; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bq24257_device*,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct bq24257_device *VAR_2,
      struct bq24257_state *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->status = VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->fault = VAR_4;

 if (VAR_2->pg)
  VAR_3->power_good = !FUNC_1(VAR_2->pg);
 else
  switch (VAR_3->fault) {
  case 129:
  case 128:
  case 130:
   VAR_3->power_good = 0;
   break;
  default:
   VAR_3->power_good = 1;
  }

 return 0;
}
