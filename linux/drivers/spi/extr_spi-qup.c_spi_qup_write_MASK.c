
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_qup {scalar_t__ mode; int out_blk_sz; scalar_t__ base; int w_size; scalar_t__ tx_bytes; } ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct spi_qup*,int ) ;
 scalar_t__ FUNC_2 (struct spi_qup*) ;
 int FUNC_3 (struct spi_qup*,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct spi_qup *VAR_5)
{
 bool VAR_6 = VAR_5->mode == VAR_0;
 u32 VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_0(FUNC_2(VAR_5) - VAR_5->tx_bytes,
     VAR_5->w_size);
 VAR_8 = VAR_5->out_blk_sz >> 2;

 do {

  FUNC_4(VAR_4,
          VAR_5->base + VAR_1);


  if (!VAR_7)
   return;

  if (VAR_6) {
   VAR_9 = (VAR_7 > VAR_8) ?
    VAR_8 : VAR_7;
  } else {
   if (FUNC_1(VAR_5,
      VAR_3))
    break;

   VAR_9 = 1;
  }

  FUNC_3(VAR_5, VAR_9);

  VAR_7 -= VAR_9;


  if (VAR_6 && !FUNC_1(VAR_5,
     VAR_2))
   break;

 } while (VAR_7);
}
