
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_2__* info; TYPE_1__ fbtftops; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,struct fbtft_par*,char*,unsigned int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (struct fbtft_par*) ;
 int FUNC_4 (struct fbtft_par*) ;
 int FUNC_5 (struct fbtft_par*,int,int) ;

__attribute__((used)) static int FUNC_6(struct fbtft_par *VAR_1)
{
 unsigned int VAR_2;

 VAR_1->fbtftops.reset(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 FUNC_1(VAR_0, VAR_1, "Device code: 0x%04X\n",
        VAR_2);
 if ((VAR_2 != 0x0000) && (VAR_2 != 0x9320))
  FUNC_0(VAR_1->info->device,
    "Unrecognized Device code: 0x%04X (expected 0x9320)\n",
   VAR_2);





 FUNC_5(VAR_1, 0x00E5, 0x8000);


 FUNC_5(VAR_1, 0x0000, 0x0001);


 FUNC_5(VAR_1, 0x0001, 0x0100);


 FUNC_5(VAR_1, 0x0002, 0x0700);


 FUNC_5(VAR_1, 0x0004, 0x0000);


 FUNC_5(VAR_1, 0x0008, 0x0202);


 FUNC_5(VAR_1, 0x0009, 0x0000);


 FUNC_5(VAR_1, 0x000A, 0x0000);


 FUNC_5(VAR_1, 0x000C, 0x0000);


 FUNC_5(VAR_1, 0x000D, 0x0000);


 FUNC_5(VAR_1, 0x000F, 0x0000);



 FUNC_5(VAR_1, 0x0010, 0x0000);


 FUNC_5(VAR_1, 0x0011, 0x0007);


 FUNC_5(VAR_1, 0x0012, 0x0000);


 FUNC_5(VAR_1, 0x0013, 0x0000);


 FUNC_2(200);


 FUNC_5(VAR_1, 0x0010, 0x17B0);


 FUNC_5(VAR_1, 0x0011, 0x0031);
 FUNC_2(50);


 FUNC_5(VAR_1, 0x0012, 0x0138);
 FUNC_2(50);


 FUNC_5(VAR_1, 0x0013, 0x1800);


 FUNC_5(VAR_1, 0x0029, 0x0008);
 FUNC_2(50);


 FUNC_5(VAR_1, 0x0020, 0x0000);


 FUNC_5(VAR_1, 0x0021, 0x0000);



 FUNC_5(VAR_1, 0x0050, 0x0000);


 FUNC_5(VAR_1, 0x0051, 0x00EF);


 FUNC_5(VAR_1, 0x0052, 0x0000);


 FUNC_5(VAR_1, 0x0053, 0x013F);


 FUNC_5(VAR_1, 0x0060, 0x2700);


 FUNC_5(VAR_1, 0x0061, 0x0001);


 FUNC_5(VAR_1, 0x006A, 0x0000);


 FUNC_5(VAR_1, 0x0080, 0x0000);
 FUNC_5(VAR_1, 0x0081, 0x0000);
 FUNC_5(VAR_1, 0x0082, 0x0000);
 FUNC_5(VAR_1, 0x0083, 0x0000);
 FUNC_5(VAR_1, 0x0084, 0x0000);
 FUNC_5(VAR_1, 0x0085, 0x0000);


 FUNC_5(VAR_1, 0x0090, 0x0010);
 FUNC_5(VAR_1, 0x0092, 0x0000);
 FUNC_5(VAR_1, 0x0093, 0x0003);
 FUNC_5(VAR_1, 0x0095, 0x0110);
 FUNC_5(VAR_1, 0x0097, 0x0000);
 FUNC_5(VAR_1, 0x0098, 0x0000);
 FUNC_5(VAR_1, 0x0007, 0x0173);

 return 0;
}
