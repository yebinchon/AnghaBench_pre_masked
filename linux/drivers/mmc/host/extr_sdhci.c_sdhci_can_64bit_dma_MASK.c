
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {scalar_t__ version; int caps; scalar_t__ v4_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct sdhci_host *VAR_3)
{





 if (VAR_3->version >= VAR_2 && VAR_3->v4_mode)
  return VAR_3->caps & VAR_1;

 return VAR_3->caps & VAR_0;
}
