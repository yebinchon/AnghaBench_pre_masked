
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct stm32_spi*,int ,int ) ;
 int FUNC_3 (struct stm32_spi*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stm32_spi *VAR_10)
{
 unsigned long VAR_11;

 FUNC_0(&VAR_10->lock, VAR_11);


 FUNC_2(VAR_10, VAR_8,
      VAR_9);






 FUNC_3(VAR_10, VAR_4, VAR_7 |
       VAR_5 |
       VAR_6);







 FUNC_3(VAR_10, VAR_0, VAR_2 |
        VAR_3 |
        VAR_1);

 FUNC_1(&VAR_10->lock, VAR_11);

 return 0;
}
