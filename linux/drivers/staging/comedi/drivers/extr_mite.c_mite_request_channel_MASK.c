
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_ring {int dummy; } ;
struct mite_channel {int dummy; } ;
struct mite {scalar_t__ num_channels; } ;


 struct mite_channel* FUNC_0 (struct mite*,struct mite_ring*,int ,scalar_t__) ;

struct mite_channel *FUNC_1(struct mite *VAR_0,
       struct mite_ring *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, 0,
          VAR_0->num_channels - 1);
}
