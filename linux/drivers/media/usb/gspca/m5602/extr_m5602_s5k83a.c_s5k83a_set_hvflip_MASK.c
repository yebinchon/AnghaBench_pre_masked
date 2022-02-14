
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sd {TYPE_2__* vflip; TYPE_1__* hflip; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int FUNC_0 (struct sd*,scalar_t__*) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0)
{
 int VAR_1;
 u8 VAR_2;
 struct sd *VAR_3 = (struct sd *) VAR_0;
 int VAR_4 = VAR_3->hflip->val;
 int VAR_5 = VAR_3->vflip->val;

 VAR_1 = FUNC_0(VAR_3, &VAR_2);
 if (VAR_1 < 0)
  return VAR_1;
 if (VAR_2) {
  VAR_4 = !VAR_4;
  VAR_5 = !VAR_5;
 }

 VAR_1 = FUNC_1(VAR_0, VAR_5, VAR_4);
 return VAR_1;
}
