
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct q6v5_wcss {int wcss_reset; scalar_t__ rmb_base; int wcss_aon_reset; int dev; int halt_wcss; int halt_map; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct q6v5_wcss*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct q6v5_wcss *VAR_6)
{
 int VAR_7;
 u32 VAR_8;


 FUNC_2(VAR_6, VAR_6->halt_map, VAR_6->halt_wcss);


 VAR_8 = FUNC_3(VAR_6->rmb_base + VAR_3);
 VAR_8 |= VAR_4;
 FUNC_6(VAR_8, VAR_6->rmb_base + VAR_3);


 VAR_8 |= VAR_1;
 VAR_8 &= ~VAR_2;
 FUNC_6(VAR_8, VAR_6->rmb_base + VAR_3);


 VAR_8 |= FUNC_0(1);
 FUNC_6(VAR_8, VAR_6->rmb_base + VAR_3);


 VAR_7 = FUNC_4(VAR_6->rmb_base + VAR_5,
     VAR_8, (VAR_8 & 0xffff) == 0x400, 1000,
     VAR_0);
 if (VAR_7) {
  FUNC_1(VAR_6->dev,
   "can't get SSCAON_STATUS rc:%d)\n", VAR_7);
  return VAR_7;
 }


 FUNC_5(VAR_6->wcss_aon_reset);


 VAR_8 = FUNC_3(VAR_6->rmb_base + VAR_3);
 VAR_8 &= ~VAR_4;
 FUNC_6(VAR_8, VAR_6->rmb_base + VAR_3);


 FUNC_5(VAR_6->wcss_reset);

 return 0;
}
