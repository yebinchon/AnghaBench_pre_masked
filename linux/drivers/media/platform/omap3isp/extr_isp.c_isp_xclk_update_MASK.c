
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_xclk {int id; int isp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct isp_xclk *VAR_6, u32 VAR_7)
{
 switch (VAR_6->id) {
 case 129:
  FUNC_0(VAR_6->isp, VAR_5, VAR_4,
    VAR_0,
    VAR_7 << VAR_1);
  break;
 case 128:
  FUNC_0(VAR_6->isp, VAR_5, VAR_4,
    VAR_2,
    VAR_7 << VAR_3);
  break;
 }
}
