
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmci_host {TYPE_1__* data; } ;
struct TYPE_2__ {int blksz; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct mmci_host *VAR_0)
{
 return (FUNC_0(VAR_0->data->blksz) - 1) << 4;
}
