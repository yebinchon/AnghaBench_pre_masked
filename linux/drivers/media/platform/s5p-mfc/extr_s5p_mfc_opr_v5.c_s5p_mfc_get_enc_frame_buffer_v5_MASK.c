
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {unsigned long* dma_base; } ;
struct s5p_mfc_ctx {struct s5p_mfc_dev* dev; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (struct s5p_mfc_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct s5p_mfc_ctx *VAR_4,
  unsigned long *VAR_5, unsigned long *VAR_6)
{
 struct s5p_mfc_dev *VAR_7 = VAR_4->dev;

 *VAR_5 = VAR_7->dma_base[VAR_0] +
    (FUNC_0(VAR_7, VAR_3) << VAR_1);
 *VAR_6 = VAR_7->dma_base[VAR_0] +
    (FUNC_0(VAR_7, VAR_2) << VAR_1);
}
