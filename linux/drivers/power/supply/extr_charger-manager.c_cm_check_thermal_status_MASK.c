
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charger_manager {scalar_t__ emergency_stop; int dev; struct charger_desc* desc; } ;
struct charger_desc {int temp_max; int temp_min; scalar_t__ temp_diff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct charger_manager*,int*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct charger_manager *VAR_2)
{
 struct charger_desc *VAR_3 = VAR_2->desc;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_7) {





  FUNC_1(VAR_2->dev, "Failed to get battery temperature\n");
  return 0;
 }

 VAR_5 = VAR_3->temp_max;
 VAR_6 = VAR_3->temp_min;

 if (VAR_2->emergency_stop) {
  VAR_5 -= VAR_3->temp_diff;
  VAR_6 += VAR_3->temp_diff;
 }

 if (VAR_4 > VAR_5)
  VAR_7 = VAR_1;
 else if (VAR_4 < VAR_6)
  VAR_7 = VAR_0;

 return VAR_7;
}
