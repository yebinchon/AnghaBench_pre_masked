
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resizer_luma_yenh {int algo; int gain; int slope; int core; } ;
struct isp_res_device {int dummy; } ;
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
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_res_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_res_device *VAR_10,
        struct resizer_luma_yenh *VAR_11)
{
 struct isp_device *VAR_12 = FUNC_1(VAR_10);
 u32 VAR_13;

 VAR_13 = (VAR_11->algo << VAR_2)
    & VAR_1;
 VAR_13 |= (VAR_11->gain << VAR_6)
    & VAR_5;
 VAR_13 |= (VAR_11->slope << VAR_8)
    & VAR_7;
 VAR_13 |= (VAR_11->core << VAR_4)
    & VAR_3;

 FUNC_0(VAR_12, VAR_13, VAR_9, VAR_0);
}
