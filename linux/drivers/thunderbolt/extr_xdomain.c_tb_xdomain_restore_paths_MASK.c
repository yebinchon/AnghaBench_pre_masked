
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdomain {int resume; int tb; int dev; scalar_t__ transmit_path; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct tb_xdomain*) ;

__attribute__((used)) static void FUNC_2(struct tb_xdomain *VAR_0)
{
 if (!VAR_0->resume)
  return;

 VAR_0->resume = 0;
 if (VAR_0->transmit_path) {
  FUNC_0(&VAR_0->dev, "re-establishing DMA path\n");
  FUNC_1(VAR_0->tb, VAR_0);
 }
}
