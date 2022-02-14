
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct isp_csiphy {TYPE_1__* isp; } ;
struct TYPE_2__ {int syscon_offset; int syscon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct isp_csiphy *VAR_4, u32 VAR_5, bool VAR_6,
        bool VAR_7)
{
 u32 VAR_8 = VAR_1
  | VAR_2;


 if (VAR_5 != VAR_0)
  return;

 if (!VAR_6) {
  FUNC_0(VAR_4->isp->syscon, VAR_4->isp->syscon_offset, 0);
  return;
 }

 if (VAR_7)
  VAR_8 |= VAR_3;

 FUNC_0(VAR_4->isp->syscon, VAR_4->isp->syscon_offset, VAR_8);
}
