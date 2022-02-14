
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int maven; } ;
struct matrox_fb_info {TYPE_2__ hw; TYPE_1__* outputs; } ;
struct TYPE_3__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct matrox_fb_info*,int *) ;

__attribute__((used)) static int FUNC_1(void* VAR_1) {
 struct matrox_fb_info *VAR_2 = VAR_1;

 if (VAR_2->outputs[1].mode != VAR_0) {
  FUNC_0(VAR_2, &VAR_2->hw.maven);
 }
 return 0;
}
