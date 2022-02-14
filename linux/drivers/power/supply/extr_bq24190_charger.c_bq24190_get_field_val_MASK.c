
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq24190_dev_info {int dummy; } ;


 int FUNC_0 (struct bq24190_dev_info*,int,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct bq24190_dev_info *VAR_0,
  u8 VAR_1, u8 VAR_2, u8 VAR_3,
  const int VAR_4[], int VAR_5,
  int *VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = (VAR_7 >= VAR_5) ? (VAR_5 - 1) : VAR_7;
 *VAR_6 = VAR_4[VAR_7];

 return 0;
}
