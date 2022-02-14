
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_1__* vflip; TYPE_2__* hflip; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 struct sd *VAR_5 = (struct sd *) VAR_2;

 FUNC_0(VAR_2, VAR_0, "Set hvflip to %d, %d\n",
    VAR_5->hflip->val, VAR_5->vflip->val);

 VAR_4 = (VAR_5->hflip->val << 5) | (VAR_5->vflip->val << 4);

 VAR_3 = FUNC_1(VAR_5, VAR_1, &VAR_4, 1);

 return VAR_3;
}
