
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int flip_debounce; int flip_status; int vflip; int hflip; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int ) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (VAR_1->flip_debounce > 100) {
  VAR_1->flip_status = !VAR_1->flip_status;
  FUNC_0(VAR_0, FUNC_2(VAR_1->hflip));
  FUNC_1(VAR_0, FUNC_2(VAR_1->vflip));
 }
}
