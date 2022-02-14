
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi148_driver {int * dma_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static u32 FUNC_1(struct tsi148_driver *VAR_4,
 int VAR_5)
{
 u32 VAR_6 = 0;

 if (VAR_5 & VAR_2) {
  FUNC_0(&VAR_4->dma_queue[0]);
  VAR_6 |= VAR_0;
 }
 if (VAR_5 & VAR_3) {
  FUNC_0(&VAR_4->dma_queue[1]);
  VAR_6 |= VAR_1;
 }

 return VAR_6;
}
