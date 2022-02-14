
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct camif_vp {int offset; int id; TYPE_1__* camif; } ;
struct TYPE_2__ {scalar_t__ io_base; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct camif_vp *VAR_0)
{
 return FUNC_1(VAR_0->camif->io_base + FUNC_0(VAR_0->id,
        VAR_0->offset));
}
