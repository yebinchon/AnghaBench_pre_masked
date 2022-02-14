
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_port {scalar_t__ have_rtscts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (struct imx_port*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct imx_port *VAR_6, bool VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_6, VAR_5, VAR_4);
  VAR_8 |= VAR_3;
 } else {
  VAR_8 &= ~VAR_3;
 }
 FUNC_1(VAR_6, VAR_8, VAR_2);

 if (VAR_6->have_rtscts) {
  u32 VAR_9 = FUNC_0(VAR_6, VAR_0);
  if (VAR_7)
   VAR_9 |= VAR_1;
  else
   VAR_9 &= ~VAR_1;
  FUNC_1(VAR_6, VAR_9, VAR_0);
 }
}
