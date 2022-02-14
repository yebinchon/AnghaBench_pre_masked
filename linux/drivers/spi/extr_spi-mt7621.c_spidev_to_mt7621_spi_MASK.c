
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int master; } ;
struct mt7621_spi {int dummy; } ;


 struct mt7621_spi* FUNC_0 (int ) ;

__attribute__((used)) static inline struct mt7621_spi *FUNC_1(struct spi_device *VAR_0)
{
 return FUNC_0(VAR_0->master);
}
