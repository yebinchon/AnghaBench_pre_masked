
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mite_channel {int channel; struct mite* mite; } ;
struct mite {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct mite_channel *VAR_0)
{
 struct mite *VAR_1 = VAR_0->mite;

 return FUNC_1(VAR_1->mmio + FUNC_0(VAR_0->channel));
}
