
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_device {int mode; int master; } ;
struct npcm_pspi {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 struct npcm_pspi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_5)
{
 struct npcm_pspi *VAR_6 = FUNC_2(VAR_5->master);
 u16 VAR_7;
 u16 VAR_8;

 switch (VAR_5->mode & (VAR_4 | VAR_3)) {
 case 131:
  VAR_8 = 0;
  break;
 case 130:
  VAR_8 = VAR_1;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_1 | VAR_2;
  break;
 }

 VAR_7 = FUNC_0(VAR_6->base + VAR_0);
 VAR_7 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_7 | VAR_8, VAR_6->base + VAR_0);
}
