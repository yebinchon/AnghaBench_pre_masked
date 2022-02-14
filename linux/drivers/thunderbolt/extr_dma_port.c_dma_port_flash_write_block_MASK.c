
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct tb_dma_port*,int,int ) ;
 int FUNC_1 (int ,void const*,int ,int ,scalar_t__,int,int ) ;
 int FUNC_2 (struct tb_switch*) ;

__attribute__((used)) static int FUNC_3(struct tb_dma_port *VAR_11, u32 VAR_12,
          const void *VAR_13, u32 VAR_14)
{
 struct tb_switch *VAR_15 = VAR_11->sw;
 u32 VAR_16, VAR_17, VAR_18;
 int VAR_19;

 VAR_18 = VAR_14 / 4;


 VAR_19 = FUNC_1(VAR_15->tb->ctl, VAR_13, FUNC_2(VAR_15), VAR_11->port,
       VAR_11->base + VAR_2, VAR_18, VAR_1);

 VAR_16 = VAR_5 << VAR_6;


 if (VAR_12 >= VAR_0) {
  VAR_17 = VAR_0;
  VAR_16 |= VAR_7;
 } else {
  VAR_17 = VAR_12 / 4;
 }

 VAR_16 |= ((VAR_18 - 1) << VAR_9) & VAR_8;
 VAR_16 |= (VAR_17 << VAR_4) & VAR_3;
 VAR_16 |= VAR_10;

 return FUNC_0(VAR_11, VAR_16, VAR_1);
}
