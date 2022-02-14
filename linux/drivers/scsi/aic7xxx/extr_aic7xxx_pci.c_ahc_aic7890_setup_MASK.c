
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ahc_softc {char channel; int bugs; int instruction_ram_size; int flags; int features; int chip; int dev_softc; } ;
typedef int ahc_dev_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct ahc_softc *VAR_6)
{
 ahc_dev_softc_t VAR_7;
 uint8_t VAR_8;

 VAR_7 = VAR_6->dev_softc;
 VAR_6->channel = 'A';
 VAR_6->chip = VAR_0;
 VAR_6->features = VAR_1;
 VAR_6->flags |= VAR_4;
 VAR_8 = FUNC_0(VAR_7, VAR_5, 1);
 if (VAR_8 == 0)
  VAR_6->bugs |= VAR_2|VAR_3;
 VAR_6->instruction_ram_size = 768;
 return (0);
}
