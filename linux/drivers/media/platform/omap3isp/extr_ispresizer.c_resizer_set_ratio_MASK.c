
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct resizer_ratio {int horz; int vert; } ;
struct isp_res_device {int dummy; } ;
struct isp_device {int dummy; } ;
struct TYPE_2__ {int * v_filter_coef_4tap; int * v_filter_coef_7tap; int * h_filter_coef_4tap; int * h_filter_coef_7tap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (struct isp_device*,int ,int ) ;
 int FUNC_1 (struct isp_device*,int,int ,int ) ;
 int FUNC_2 (struct isp_res_device*,int const*,int const*) ;
 struct isp_device* FUNC_3 (struct isp_res_device*) ;

__attribute__((used)) static void FUNC_4(struct isp_res_device *VAR_8,
         const struct resizer_ratio *VAR_9)
{
 struct isp_device *VAR_10 = FUNC_3(VAR_8);
 const u16 *VAR_11, *VAR_12;
 u32 VAR_13;

 VAR_13 = FUNC_0(VAR_10, VAR_6, VAR_0) &
         ~(VAR_1 | VAR_3);
 VAR_13 |= ((VAR_9->horz - 1) << VAR_2)
    & VAR_1;
 VAR_13 |= ((VAR_9->vert - 1) << VAR_4)
    & VAR_3;
 FUNC_1(VAR_10, VAR_13, VAR_6, VAR_0);


 if (VAR_9->horz > VAR_5)
  VAR_11 = &VAR_7.h_filter_coef_7tap[0];
 else
  VAR_11 = &VAR_7.h_filter_coef_4tap[0];


 if (VAR_9->vert > VAR_5)
  VAR_12 = &VAR_7.v_filter_coef_7tap[0];
 else
  VAR_12 = &VAR_7.v_filter_coef_4tap[0];

 FUNC_2(VAR_8, VAR_11, VAR_12);
}
