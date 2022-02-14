
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct pl022 {int virtbase; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct pl022* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_1)
{
 struct pl022 *VAR_2 = FUNC_2(VAR_1);


 FUNC_3((FUNC_1(FUNC_0(VAR_2->virtbase)) &
  (~VAR_0)), FUNC_0(VAR_2->virtbase));

 return 0;
}
