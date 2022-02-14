
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int bits_per_word; int master; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,void*) ;
 int FUNC_9 (int,void*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_4)
{
 void *VAR_5 =
  *(void **)FUNC_6(VAR_4->master);
 u32 VAR_6;

 VAR_6 = FUNC_0(16) |
  FUNC_4(VAR_4->bits_per_word) |
  FUNC_3(1) | FUNC_2(1) |
  FUNC_1(1);
 FUNC_8(VAR_6, VAR_5 + VAR_2);






 VAR_6 = FUNC_5(VAR_5 + VAR_3);
 if ((VAR_6 & VAR_0) != VAR_1)
  FUNC_9(VAR_1 |
   (VAR_6 & ~VAR_0),
   VAR_5 + VAR_3);
 FUNC_7(20);
 return 0;
}
