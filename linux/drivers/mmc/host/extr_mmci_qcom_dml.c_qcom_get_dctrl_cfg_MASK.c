
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmci_host {TYPE_1__* data; } ;
struct TYPE_2__ {int blksz; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct mmci_host *VAR_1)
{
 return VAR_0 | (VAR_1->data->blksz << 4);
}
