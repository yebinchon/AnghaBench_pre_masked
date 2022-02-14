
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int paddr; scalar_t__ vaddr; } ;
struct TYPE_6__ {int paddr; } ;
struct TYPE_5__ {int paddr; } ;
struct coda_dev {int clk_per; int clk_ahb; TYPE_4__* devtype; TYPE_3__ codebuf; TYPE_2__ workbuf; TYPE_1__ tempbuf; int rstc; } ;
struct TYPE_8__ {int product; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct coda_dev*,scalar_t__) ;
 int FUNC_5 (struct coda_dev*,int,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct coda_dev *VAR_21)
{
 u32 VAR_22;
 u16 *VAR_23;
 int VAR_24, VAR_25;

 VAR_25 = FUNC_3(VAR_21->clk_per);
 if (VAR_25)
  goto err_clk_per;

 VAR_25 = FUNC_3(VAR_21->clk_ahb);
 if (VAR_25)
  goto err_clk_ahb;

 FUNC_6(VAR_21->rstc);







 VAR_23 = (u16 *)VAR_21->codebuf.vaddr;
 if (VAR_21->devtype->product == 128) {
  for (VAR_24 = 0; VAR_24 < (VAR_8 / 2); VAR_24++) {
   VAR_22 = FUNC_0(VAR_24) |
    FUNC_1(VAR_23[VAR_24 ^ 1]);
   FUNC_5(VAR_21, VAR_22, VAR_11);
  }
 } else {
  for (VAR_24 = 0; VAR_24 < (VAR_8 / 2); VAR_24++) {
   VAR_22 = FUNC_0(VAR_24) |
    FUNC_1(VAR_23[FUNC_7(VAR_24, 4) +
       3 - (VAR_24 % 4)]);
   FUNC_5(VAR_21, VAR_22, VAR_11);
  }
 }


 for (VAR_24 = 0; VAR_24 < 64; VAR_24++)
  FUNC_5(VAR_21, 0, VAR_10 + VAR_24 * 4);


 if (VAR_21->devtype->product == VAR_5 ||
     VAR_21->devtype->product == VAR_4 ||
     VAR_21->devtype->product == VAR_6) {
  FUNC_5(VAR_21, VAR_21->tempbuf.paddr,
    VAR_17);
  FUNC_5(VAR_21, 0, VAR_9);
 } else {
  FUNC_5(VAR_21, VAR_21->workbuf.paddr,
         VAR_18);
 }
 FUNC_5(VAR_21, VAR_21->codebuf.paddr,
        VAR_10);
 FUNC_5(VAR_21, 0, VAR_13);


 switch (VAR_21->devtype->product) {
 case 128:
  FUNC_5(VAR_21, VAR_3,
      VAR_16);
  break;
 default:
  FUNC_5(VAR_21, VAR_1,
      VAR_16);
 }
 if (VAR_21->devtype->product == VAR_5)
  FUNC_5(VAR_21, VAR_2,
    VAR_14);
 else
  FUNC_5(VAR_21, 0, VAR_14);

 if (VAR_21->devtype->product != 128)
  FUNC_5(VAR_21, 0, VAR_0);

 FUNC_5(VAR_21, VAR_7,
        VAR_15);


 VAR_22 = FUNC_4(VAR_21, VAR_12);
 VAR_22 |= VAR_19;
 FUNC_5(VAR_21, VAR_22, VAR_12);
 FUNC_8(10);
 VAR_22 &= ~VAR_19;
 FUNC_5(VAR_21, VAR_22, VAR_12);
 FUNC_5(VAR_21, VAR_20, VAR_13);

 FUNC_2(VAR_21->clk_ahb);
 FUNC_2(VAR_21->clk_per);

 return 0;

err_clk_ahb:
 FUNC_2(VAR_21->clk_per);
err_clk_per:
 return VAR_25;
}
