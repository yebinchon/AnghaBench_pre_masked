
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_pcie {scalar_t__ ep_is_internal; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,char*) ;
 int FUNC_2 (struct iproc_pcie*,int ,scalar_t__,int,int*) ;
 int FUNC_3 (struct iproc_pcie*,int ,scalar_t__,int,int) ;
 int FUNC_4 (struct iproc_pcie*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct iproc_pcie *VAR_18)
{
 struct device *VAR_19 = VAR_18->dev;
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 bool VAR_25 = 0;





 if (VAR_18->ep_is_internal)
  return 0;

 VAR_24 = FUNC_4(VAR_18, VAR_2);
 if (!(VAR_24 & VAR_5) || !(VAR_24 & VAR_4)) {
  FUNC_0(VAR_19, "PHY or data link is INACTIVE!\n");
  return -VAR_1;
 }


 FUNC_2(VAR_18, 0, VAR_13, 1, &VAR_20);
 if ((VAR_20 & 0x7f) != VAR_14) {
  FUNC_0(VAR_19, "in EP mode, hdr=%#02x\n", VAR_20);
  return -VAR_0;
 }





 FUNC_2(VAR_18, 0, 0x43c,
        4, &VAR_23);
 VAR_23 &= ~0xffff00;
 VAR_23 |= (VAR_8 << 8);
 FUNC_3(VAR_18, 0, 0x43c,
         4, VAR_23);


 FUNC_2(VAR_18, 0, VAR_3 + VAR_11,
        2, &VAR_22);
 if (VAR_22 & VAR_12)
  VAR_25 = 1;

 if (!VAR_25) {




  FUNC_2(VAR_18, 0,
         VAR_3 + VAR_10,
         4, &VAR_21);
  if ((VAR_21 & 0xf) ==
      0x2) {
   VAR_21 &= ~0xf;
   VAR_21 |= 0x1;
   FUNC_3(VAR_18, 0,
     VAR_3 + VAR_10,
     4, VAR_21);
   FUNC_5(100);

   FUNC_2(VAR_18, 0,
     VAR_3 + VAR_11,
     2, &VAR_22);
   if (VAR_22 & VAR_12)
    VAR_25 = 1;
  }
 }

 FUNC_1(VAR_19, "link: %s\n", VAR_25 ? "UP" : "DOWN");

 return VAR_25 ? 0 : -VAR_1;
}
