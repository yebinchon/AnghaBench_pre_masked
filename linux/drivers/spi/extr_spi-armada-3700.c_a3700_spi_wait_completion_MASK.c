
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int master; } ;
struct a3700_spi {unsigned int wait_mask; int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct a3700_spi* FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct a3700_spi*,int ) ;
 int FUNC_4 (struct a3700_spi*,int ,unsigned int) ;
 unsigned int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_6(struct spi_device *VAR_3)
{
 struct a3700_spi *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;

 VAR_4 = FUNC_2(VAR_3->master);







 VAR_6 = FUNC_3(VAR_4, VAR_0);
 if (VAR_4->wait_mask & VAR_6)
  return 1;

 FUNC_1(&VAR_4->done);

 FUNC_4(VAR_4, VAR_1,
       VAR_4->wait_mask);

 VAR_7 = FUNC_0(VAR_2);
 VAR_5 = FUNC_5(&VAR_4->done,
           VAR_7);

 VAR_4->wait_mask = 0;

 if (VAR_5)
  return 1;
 VAR_6 = FUNC_3(VAR_4, VAR_0);
 if (VAR_4->wait_mask & VAR_6)
  return 1;

 FUNC_4(VAR_4, VAR_1, 0);


 return 0;
}
