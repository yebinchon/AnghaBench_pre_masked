
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ has_osd_alpha; } ;
struct s3c_fb_win {int index; TYPE_1__ variant; struct s3c_fb* parent; } ;
struct s3c_fb {int variant; scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s3c_fb_win *VAR_0, u32 VAR_1)
{
 struct s3c_fb *VAR_2 = VAR_0->parent;

 if (VAR_0->variant.has_osd_alpha)
  FUNC_1(VAR_1, VAR_2->regs + FUNC_0(VAR_0->index, VAR_2->variant));
}
