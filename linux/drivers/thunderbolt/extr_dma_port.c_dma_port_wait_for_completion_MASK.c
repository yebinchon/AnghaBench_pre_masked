
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
 int FUNC_0 (int ,int*,int ,int ,scalar_t__,int,int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (struct tb_switch*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct tb_dma_port *VAR_4,
     unsigned int VAR_5)
{
 unsigned long VAR_6 = VAR_3 + FUNC_1(VAR_5);
 struct tb_switch *VAR_7 = VAR_4->sw;

 do {
  int VAR_8;
  u32 VAR_9;

  VAR_8 = FUNC_0(VAR_7->tb->ctl, &VAR_9, FUNC_2(VAR_7), VAR_4->port,
        VAR_4->base + VAR_1, 1, 50);
  if (VAR_8) {
   if (VAR_8 != -VAR_0)
    return VAR_8;
  } else if (!(VAR_9 & VAR_2)) {
   return 0;
  }

  FUNC_4(50, 100);
 } while (FUNC_3(VAR_3, VAR_6));

 return -VAR_0;
}
