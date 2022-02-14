
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int ag_cnt; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 VAR_3->ag_cnt = VAR_2 ? VAR_0 : -1;
}
