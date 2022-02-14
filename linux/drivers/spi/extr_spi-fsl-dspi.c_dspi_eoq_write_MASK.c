
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fsl_dspi {scalar_t__ len; scalar_t__ bytes_per_word; int tx_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsl_dspi*) ;

__attribute__((used)) static void FUNC_1(struct fsl_dspi *VAR_3)
{
 int VAR_4 = VAR_0;
 u16 VAR_5 = VAR_3->tx_cmd;


 while (VAR_3->len && VAR_4--) {
  VAR_3->tx_cmd = VAR_5;

  if (VAR_3->len == VAR_3->bytes_per_word || VAR_4 == 0)
   VAR_3->tx_cmd |= VAR_2;

  if (VAR_4 == (VAR_0 - 1))
   VAR_3->tx_cmd |= VAR_1;

  FUNC_0(VAR_3);
 }
}
