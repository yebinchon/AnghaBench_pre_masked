
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {int dummy; } ;
struct tb_dma_port {int port; int base; struct tb_switch* sw; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tb_switch*) ;
 int FUNC_1 (struct tb_dma_port*) ;
 int FUNC_2 (int ,int,int ) ;
 struct tb_dma_port* FUNC_3 (int,int ) ;

struct tb_dma_port *FUNC_4(struct tb_switch *VAR_3)
{
 struct tb_dma_port *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 < 0)
  return ((void*)0);

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->buf = FUNC_2(VAR_2, sizeof(u32), VAR_1);
 if (!VAR_4->buf) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 VAR_4->sw = VAR_3;
 VAR_4->port = VAR_5;
 VAR_4->base = VAR_0;

 return VAR_4;
}
