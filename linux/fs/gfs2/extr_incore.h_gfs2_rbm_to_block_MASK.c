
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfs2_rbm {scalar_t__ offset; TYPE_1__* rgd; } ;
struct TYPE_4__ {int bi_start; } ;
struct TYPE_3__ {scalar_t__ rd_data; scalar_t__ rd_data0; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct gfs2_rbm const*) ;

__attribute__((used)) static inline u64 FUNC_2(const struct gfs2_rbm *VAR_1)
{
 FUNC_0(VAR_1->offset >= VAR_1->rgd->rd_data);
 return VAR_1->rgd->rd_data0 + (FUNC_1(VAR_1)->bi_start * VAR_0) +
  VAR_1->offset;
}
