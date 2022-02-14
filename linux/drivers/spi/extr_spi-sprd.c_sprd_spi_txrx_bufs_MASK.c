
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sprd_spi {scalar_t__ trans_len; int trans_mode; int hw_mode; scalar_t__ (* read_bufs ) (struct sprd_spi*,scalar_t__) ;scalar_t__ (* write_bufs ) (struct sprd_spi*,scalar_t__) ;} ;
struct spi_transfer {int dummy; } ;
struct spi_device {int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sprd_spi* FUNC_0 (int ) ;
 int FUNC_1 (struct sprd_spi*) ;
 int FUNC_2 (struct sprd_spi*) ;
 int FUNC_3 (struct sprd_spi*,scalar_t__) ;
 int FUNC_4 (struct sprd_spi*,scalar_t__) ;
 int FUNC_5 (struct sprd_spi*) ;
 int FUNC_6 (struct sprd_spi*,struct spi_transfer*) ;
 int FUNC_7 (struct sprd_spi*,struct spi_transfer*) ;
 scalar_t__ FUNC_8 (struct sprd_spi*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sprd_spi*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct sprd_spi*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_5, struct spi_transfer *VAR_6)
{
 struct sprd_spi *VAR_7 = FUNC_0(VAR_5->controller);
 u32 VAR_8 = VAR_7->trans_len, VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12 = 0;

 while (VAR_8) {
  VAR_9 = VAR_8 > VAR_2 ? VAR_2 :
   VAR_8;
  if (VAR_7->trans_mode & VAR_4) {
   FUNC_4(VAR_7, VAR_9);
   VAR_11 += VAR_7->write_bufs(VAR_7, VAR_9);





   if (VAR_7->hw_mode & VAR_0 || VAR_7->hw_mode & VAR_1)
    FUNC_5(VAR_7);

   VAR_10 = FUNC_7(VAR_7, VAR_6);
  } else {
   FUNC_3(VAR_7, VAR_9);





   if (VAR_7->hw_mode & VAR_0 || VAR_7->hw_mode & VAR_1)
    FUNC_2(VAR_7);
   else
    VAR_11 += VAR_7->write_bufs(VAR_7, VAR_9);

   VAR_10 = FUNC_6(VAR_7, VAR_6);
  }

  if (VAR_10)
   goto complete;

  if (VAR_7->trans_mode & VAR_3)
   VAR_12 += VAR_7->read_bufs(VAR_7, VAR_9);

  VAR_8 -= VAR_9;
 }

 if (VAR_7->trans_mode & VAR_4)
  VAR_10 = VAR_11;
 else
  VAR_10 = VAR_12;
complete:
 FUNC_1(VAR_7);

 return VAR_10;
}
