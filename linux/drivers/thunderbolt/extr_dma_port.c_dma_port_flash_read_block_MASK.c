
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,void*,int ,int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct tb_dma_port*,int,int ) ;
 int FUNC_2 (struct tb_switch*) ;

__attribute__((used)) static int FUNC_3(struct tb_dma_port *VAR_10, u32 VAR_11,
         void *VAR_12, u32 VAR_13)
{
 struct tb_switch *VAR_14 = VAR_10->sw;
 u32 VAR_15, VAR_16, VAR_17;
 int VAR_18;

 VAR_16 = VAR_11 / 4;
 VAR_17 = VAR_13 / 4;

 VAR_15 = VAR_5 << VAR_6;
 if (VAR_17 < VAR_2)
  VAR_15 |= (VAR_17 << VAR_8) & VAR_7;
 VAR_15 |= (VAR_16 << VAR_4) & VAR_3;
 VAR_15 |= VAR_9;

 VAR_18 = FUNC_1(VAR_10, VAR_15, VAR_0);
 if (VAR_18)
  return VAR_18;

 return FUNC_0(VAR_14->tb->ctl, VAR_12, FUNC_2(VAR_14), VAR_10->port,
        VAR_10->base + VAR_1, VAR_17, VAR_0);
}
