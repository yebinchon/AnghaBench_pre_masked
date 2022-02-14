
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ofdpa_port {int pport; int dev; } ;
struct ofdpa_ctrl {int eth_type; int eth_dst_mask; int eth_dst; } ;
typedef int __be16 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ofdpa_port*,int,int,int,int const*,int const*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ofdpa_port *VAR_0, int VAR_1,
        const struct ofdpa_ctrl *VAR_2, __be16 VAR_3)
{
 u32 VAR_4 = VAR_0->pport;
 u32 VAR_5 = 0xffffffff;
 u32 VAR_6 = 0;
 const u8 *VAR_7 = ((void*)0);
 const u8 *VAR_8 = ((void*)0);
 __be16 VAR_9 = FUNC_1(0xffff);
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 u32 VAR_14 = FUNC_0(VAR_3, VAR_6);
 int VAR_15;

 VAR_15 = FUNC_3(VAR_0, VAR_1,
     VAR_4, VAR_5,
     VAR_7, VAR_8,
     VAR_2->eth_dst, VAR_2->eth_dst_mask,
     VAR_2->eth_type,
     VAR_3, VAR_9,
     VAR_10, VAR_11,
     VAR_12, VAR_13,
     VAR_14);

 if (VAR_15)
  FUNC_2(VAR_0->dev, "Error (%d) ctrl ACL\n", VAR_15);

 return VAR_15;
}
