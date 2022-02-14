
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iudma_ch_cfg {scalar_t__ ep_num; size_t ep_type; } ;
struct bcm63xx_udc {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct bcm63xx_udc*,scalar_t__) ;
 struct iudma_ch_cfg* VAR_4 ;
 int FUNC_1 (struct bcm63xx_udc*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct bcm63xx_udc *VAR_5)
{
 u32 VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct iudma_ch_cfg *VAR_8 = &VAR_4[VAR_6];

  if (VAR_8->ep_num < 0)
   continue;

  FUNC_0(VAR_5, VAR_8->ep_num);
  VAR_7 = (VAR_8->ep_type << VAR_3) |
   ((VAR_6 >> 1) << VAR_1);
  FUNC_1(VAR_5, VAR_7, VAR_2);
 }
}
