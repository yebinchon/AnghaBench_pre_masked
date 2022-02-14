
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct butterfly {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct butterfly* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static inline int FUNC_2(struct spi_device *VAR_2)
{
 struct butterfly *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 u8 VAR_5;

 VAR_5 = VAR_1;


 VAR_4 = !(FUNC_0(VAR_3->port) & VAR_5);
 return (VAR_5 == VAR_0) ? VAR_4 : !VAR_4;
}
