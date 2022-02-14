
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whc {scalar_t__ base; int dn_buf_dma; int dn_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct whc *VAR_1)
{


 FUNC_1(VAR_1->dn_buf, 0, 4096);

 FUNC_0(VAR_1->dn_buf_dma, VAR_1->base + VAR_0);
}
