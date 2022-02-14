
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {scalar_t__ avail; scalar_t__ pend_cred; } ;
struct sge {scalar_t__ fl_starve_thres; } ;
struct adapter {struct sge sge; } ;



__attribute__((used)) static inline bool FUNC_0(const struct adapter *VAR_0,
          const struct sge_fl *VAR_1)
{
 const struct sge *VAR_2 = &VAR_0->sge;

 return VAR_1->avail - VAR_1->pend_cred <= VAR_2->fl_starve_thres;
}
