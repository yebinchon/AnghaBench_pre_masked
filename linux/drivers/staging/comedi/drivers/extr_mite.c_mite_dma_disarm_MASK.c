
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_channel {int channel; struct mite* mite; } ;
struct mite {scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct mite_channel *VAR_1)
{
 struct mite *VAR_2 = VAR_1->mite;


 FUNC_1(VAR_0, VAR_2->mmio + FUNC_0(VAR_1->channel));
}
