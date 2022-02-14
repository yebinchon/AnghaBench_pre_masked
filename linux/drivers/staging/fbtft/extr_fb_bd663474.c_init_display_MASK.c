
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* reset ) (struct fbtft_par*) ;} ;
struct TYPE_3__ {scalar_t__ cs; } ;
struct fbtft_par {TYPE_2__ fbtftops; TYPE_1__ gpio; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fbtft_par*) ;
 int FUNC_3 (struct fbtft_par*,int,int) ;

__attribute__((used)) static int FUNC_4(struct fbtft_par *VAR_0)
{
 if (VAR_0->gpio.cs)
  FUNC_0(VAR_0->gpio.cs, 0);

 VAR_0->fbtftops.reset(VAR_0);




 FUNC_3(VAR_0, 0x000, 0x0001);
 FUNC_1(10);


 FUNC_3(VAR_0, 0x100, 0x0000);
 FUNC_3(VAR_0, 0x101, 0x0000);
 FUNC_3(VAR_0, 0x102, 0x3110);
 FUNC_3(VAR_0, 0x103, 0xe200);
 FUNC_3(VAR_0, 0x110, 0x009d);
 FUNC_3(VAR_0, 0x111, 0x0022);
 FUNC_3(VAR_0, 0x100, 0x0120);
 FUNC_1(20);

 FUNC_3(VAR_0, 0x100, 0x3120);
 FUNC_1(80);

 FUNC_3(VAR_0, 0x001, 0x0100);
 FUNC_3(VAR_0, 0x002, 0x0000);
 FUNC_3(VAR_0, 0x003, 0x1230);
 FUNC_3(VAR_0, 0x006, 0x0000);
 FUNC_3(VAR_0, 0x007, 0x0101);
 FUNC_3(VAR_0, 0x008, 0x0808);
 FUNC_3(VAR_0, 0x009, 0x0000);
 FUNC_3(VAR_0, 0x00b, 0x0000);
 FUNC_3(VAR_0, 0x00c, 0x0000);
 FUNC_3(VAR_0, 0x00d, 0x0018);

 FUNC_3(VAR_0, 0x012, 0x0000);
 FUNC_3(VAR_0, 0x013, 0x0000);
 FUNC_3(VAR_0, 0x018, 0x0000);
 FUNC_3(VAR_0, 0x019, 0x0000);

 FUNC_3(VAR_0, 0x203, 0x0000);
 FUNC_3(VAR_0, 0x204, 0x0000);

 FUNC_3(VAR_0, 0x210, 0x0000);
 FUNC_3(VAR_0, 0x211, 0x00ef);
 FUNC_3(VAR_0, 0x212, 0x0000);
 FUNC_3(VAR_0, 0x213, 0x013f);
 FUNC_3(VAR_0, 0x214, 0x0000);
 FUNC_3(VAR_0, 0x215, 0x0000);
 FUNC_3(VAR_0, 0x216, 0x0000);
 FUNC_3(VAR_0, 0x217, 0x0000);


 FUNC_3(VAR_0, 0x300, 0x5343);
 FUNC_3(VAR_0, 0x301, 0x1021);
 FUNC_3(VAR_0, 0x302, 0x0003);
 FUNC_3(VAR_0, 0x303, 0x0011);
 FUNC_3(VAR_0, 0x304, 0x050a);
 FUNC_3(VAR_0, 0x305, 0x4342);
 FUNC_3(VAR_0, 0x306, 0x1100);
 FUNC_3(VAR_0, 0x307, 0x0003);
 FUNC_3(VAR_0, 0x308, 0x1201);
 FUNC_3(VAR_0, 0x309, 0x050a);


 FUNC_3(VAR_0, 0x400, 0x4027);
 FUNC_3(VAR_0, 0x401, 0x0000);
 FUNC_3(VAR_0, 0x402, 0x0000);
 FUNC_3(VAR_0, 0x403, 0x013f);
 FUNC_3(VAR_0, 0x404, 0x0000);

 FUNC_3(VAR_0, 0x200, 0x0000);
 FUNC_3(VAR_0, 0x201, 0x0000);
 FUNC_3(VAR_0, 0x100, 0x7120);
 FUNC_3(VAR_0, 0x007, 0x0103);
 FUNC_1(10);
 FUNC_3(VAR_0, 0x007, 0x0113);

 return 0;
}
