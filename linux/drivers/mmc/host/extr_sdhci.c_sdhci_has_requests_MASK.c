
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {scalar_t__ data_cmd; scalar_t__ cmd; } ;



__attribute__((used)) static inline bool FUNC_0(struct sdhci_host *VAR_0)
{
 return VAR_0->cmd || VAR_0->data_cmd;
}
