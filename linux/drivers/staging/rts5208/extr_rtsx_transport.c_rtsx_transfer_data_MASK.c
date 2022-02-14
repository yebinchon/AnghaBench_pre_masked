
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int need_reinit; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,void*,size_t,int,int) ;
 int FUNC_7 (struct rtsx_chip*,int ,void*,int,int,int) ;

int FUNC_8(struct rtsx_chip *VAR_5, u8 VAR_6, void *VAR_7, size_t VAR_8,
         int VAR_9, enum dma_data_direction VAR_10, int VAR_11)
{
 int VAR_12 = 0;

 FUNC_2(FUNC_4(VAR_5), "use_sg = %d\n", VAR_9);


 if (FUNC_3(VAR_5, VAR_2))
  return -VAR_0;

 if (VAR_9) {
  VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_7,
      VAR_9, VAR_10, VAR_11);
 } else {
  VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, VAR_11);
 }

 if (VAR_12 < 0) {
  if (FUNC_1(VAR_5)) {
   FUNC_0(VAR_5);
   VAR_5->need_reinit = VAR_3 | VAR_1 | VAR_4;
   FUNC_5(VAR_5, 1);
  }
 }

 return VAR_12;
}
