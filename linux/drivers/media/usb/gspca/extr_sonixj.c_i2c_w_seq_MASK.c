
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct gspca_dev {int dummy; } ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (struct gspca_dev*,scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1,
   const u8 (*VAR_2)[8])
{
 while ((*VAR_2)[0] != 0) {
  if ((*VAR_2)[0] != VAR_0)
   FUNC_0(VAR_1, *VAR_2);
  else
   FUNC_1((*VAR_2)[1]);
  VAR_2++;
 }
}
