
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_pll ) (struct fb_info*,struct pll_timing*,int ) ;} ;
struct sstfb_par {TYPE_1__ dac_sw; struct pci_dev* dev; } ;
struct pll_timing {int dummy; } ;
struct pci_dev {int dummy; } ;
struct fb_info {struct sstfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;
 int FUNC_1 (int,int*,struct pll_timing*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct fb_info*,struct pll_timing*,int ) ;

__attribute__((used)) static void FUNC_6(struct fb_info *VAR_14)
{
 struct sstfb_par *VAR_15 = VAR_14->par;
 struct pci_dev *VAR_16 = VAR_15->dev;
 struct pll_timing VAR_17;
 int VAR_18;


 FUNC_0(VAR_16, VAR_10, VAR_9);
 FUNC_2(VAR_4, VAR_13 | VAR_1);
 FUNC_3(VAR_5, VAR_2);
 FUNC_2(VAR_3, VAR_6 | VAR_7);
 FUNC_4();
 FUNC_0(VAR_16, VAR_10,
                        VAR_9 | VAR_11);

 FUNC_1(20000, &VAR_18, &VAR_17);
 VAR_15->dac_sw.set_pll(VAR_14, &VAR_17, VAR_8);

 FUNC_0(VAR_16, VAR_10,
                        VAR_9);
 FUNC_3(VAR_3, VAR_6 | VAR_7 | VAR_0);
 FUNC_0(VAR_16, VAR_12,0);


 FUNC_0(VAR_16, VAR_10, 0);

}
