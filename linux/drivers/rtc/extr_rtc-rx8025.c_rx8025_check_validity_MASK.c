
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx8025_data {int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rx8025_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5)
{
 struct rx8025_data *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6->client, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_7 & VAR_2)
  FUNC_1(VAR_5, "power voltage drop detected\n");

 if (VAR_7 & VAR_1) {
  FUNC_1(VAR_5, "power-on reset detected, date is invalid\n");
  return -VAR_0;
 }

 if (!(VAR_7 & VAR_3)) {
  FUNC_1(VAR_5, "crystal stopped, date is invalid\n");
  return -VAR_0;
 }

 return 0;
}
