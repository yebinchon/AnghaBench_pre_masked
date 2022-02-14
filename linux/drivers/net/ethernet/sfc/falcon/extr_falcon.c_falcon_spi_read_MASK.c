
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct falcon_spi_device {int dummy; } ;
struct ef4_nic {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct ef4_nic*,struct falcon_spi_device const*,unsigned int,scalar_t__,int *,int *,size_t) ;
 unsigned int FUNC_2 (struct falcon_spi_device const*,int ,scalar_t__) ;
 size_t FUNC_3 (size_t,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct ef4_nic *VAR_4, const struct falcon_spi_device *VAR_5,
  loff_t VAR_6, size_t VAR_7, size_t *VAR_8, u8 *VAR_9)
{
 size_t VAR_10, VAR_11 = 0;
 unsigned int VAR_12;
 int VAR_13 = 0;

 while (VAR_11 < VAR_7) {
  VAR_10 = FUNC_3(VAR_7 - VAR_11, VAR_1);

  VAR_12 = FUNC_2(VAR_5, VAR_2, VAR_6 + VAR_11);
  VAR_13 = FUNC_1(VAR_4, VAR_5, VAR_12, VAR_6 + VAR_11, ((void*)0),
        VAR_9 + VAR_11, VAR_10);
  if (VAR_13)
   break;
  VAR_11 += VAR_10;


  FUNC_0();
  if (FUNC_4(VAR_3)) {
   VAR_13 = -VAR_0;
   break;
  }
 }

 if (VAR_8)
  *VAR_8 = VAR_11;
 return VAR_13;
}
