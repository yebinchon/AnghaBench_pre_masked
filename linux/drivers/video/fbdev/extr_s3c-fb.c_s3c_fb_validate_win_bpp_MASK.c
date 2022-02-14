
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid_bpp; } ;
struct s3c_fb_win {TYPE_1__ variant; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct s3c_fb_win *VAR_0, unsigned int VAR_1)
{
 return VAR_0->variant.valid_bpp & FUNC_0(VAR_1);
}
