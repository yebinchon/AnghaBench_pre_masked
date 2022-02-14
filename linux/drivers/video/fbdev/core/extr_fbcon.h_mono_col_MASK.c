
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int length; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_8__ {TYPE_3__ blue; TYPE_2__ red; TYPE_1__ green; } ;
struct fb_info {TYPE_4__ var; } ;
typedef int __u32 ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(const struct fb_info *VAR_0)
{
 __u32 VAR_1;
 VAR_1 = FUNC_0(VAR_0->var.green.length, VAR_0->var.red.length);
 VAR_1 = FUNC_0(VAR_0->var.blue.length, VAR_1);
 return (~(0xfff << VAR_1)) & 0xff;
}
