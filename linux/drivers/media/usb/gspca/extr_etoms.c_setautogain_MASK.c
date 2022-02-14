
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int ag_cnt; scalar_t__ autogain; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (VAR_2->autogain)
  VAR_2->ag_cnt = VAR_0;
 else
  VAR_2->ag_cnt = -1;
}
