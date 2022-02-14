
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_2__* vflip; TYPE_1__* hflip; } ;
struct gspca_dev {scalar_t__ streaming; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,int) ;
 int FUNC_2 (struct sd*,int ,int*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct sd*) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 struct sd *VAR_6 = (struct sd *) VAR_3;
 int VAR_7 = VAR_6->hflip->val;
 int VAR_8 = VAR_6->vflip->val;

 FUNC_1(VAR_3, VAR_0, "Set hvflip to %d %d\n", VAR_7, VAR_8);

 if (FUNC_0(VAR_2))
  VAR_8 = !VAR_8;

 VAR_5 = (VAR_7 << 5) | (VAR_8 << 4);
 VAR_4 = FUNC_2(VAR_6, VAR_1, &VAR_5, 1);
 if (VAR_4 < 0)
  return VAR_4;


 if (VAR_3->streaming)
  VAR_4 = FUNC_3(VAR_6);

 return VAR_4;
}
