
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_omap_platform_data {scalar_t__ nports; int * port_mode; } ;
struct usbhs_hcd_omap {int usbhs_rev; scalar_t__ nports; void* init_60m_fclk; void* utmi_p2_gfclk; void* xclk60mhsp2_ck; void* utmi_p1_gfclk; void* xclk60mhsp1_ck; void** hsic60m_clk; void** hsic480m_clk; void** utmi_clk; void* ehci_logic_fck; void* uhh_base; struct usbhs_omap_platform_data* pdata; } ;
struct resource {int dummy; } ;
struct device {scalar_t__ of_node; struct usbhs_omap_platform_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct clk {int dummy; } ;
typedef int clkname ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;


 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (struct device*,char*,int,int) ;
 int FUNC_5 (struct device*,char*,...) ;
 struct usbhs_omap_platform_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*,scalar_t__,scalar_t__) ;
 void* FUNC_8 (struct device*,char*) ;
 void* FUNC_9 (struct device*,struct resource*) ;
 void* FUNC_10 (struct device*,int,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,int ,int *,struct device*) ;
 int FUNC_15 (struct usbhs_omap_platform_data*) ;
 int FUNC_16 (struct platform_device*) ;
 int FUNC_17 (struct device*) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct usbhs_hcd_omap*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (char*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_25 (struct device*,struct usbhs_omap_platform_data*) ;
 int FUNC_26 (void*,int ) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct usbhs_omap_platform_data *VAR_9 = FUNC_6(VAR_8);
 struct usbhs_hcd_omap *VAR_10;
 struct resource *VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 bool VAR_14;

 if (VAR_8->of_node) {

  VAR_9 = FUNC_10(VAR_8, sizeof(*VAR_9), VAR_2);
  if (!VAR_9)
   return -VAR_1;

  VAR_12 = FUNC_25(VAR_8, VAR_9);
  if (VAR_12)
   return VAR_12;

  VAR_8->platform_data = VAR_9;
 }

 if (!VAR_9) {
  FUNC_5(VAR_8, "Missing platform data\n");
  return -VAR_0;
 }

 if (VAR_9->nports > VAR_4) {
  FUNC_7(VAR_8, "Too many num_ports <%d> in platform_data. Max %d\n",
    VAR_9->nports, VAR_4);
  return -VAR_0;
 }

 VAR_10 = FUNC_10(VAR_8, sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_5(VAR_8, "Memory allocation failed\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_18(VAR_7, VAR_3, 0);
 VAR_10->uhh_base = FUNC_9(VAR_8, VAR_11);
 if (FUNC_1(VAR_10->uhh_base))
  return FUNC_2(VAR_10->uhh_base);

 VAR_10->pdata = VAR_9;


 FUNC_15(VAR_9);

 FUNC_21(VAR_8);

 FUNC_19(VAR_7, VAR_10);
 FUNC_22(VAR_8);

 VAR_10->usbhs_rev = FUNC_26(VAR_10->uhh_base, VAR_5);




 FUNC_23(VAR_8);





 if (VAR_9->nports) {
  VAR_10->nports = VAR_9->nports;
 } else {
  switch (VAR_10->usbhs_rev) {
  case 129:
   VAR_10->nports = 3;
   break;
  case 128:
   VAR_10->nports = 2;
   break;
  default:
   VAR_10->nports = VAR_4;
   FUNC_4(VAR_8,
    "USB HOST Rev:0x%x not recognized, assuming %d ports\n",
    VAR_10->usbhs_rev, VAR_10->nports);
   break;
  }
  VAR_9->nports = VAR_10->nports;
 }

 VAR_13 = sizeof(struct clk *) * VAR_10->nports;
 VAR_10->utmi_clk = FUNC_10(VAR_8, VAR_13, VAR_2);
 VAR_10->hsic480m_clk = FUNC_10(VAR_8, VAR_13, VAR_2);
 VAR_10->hsic60m_clk = FUNC_10(VAR_8, VAR_13, VAR_2);

 if (!VAR_10->utmi_clk || !VAR_10->hsic480m_clk || !VAR_10->hsic60m_clk) {
  FUNC_5(VAR_8, "Memory allocation failed\n");
  VAR_12 = -VAR_1;
  goto err_mem;
 }


 VAR_10->ehci_logic_fck = FUNC_0(-VAR_0);
 VAR_10->init_60m_fclk = FUNC_0(-VAR_0);
 VAR_10->utmi_p1_gfclk = FUNC_0(-VAR_0);
 VAR_10->utmi_p2_gfclk = FUNC_0(-VAR_0);
 VAR_10->xclk60mhsp1_ck = FUNC_0(-VAR_0);
 VAR_10->xclk60mhsp2_ck = FUNC_0(-VAR_0);

 for (VAR_13 = 0; VAR_13 < VAR_10->nports; VAR_13++) {
  VAR_10->utmi_clk[VAR_13] = FUNC_0(-VAR_0);
  VAR_10->hsic480m_clk[VAR_13] = FUNC_0(-VAR_0);
  VAR_10->hsic60m_clk[VAR_13] = FUNC_0(-VAR_0);
 }


 if (VAR_10->usbhs_rev == 129) {
  VAR_14 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_10->nports; VAR_13++) {
   if (FUNC_12(VAR_9->port_mode[VAR_13]) ||
       FUNC_13(VAR_9->port_mode[VAR_13]) ||
       FUNC_11(VAR_9->port_mode[VAR_13]))

    VAR_14 |= 1;
  }

  if (VAR_14) {
   VAR_10->ehci_logic_fck = FUNC_8(VAR_8,
           "usbhost_120m_fck");
   if (FUNC_1(VAR_10->ehci_logic_fck)) {
    VAR_12 = FUNC_2(VAR_10->ehci_logic_fck);
    FUNC_5(VAR_8, "usbhost_120m_fck failed:%d\n",
     VAR_12);
    goto err_mem;
   }
  }
  goto initialize;
 }


 VAR_10->utmi_p1_gfclk = FUNC_8(VAR_8, "utmi_p1_gfclk");
 if (FUNC_1(VAR_10->utmi_p1_gfclk)) {
  VAR_12 = FUNC_2(VAR_10->utmi_p1_gfclk);
  FUNC_5(VAR_8, "utmi_p1_gfclk failed error:%d\n", VAR_12);
  goto err_mem;
 }

 VAR_10->utmi_p2_gfclk = FUNC_8(VAR_8, "utmi_p2_gfclk");
 if (FUNC_1(VAR_10->utmi_p2_gfclk)) {
  VAR_12 = FUNC_2(VAR_10->utmi_p2_gfclk);
  FUNC_5(VAR_8, "utmi_p2_gfclk failed error:%d\n", VAR_12);
  goto err_mem;
 }

 VAR_10->xclk60mhsp1_ck = FUNC_8(VAR_8, "refclk_60m_ext_p1");
 if (FUNC_1(VAR_10->xclk60mhsp1_ck)) {
  VAR_12 = FUNC_2(VAR_10->xclk60mhsp1_ck);
  FUNC_5(VAR_8, "refclk_60m_ext_p1 failed error:%d\n", VAR_12);
  goto err_mem;
 }

 VAR_10->xclk60mhsp2_ck = FUNC_8(VAR_8, "refclk_60m_ext_p2");
 if (FUNC_1(VAR_10->xclk60mhsp2_ck)) {
  VAR_12 = FUNC_2(VAR_10->xclk60mhsp2_ck);
  FUNC_5(VAR_8, "refclk_60m_ext_p2 failed error:%d\n", VAR_12);
  goto err_mem;
 }

 VAR_10->init_60m_fclk = FUNC_8(VAR_8, "refclk_60m_int");
 if (FUNC_1(VAR_10->init_60m_fclk)) {
  VAR_12 = FUNC_2(VAR_10->init_60m_fclk);
  FUNC_5(VAR_8, "refclk_60m_int failed error:%d\n", VAR_12);
  goto err_mem;
 }

 for (VAR_13 = 0; VAR_13 < VAR_10->nports; VAR_13++) {
  char VAR_15[30];


  FUNC_24(VAR_15, sizeof(VAR_15),
    "usb_host_hs_utmi_p%d_clk", VAR_13 + 1);





  VAR_10->utmi_clk[VAR_13] = FUNC_8(VAR_8, VAR_15);
  if (FUNC_1(VAR_10->utmi_clk[VAR_13])) {
   VAR_12 = FUNC_2(VAR_10->utmi_clk[VAR_13]);
   FUNC_5(VAR_8, "Failed to get clock : %s : %d\n",
    VAR_15, VAR_12);
   goto err_mem;
  }

  FUNC_24(VAR_15, sizeof(VAR_15),
    "usb_host_hs_hsic480m_p%d_clk", VAR_13 + 1);
  VAR_10->hsic480m_clk[VAR_13] = FUNC_8(VAR_8, VAR_15);
  if (FUNC_1(VAR_10->hsic480m_clk[VAR_13])) {
   VAR_12 = FUNC_2(VAR_10->hsic480m_clk[VAR_13]);
   FUNC_5(VAR_8, "Failed to get clock : %s : %d\n",
    VAR_15, VAR_12);
   goto err_mem;
  }

  FUNC_24(VAR_15, sizeof(VAR_15),
    "usb_host_hs_hsic60m_p%d_clk", VAR_13 + 1);
  VAR_10->hsic60m_clk[VAR_13] = FUNC_8(VAR_8, VAR_15);
  if (FUNC_1(VAR_10->hsic60m_clk[VAR_13])) {
   VAR_12 = FUNC_2(VAR_10->hsic60m_clk[VAR_13]);
   FUNC_5(VAR_8, "Failed to get clock : %s : %d\n",
    VAR_15, VAR_12);
   goto err_mem;
  }
 }

 if (FUNC_12(VAR_9->port_mode[0])) {
  VAR_12 = FUNC_3(VAR_10->utmi_p1_gfclk,
     VAR_10->xclk60mhsp1_ck);
  if (VAR_12 != 0) {
   FUNC_5(VAR_8, "xclk60mhsp1_ck set parent failed: %d\n",
    VAR_12);
   goto err_mem;
  }
 } else if (FUNC_13(VAR_9->port_mode[0])) {
  VAR_12 = FUNC_3(VAR_10->utmi_p1_gfclk,
     VAR_10->init_60m_fclk);
  if (VAR_12 != 0) {
   FUNC_5(VAR_8, "P0 init_60m_fclk set parent failed: %d\n",
    VAR_12);
   goto err_mem;
  }
 }

 if (FUNC_12(VAR_9->port_mode[1])) {
  VAR_12 = FUNC_3(VAR_10->utmi_p2_gfclk,
     VAR_10->xclk60mhsp2_ck);
  if (VAR_12 != 0) {
   FUNC_5(VAR_8, "xclk60mhsp2_ck set parent failed: %d\n",
    VAR_12);
   goto err_mem;
  }
 } else if (FUNC_13(VAR_9->port_mode[1])) {
  VAR_12 = FUNC_3(VAR_10->utmi_p2_gfclk,
      VAR_10->init_60m_fclk);
  if (VAR_12 != 0) {
   FUNC_5(VAR_8, "P1 init_60m_fclk set parent failed: %d\n",
    VAR_12);
   goto err_mem;
  }
 }

initialize:
 FUNC_17(VAR_8);

 if (VAR_8->of_node) {
  VAR_12 = FUNC_14(VAR_8->of_node,
    VAR_6, ((void*)0), VAR_8);

  if (VAR_12) {
   FUNC_5(VAR_8, "Failed to create DT children: %d\n", VAR_12);
   goto err_mem;
  }

 } else {
  VAR_12 = FUNC_16(VAR_7);
  if (VAR_12) {
   FUNC_5(VAR_8, "omap_usbhs_alloc_children failed: %d\n",
      VAR_12);
   goto err_mem;
  }
 }

 return 0;

err_mem:
 FUNC_20(VAR_8);

 return VAR_12;
}
