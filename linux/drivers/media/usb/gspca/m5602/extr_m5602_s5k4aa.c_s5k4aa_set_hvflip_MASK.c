
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_2__* vflip; TYPE_1__* hflip; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,int) ;
 int FUNC_2 (struct sd*,int ,int*,int) ;
 int FUNC_3 (struct sd*,int ,int*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;
 u8 VAR_9 = VAR_3;
 int VAR_10;
 int VAR_11 = VAR_8->hflip->val;
 int VAR_12 = VAR_8->vflip->val;

 FUNC_1(VAR_7, VAR_0, "Set hvflip %d %d\n", VAR_11, VAR_12);
 VAR_10 = FUNC_3(VAR_8, VAR_2, &VAR_9, 1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_4, &VAR_9, 1);
 if (VAR_10 < 0)
  return VAR_10;

 if (FUNC_0(VAR_6)) {
  VAR_11 = !VAR_11;
  VAR_12 = !VAR_12;
 }

 VAR_9 = (VAR_9 & 0x7f) | (VAR_12 << 7) | (VAR_11 << 6);
 VAR_10 = FUNC_3(VAR_8, VAR_4, &VAR_9, 1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_1, &VAR_9, 1);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_11)
  VAR_9 &= 0xfe;
 else
  VAR_9 |= 0x01;
 VAR_10 = FUNC_3(VAR_8, VAR_1, &VAR_9, 1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_5, &VAR_9, 1);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_12)
  VAR_9 &= 0xfe;
 else
  VAR_9 |= 0x01;
 VAR_10 = FUNC_3(VAR_8, VAR_5, &VAR_9, 1);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
