
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goldfish_tty {scalar_t__ version; int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (int ,void*,unsigned long,int) ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long,unsigned long,int) ;
 int FUNC_4 (struct goldfish_tty*,unsigned long,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(struct goldfish_tty *VAR_4,
       unsigned long VAR_5,
       unsigned int VAR_6,
       int VAR_7)
{
 dma_addr_t VAR_8;
 enum dma_data_direction VAR_9;

 VAR_9 = (VAR_7 ? VAR_1 : VAR_0);
 if (VAR_4->version > 0) {




  unsigned long VAR_10 = VAR_5 + VAR_6;

  while (VAR_5 < VAR_10) {
   unsigned long VAR_11 = (VAR_5 & VAR_2) + VAR_3;
   unsigned long VAR_12 =
     VAR_11 < VAR_10 ? VAR_11 : VAR_10;
   unsigned long VAR_13 = VAR_12 - VAR_5;





   VAR_8 = FUNC_1(VAR_4->dev, (void *)VAR_5,
          VAR_13, VAR_9);

   if (FUNC_2(VAR_4->dev, VAR_8)) {
    FUNC_0(VAR_4->dev, "tty: DMA mapping error.\n");
    return;
   }
   FUNC_4(VAR_4, VAR_8, VAR_13, VAR_7);





   FUNC_3(VAR_4->dev, VAR_8, VAR_13, VAR_9);

   VAR_5 += VAR_13;
  }
 } else {




  FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 }
}
