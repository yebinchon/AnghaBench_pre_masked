
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dlfb_data {TYPE_1__* udev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int,int,int,char*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct dlfb_data *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 char *VAR_7;

 VAR_7 = FUNC_2(2, VAR_0);
 if (!VAR_7)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_3(VAR_2->udev,
          FUNC_4(VAR_2->udev, 0), 0x02,
          (0x80 | (0x02 << 5)), VAR_5 << 8, 0xA1,
          VAR_7, 2, VAR_1);
  if (VAR_6 < 2) {
   FUNC_0(&VAR_2->udev->dev,
    "Read EDID byte %d failed: %d\n", VAR_5, VAR_6);
   VAR_5--;
   break;
  }
  VAR_3[VAR_5] = VAR_7[1];
 }

 FUNC_1(VAR_7);

 return VAR_5;
}
