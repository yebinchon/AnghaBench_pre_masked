
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_qup {scalar_t__ mode; int in_blk_sz; scalar_t__ base; int w_size; scalar_t__ rx_bytes; } ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct spi_qup*,int ) ;
 scalar_t__ FUNC_3 (struct spi_qup*) ;
 int FUNC_4 (struct spi_qup*,int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct spi_qup *VAR_6, u32 *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 bool VAR_11 = VAR_6->mode == VAR_0;

 VAR_8 = FUNC_0(FUNC_3(VAR_6) - VAR_6->rx_bytes,
     VAR_6->w_size);
 VAR_9 = VAR_6->in_blk_sz >> 2;

 do {

  FUNC_5(VAR_4,
          VAR_6->base + VAR_1);

  if (!VAR_8)
   goto exit;

  if (VAR_11) {
   VAR_10 = (VAR_8 > VAR_9) ?
     VAR_9 : VAR_8;
  } else {
   if (!FUNC_2(VAR_6,
       VAR_3))
    break;

   VAR_10 = 1;
  }


  FUNC_4(VAR_6, VAR_10);

  VAR_8 -= VAR_10;


  if (VAR_11 && !FUNC_2(VAR_6,
     VAR_2))
   break;

 } while (VAR_8);







exit:
 if (!VAR_8) {
  *VAR_7 = FUNC_1(VAR_6->base + VAR_1);
  if (VAR_11 && *VAR_7 & VAR_5)
   FUNC_5(VAR_4,
           VAR_6->base + VAR_1);
 }
}
