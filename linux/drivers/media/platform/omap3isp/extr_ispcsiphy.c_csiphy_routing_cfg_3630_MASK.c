
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isp_csiphy {TYPE_1__* isp; } ;
typedef enum isp_interface_type { ____Placeholder_isp_interface_type } isp_interface_type ;
struct TYPE_2__ {int syscon_offset; int syscon; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct isp_csiphy *VAR_7,
        enum isp_interface_type VAR_8,
        bool VAR_9)
{
 u32 VAR_10;
 u32 VAR_11, VAR_12;

 FUNC_0(VAR_7->isp->syscon, VAR_7->isp->syscon_offset, &VAR_10);

 switch (VAR_8) {
 default:

 case 131:
  VAR_10 &= ~VAR_6;
  VAR_11 = VAR_4;
  break;
 case 128:
  VAR_11 = VAR_4;
  VAR_12 = VAR_2;
  break;
 case 130:
  VAR_10 |= VAR_6;
  VAR_11 = VAR_5;
  break;
 case 129:
  VAR_11 = VAR_5;
  VAR_12 = VAR_2;
  break;
 }


 if (VAR_8 == 131 ||
     VAR_8 == 130) {
  if (VAR_9)
   VAR_12 = VAR_1;
  else
   VAR_12 = VAR_0;
 }

 VAR_10 &= ~(VAR_3 << VAR_11);
 VAR_10 |= VAR_12 << VAR_11;

 FUNC_1(VAR_7->isp->syscon, VAR_7->isp->syscon_offset, VAR_10);
}
