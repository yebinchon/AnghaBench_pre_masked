
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap3isp_prev_csc {int** matrix; int* offset; } ;
struct prev_params {struct omap3isp_prev_csc csc; } ;
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
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_17,
     const struct prev_params *VAR_18)
{
 struct isp_device *VAR_19 = FUNC_1(VAR_17);
 const struct omap3isp_prev_csc *VAR_20 = &VAR_18->csc;
 u32 VAR_21;

 VAR_21 = (VAR_20->matrix[0][0] & 0x3ff) << VAR_3;
 VAR_21 |= (VAR_20->matrix[0][1] & 0x3ff) << VAR_2;
 VAR_21 |= (VAR_20->matrix[0][2] & 0x3ff) << VAR_1;
 FUNC_0(VAR_19, VAR_21, VAR_16, VAR_0);

 VAR_21 = (VAR_20->matrix[1][0] & 0x3ff) << VAR_7;
 VAR_21 |= (VAR_20->matrix[1][1] & 0x3ff) << VAR_6;
 VAR_21 |= (VAR_20->matrix[1][2] & 0x3ff) << VAR_5;
 FUNC_0(VAR_19, VAR_21, VAR_16, VAR_4);

 VAR_21 = (VAR_20->matrix[2][0] & 0x3ff) << VAR_11;
 VAR_21 |= (VAR_20->matrix[2][1] & 0x3ff) << VAR_10;
 VAR_21 |= (VAR_20->matrix[2][2] & 0x3ff) << VAR_9;
 FUNC_0(VAR_19, VAR_21, VAR_16, VAR_8);

 VAR_21 = (VAR_20->offset[0] & 0xff) << VAR_15;
 VAR_21 |= (VAR_20->offset[1] & 0xff) << VAR_13;
 VAR_21 |= (VAR_20->offset[2] & 0xff) << VAR_14;
 FUNC_0(VAR_19, VAR_21, VAR_16, VAR_12);
}
