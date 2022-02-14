
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sifive_spi {int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sifive_spi*,int ) ;
 int FUNC_2 (struct sifive_spi*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sifive_spi *VAR_2, u32 VAR_3, int VAR_4)
{
 if (VAR_4) {
  u32 VAR_5;

  do {
   VAR_5 = FUNC_1(VAR_2, VAR_1);
  } while (!(VAR_5 & VAR_3));
 } else {
  FUNC_0(&VAR_2->done);
  FUNC_2(VAR_2, VAR_0, VAR_3);
  FUNC_3(&VAR_2->done);
 }
}
