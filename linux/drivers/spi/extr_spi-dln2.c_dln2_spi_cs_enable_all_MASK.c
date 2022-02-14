
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dln2_spi {TYPE_1__* master; } ;
struct TYPE_2__ {scalar_t__ num_chipselect; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct dln2_spi*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dln2_spi *VAR_0, bool VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_0->master->num_chipselect - 1, 0);

 return FUNC_1(VAR_0, VAR_2, VAR_1);
}
