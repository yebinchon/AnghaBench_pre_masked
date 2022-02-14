
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int set_4byte; int * quad_enable; } ;
struct spi_nor {TYPE_1__ params; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct spi_nor *VAR_2)
{
 VAR_2->flags |= VAR_0;
 VAR_2->params.quad_enable = ((void*)0);
 VAR_2->params.set_4byte = VAR_1;
}
