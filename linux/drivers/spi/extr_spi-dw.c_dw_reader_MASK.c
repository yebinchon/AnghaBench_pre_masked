
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dw_spi {int n_bytes; scalar_t__ rx; scalar_t__ len; scalar_t__ rx_end; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_spi*,int ) ;
 int FUNC_1 (struct dw_spi*) ;

__attribute__((used)) static void FUNC_2(struct dw_spi *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1);
 u16 VAR_3;

 while (VAR_2--) {
  VAR_3 = FUNC_0(VAR_1, VAR_0);

  if (VAR_1->rx_end - VAR_1->len) {
   if (VAR_1->n_bytes == 1)
    *(u8 *)(VAR_1->rx) = VAR_3;
   else
    *(u16 *)(VAR_1->rx) = VAR_3;
  }
  VAR_1->rx += VAR_1->n_bytes;
 }
}
