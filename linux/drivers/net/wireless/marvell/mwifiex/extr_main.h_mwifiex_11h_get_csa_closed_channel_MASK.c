
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mwifiex_private {scalar_t__ csa_chan; scalar_t__ csa_expire_time; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline u8
FUNC_1(struct mwifiex_private *VAR_1)
{
 if (!VAR_1->csa_chan)
  return 0;


 if (FUNC_0(VAR_0, VAR_1->csa_expire_time)) {
  VAR_1->csa_chan = 0;
  VAR_1->csa_expire_time = 0;
 }

 return VAR_1->csa_chan;
}
