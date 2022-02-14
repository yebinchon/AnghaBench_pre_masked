
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qm_mcr_querywq {int channel_wq; } ;



__attribute__((used)) static inline u16 FUNC_0(const struct qm_mcr_querywq *VAR_0)
{
 return VAR_0->channel_wq >> 3;
}
