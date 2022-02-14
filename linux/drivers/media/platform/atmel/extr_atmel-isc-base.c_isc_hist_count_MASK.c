
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct isc_ctrls {int* hist_count; size_t hist_id; int* hist_entry; } ;
struct isc_device {struct isc_ctrls ctrls; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regmap*,int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct isc_device *VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 struct regmap *VAR_5 = VAR_2->regmap;
 struct isc_ctrls *VAR_6 = &VAR_2->ctrls;
 u32 *VAR_7 = &VAR_6->hist_count[VAR_6->hist_id];
 u32 *VAR_8 = &VAR_6->hist_entry[0];
 u32 VAR_9;

 *VAR_3 = 0;
 *VAR_4 = VAR_0;

 FUNC_0(VAR_5, VAR_1, VAR_8, VAR_0);

 *VAR_7 = 0;




 for (VAR_9 = 1; VAR_9 < VAR_0; VAR_9++) {
  if (*VAR_8 && !*VAR_3)
   *VAR_3 = VAR_9;
  if (*VAR_8)
   *VAR_4 = VAR_9;
  *VAR_7 += VAR_9 * (*VAR_8++);
 }

 if (!*VAR_3)
  *VAR_3 = 1;
}
