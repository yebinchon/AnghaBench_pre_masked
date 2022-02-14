
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct sstfb_par {int* palette; } ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_10__ {TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {TYPE_5__ var; struct sstfb_par* par; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
                           u_int VAR_4, struct fb_info *VAR_5)
{
 struct sstfb_par *VAR_6 = VAR_5->par;
 u32 VAR_7;

 FUNC_0("sstfb_setcolreg\n");
 FUNC_0("%-2d rgbt: %#x, %#x, %#x, %#x\n",
             VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_0 > 15)
  return 0;

 VAR_1 >>= (16 - VAR_5->var.red.length);
 VAR_2 >>= (16 - VAR_5->var.green.length);
 VAR_3 >>= (16 - VAR_5->var.blue.length);
 VAR_4 >>= (16 - VAR_5->var.transp.length);
 VAR_7 = (VAR_1 << VAR_5->var.red.offset)
     | (VAR_2 << VAR_5->var.green.offset)
     | (VAR_3 << VAR_5->var.blue.offset)
     | (VAR_4 << VAR_5->var.transp.offset);

 VAR_6->palette[VAR_0] = VAR_7;

 return 0;
}
