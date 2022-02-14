
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_st {int bytes_per_word; int words_remaining; scalar_t__ base; int done; int rx_ptr; int tx_ptr; } ;
struct spi_master {int dummy; } ;
struct spi_device {int bits_per_word; int master; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct spi_st* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct spi_st*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct spi_master *VAR_4,
          struct spi_device *VAR_5, struct spi_transfer *VAR_6)
{
 struct spi_st *VAR_7 = FUNC_3(VAR_4);
 uint32_t VAR_8 = 0;


 VAR_7->tx_ptr = VAR_6->tx_buf;
 VAR_7->rx_ptr = VAR_6->rx_buf;

 if (VAR_5->bits_per_word > 8) {




  VAR_7->bytes_per_word = 2;
  VAR_7->words_remaining = VAR_6->len / 2;

 } else if (VAR_5->bits_per_word == 8 && !(VAR_6->len & 0x1)) {




  VAR_7->bytes_per_word = 2;
  VAR_7->words_remaining = VAR_6->len / 2;


  VAR_8 = FUNC_0(VAR_7->base + VAR_0);
  FUNC_6((VAR_8 | 0xf), VAR_7->base + VAR_0);

  FUNC_0(VAR_7->base + VAR_3);

 } else {
  VAR_7->bytes_per_word = 1;
  VAR_7->words_remaining = VAR_6->len;
 }

 FUNC_1(&VAR_7->done);


 FUNC_4(VAR_7);
 FUNC_6(VAR_2, VAR_7->base + VAR_1);


 FUNC_5(&VAR_7->done);


 if (VAR_8)
  FUNC_6(VAR_8, VAR_7->base + VAR_0);

 FUNC_2(VAR_5->master);

 return VAR_6->len;
}
