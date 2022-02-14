
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_spi {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct stm32_spi*,int ,int ) ;
 int FUNC_3 (struct stm32_spi*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stm32_spi *VAR_7)
{
 unsigned long VAR_8;

 FUNC_0(&VAR_7->lock, VAR_8);


 FUNC_2(VAR_7, VAR_5,
      VAR_6);
 FUNC_3(VAR_7, VAR_0, VAR_3 |
       VAR_1 |
       VAR_2 |
       VAR_4);

 FUNC_1(&VAR_7->lock, VAR_8);

 return 0;
}
