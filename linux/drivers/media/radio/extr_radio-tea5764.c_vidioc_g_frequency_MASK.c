
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; int type; } ;
struct tea5764_regs {int tnctrl; } ;
struct tea5764_device {struct tea5764_regs regs; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tea5764_device*) ;
 int FUNC_1 (struct tea5764_device*) ;
 struct tea5764_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    struct v4l2_frequency *VAR_5)
{
 struct tea5764_device *VAR_6 = FUNC_2(VAR_3);
 struct tea5764_regs *VAR_7 = &VAR_6->regs;

 if (VAR_5->tuner != 0)
  return -VAR_0;
 FUNC_1(VAR_6);
 VAR_5->type = VAR_2;
 if (VAR_7->tnctrl & VAR_1)
  VAR_5->frequency = (FUNC_0(VAR_6) * 2) / 125;
 else
  VAR_5->frequency = 0;

 return 0;
}
