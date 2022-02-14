
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct validx {int idx; int val; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int,int,int,int ,int *) ;
 int FUNC_1 (int) ;

int FUNC_2(struct gspca_dev *VAR_0, struct validx *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3].idx != 0xffff)
   FUNC_0(VAR_0, 0x40, 1, VAR_1[VAR_3].val,
     VAR_1[VAR_3].idx, 0, ((void*)0));
  else if (VAR_1[VAR_3].val == 0xffff)
   break;
  else
   FUNC_1(VAR_1[VAR_3].val);
 }
 return VAR_3;
}
