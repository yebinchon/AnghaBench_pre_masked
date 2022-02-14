
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tw686x_dev {int pending_dma_en; int pending_dma_cmd; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tw686x_dev*,int ) ;

void FUNC_2(struct tw686x_dev *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_3, VAR_0);
 u32 VAR_6 = FUNC_1(VAR_3, VAR_1);

 VAR_3->pending_dma_en |= VAR_5 | FUNC_0(VAR_4);
 VAR_3->pending_dma_cmd |= VAR_6 | VAR_2 | FUNC_0(VAR_4);
}
