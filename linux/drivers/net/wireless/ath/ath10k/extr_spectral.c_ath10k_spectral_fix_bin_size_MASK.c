
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ spectral_bin_discard; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 int FUNC_0 (size_t) ;

__attribute__((used)) static inline size_t FUNC_1(struct ath10k *VAR_0,
        size_t VAR_1)
{






 if (!FUNC_0(VAR_1))
  VAR_1 -= VAR_0->hw_params.spectral_bin_discard;

 return VAR_1;
}
