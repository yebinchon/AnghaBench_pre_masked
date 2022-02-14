
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int * dma_base; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int *,...) ;
 int FUNC_2 (struct s5p_mfc_dev*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct s5p_mfc_dev *VAR_5)
{
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_5, VAR_5->dma_base[VAR_0],
     VAR_4);
  FUNC_1(2, "Base Address : %pad\n",
     &VAR_5->dma_base[VAR_0]);
 } else {
  FUNC_2(VAR_5, VAR_5->dma_base[VAR_0],
     VAR_2);
  FUNC_2(VAR_5, VAR_5->dma_base[VAR_1],
     VAR_3);
  FUNC_1(2, "Bank1: %pad, Bank2: %pad\n",
     &VAR_5->dma_base[VAR_0],
     &VAR_5->dma_base[VAR_1]);
 }
}
