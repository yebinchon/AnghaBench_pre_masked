
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_2__* vflip; TYPE_1__* hflip; } ;
struct TYPE_6__ {int width; } ;
struct gspca_dev {TYPE_3__ pixfmt; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_8)
{
 int VAR_9;
 u8 VAR_10[2] = {0x00, 0x00};
 struct sd *VAR_11 = (struct sd *) VAR_8;
 int VAR_12;
 int VAR_13;

 FUNC_0(VAR_8, VAR_0, "Set hvflip to %d %d\n",
    VAR_11->hflip->val, VAR_11->vflip->val);


 VAR_12 = !VAR_11->hflip->val;
 VAR_13 = !VAR_11->vflip->val;


 VAR_9 = FUNC_1(VAR_11, VAR_1, VAR_10, 2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10[0] = VAR_4;
 if (VAR_8->pixfmt.width == 640) {
  VAR_10[1] = VAR_5 |
     VAR_2 |
     (VAR_12 << 1) | VAR_13;
 } else {
  VAR_10[1] = VAR_6 |
     VAR_3 |
     (VAR_12 << 1) | VAR_13;
 }
 VAR_9 = FUNC_1(VAR_11, VAR_7,
     VAR_10, 2);
 return VAR_9;
}
