
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_data {unsigned int blksz; } ;
struct dw_mci {int data_shift; int fifo_depth; int use_dma; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct dw_mci*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dw_mci *VAR_1, struct mmc_data *VAR_2)
{
 unsigned int VAR_3 = VAR_2->blksz;
 static const u32 VAR_4[] = {1, 4, 8, 16, 32, 64, 128, 256};
 u32 VAR_5 = 1 << VAR_1->data_shift;
 u32 VAR_6 = VAR_3 / VAR_5, VAR_7;
 u32 VAR_8 = 0, VAR_9 = 1, VAR_10, VAR_11;
 int VAR_12 = FUNC_0(VAR_4) - 1;


 if (!VAR_1->use_dma)
  return;

 VAR_10 = (VAR_1->fifo_depth) / 2;
 VAR_11 = VAR_1->fifo_depth - VAR_10;





 if (VAR_3 % VAR_5)
  goto done;

 do {
  if (!((VAR_6 % VAR_4[VAR_12]) ||
       (VAR_11 % VAR_4[VAR_12]))) {
   VAR_8 = VAR_12;
   VAR_9 = VAR_4[VAR_12] - 1;
   break;
  }
 } while (--VAR_12 > 0);




done:
 VAR_7 = FUNC_1(VAR_8, VAR_9, VAR_10);
 FUNC_2(VAR_1, VAR_0, VAR_7);
}
