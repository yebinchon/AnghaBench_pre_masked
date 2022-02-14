
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_switch {TYPE_1__* tb; } ;
struct tb_dma_port {scalar_t__ base; int port; struct tb_switch* sw; } ;
struct TYPE_2__ {int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int*,int ,int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct tb_switch*) ;

int FUNC_2(struct tb_dma_port *VAR_6, u32 *VAR_7)
{
 struct tb_switch *VAR_8 = VAR_6->sw;
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_8->tb->ctl, &VAR_9, FUNC_1(VAR_8), VAR_6->port,
       VAR_6->base + VAR_2, 1, VAR_0);
 if (VAR_11)
  return VAR_11;


 VAR_10 = (VAR_9 & VAR_3) >> VAR_4;
 if (VAR_10 == VAR_1) {
  if (VAR_7)
   *VAR_7 = VAR_9 & VAR_5;


  return 1;
 }

 return 0;
}
