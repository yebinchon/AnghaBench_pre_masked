
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct butterfly {int lastbyte; int port; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct butterfly* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static inline void
FUNC_2(struct spi_device *VAR_1, int VAR_2)
{
 struct butterfly *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4, VAR_5 = VAR_3->lastbyte;

 VAR_4 = VAR_0;

 if (VAR_2)
  VAR_5 |= VAR_4;
 else
  VAR_5 &= ~VAR_4;
 FUNC_0(VAR_3->port, VAR_5);
 VAR_3->lastbyte = VAR_5;
}
