
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct tb_dma_port*,unsigned int) ;
 int FUNC_2 (int ,int *,int ,int ,scalar_t__,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tb_switch*) ;

__attribute__((used)) static int FUNC_5(struct tb_dma_port *VAR_3, u32 VAR_4,
       unsigned int VAR_5)
{
 struct tb_switch *VAR_6 = VAR_3->sw;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6->tb->ctl, &VAR_4, FUNC_4(VAR_6), VAR_3->port,
        VAR_3->base + VAR_1, 1, VAR_0);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_6->tb->ctl, &VAR_7, FUNC_4(VAR_6), VAR_3->port,
       VAR_3->base + VAR_2, 1, VAR_0);
 if (VAR_8)
  return VAR_8;

 return FUNC_3(VAR_7);
}
