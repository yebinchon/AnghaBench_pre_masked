
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct s3c_fb_win {unsigned int index; struct s3c_fb* parent; } ;
struct TYPE_2__ {scalar_t__ wincon; scalar_t__ winmap; } ;
struct s3c_fb {scalar_t__ output_on; int enabled; int dev; TYPE_1__ variant; scalar_t__ regs; } ;
struct fb_info {struct s3c_fb_win* par; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct s3c_fb*,int) ;
 int FUNC_6 (struct s3c_fb_win*,int) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(int VAR_2, struct fb_info *VAR_3)
{
 struct s3c_fb_win *VAR_4 = VAR_3->par;
 struct s3c_fb *VAR_5 = VAR_4->parent;
 unsigned int VAR_6 = VAR_4->index;
 u32 VAR_7;
 u32 VAR_8 = VAR_5->output_on;

 FUNC_1(VAR_5->dev, "blank mode %d\n", VAR_2);

 FUNC_2(VAR_5->dev);

 VAR_7 = FUNC_4(VAR_5->regs + VAR_5->variant.wincon + (VAR_6 * 4));

 switch (VAR_2) {
 case 130:
  VAR_7 &= ~VAR_0;
  VAR_5->enabled &= ~(1 << VAR_6);


 case 131:

  FUNC_6(VAR_4, 1);
  FUNC_7(VAR_1 | FUNC_0(0x0),
         VAR_5->regs + VAR_5->variant.winmap + (VAR_6 * 4));
  FUNC_6(VAR_4, 0);
  break;

 case 129:
  FUNC_6(VAR_4, 1);
  FUNC_7(0x0, VAR_5->regs + VAR_5->variant.winmap + (VAR_6 * 4));
  FUNC_6(VAR_4, 0);
  VAR_7 |= VAR_0;
  VAR_5->enabled |= (1 << VAR_6);
  break;

 case 128:
 case 132:
 default:
  FUNC_3(VAR_5->dev);
  return 1;
 }

 FUNC_6(VAR_4, 1);
 FUNC_7(VAR_7, VAR_5->regs + VAR_5->variant.wincon + (VAR_6 * 4));






 FUNC_5(VAR_5, VAR_5->enabled ? 1 : 0);
 FUNC_6(VAR_4, 0);

 FUNC_3(VAR_5->dev);

 return VAR_8 == VAR_5->output_on;
}
