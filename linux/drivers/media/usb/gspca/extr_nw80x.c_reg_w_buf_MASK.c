
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,scalar_t__ const*,int) ;
 int FUNC_1 (struct gspca_dev*,int,scalar_t__ const*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1,
   const u8 *VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 for (;;) {
  VAR_3 = *VAR_2++ << 8;
  VAR_3 += *VAR_2++;
  VAR_4 = *VAR_2++;
  if (VAR_4 == 0)
   break;
  if (VAR_2[-3] != VAR_0)
   FUNC_1(VAR_1, VAR_3, VAR_2, VAR_4);
  else
   FUNC_0(VAR_1, VAR_3, VAR_2, VAR_4);
  VAR_2 += VAR_4;
 }
}
