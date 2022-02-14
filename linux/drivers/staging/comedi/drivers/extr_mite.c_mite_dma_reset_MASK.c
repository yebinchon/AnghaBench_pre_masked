
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mite_channel {int channel; TYPE_1__* mite; } ;
struct TYPE_2__ {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mite_channel *VAR_2)
{
 FUNC_1(VAR_0 | VAR_1,
        VAR_2->mite->mmio + FUNC_0(VAR_2->channel));
}
