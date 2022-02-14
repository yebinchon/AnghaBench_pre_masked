
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap3isp_prev_rgbtorgb {int** matrix; int* offset; } ;
struct prev_params {struct omap3isp_prev_rgbtorgb rgb2rgb; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_20,
       const struct prev_params *VAR_21)
{
 struct isp_device *VAR_22 = FUNC_1(VAR_20);
 const struct omap3isp_prev_rgbtorgb *VAR_23 = &VAR_21->rgb2rgb;
 u32 VAR_24;

 VAR_24 = (VAR_23->matrix[0][0] & 0xfff) << VAR_2;
 VAR_24 |= (VAR_23->matrix[0][1] & 0xfff) << VAR_1;
 FUNC_0(VAR_22, VAR_24, VAR_19, VAR_0);

 VAR_24 = (VAR_23->matrix[0][2] & 0xfff) << VAR_4;
 VAR_24 |= (VAR_23->matrix[1][0] & 0xfff) << VAR_5;
 FUNC_0(VAR_22, VAR_24, VAR_19, VAR_3);

 VAR_24 = (VAR_23->matrix[1][1] & 0xfff) << VAR_8;
 VAR_24 |= (VAR_23->matrix[1][2] & 0xfff) << VAR_7;
 FUNC_0(VAR_22, VAR_24, VAR_19, VAR_6);

 VAR_24 = (VAR_23->matrix[2][0] & 0xfff) << VAR_11;
 VAR_24 |= (VAR_23->matrix[2][1] & 0xfff) << VAR_10;
 FUNC_0(VAR_22, VAR_24, VAR_19, VAR_9);

 VAR_24 = (VAR_23->matrix[2][2] & 0xfff) << VAR_13;
 FUNC_0(VAR_22, VAR_24, VAR_19, VAR_12);

 VAR_24 = (VAR_23->offset[0] & 0x3ff) << VAR_16;
 VAR_24 |= (VAR_23->offset[1] & 0x3ff) << VAR_15;
 FUNC_0(VAR_22, VAR_24, VAR_19, VAR_14);

 VAR_24 = (VAR_23->offset[2] & 0x3ff) << VAR_18;
 FUNC_0(VAR_22, VAR_24, VAR_19, VAR_17);
}
