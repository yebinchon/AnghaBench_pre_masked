
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ast_vhub_ep {TYPE_1__* vhub; } ;
struct TYPE_2__ {scalar_t__ ep1_stalled; } ;


 int FUNC_0 (struct ast_vhub_ep*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ast_vhub_ep*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct ast_vhub_ep *VAR_3,
      u16 VAR_4, u16 VAR_5)
{
 int VAR_6;
 u8 VAR_7 = 0;

 VAR_6 = VAR_4 & VAR_1;
 FUNC_0(VAR_3, "GET_STATUS(ep%d)\n", VAR_6);


 if (VAR_6 == 1) {
  if (VAR_3->vhub->ep1_stalled)
   VAR_7 |= 1 << VAR_0;
 } else if (VAR_6 != 0)
  return VAR_2;

 return FUNC_1(VAR_3, VAR_7, 0);
}
