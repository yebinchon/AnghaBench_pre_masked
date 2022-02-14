
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ksz_desc_info {size_t next; size_t mask; int avail; struct ksz_desc* ring; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct ksz_desc {TYPE_2__ sw; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ksz_desc_info *VAR_1,
 struct ksz_desc **VAR_2)
{
 *VAR_2 = &VAR_1->ring[VAR_1->next];
 VAR_1->next++;
 VAR_1->next &= VAR_1->mask;
 VAR_1->avail--;
 (*VAR_2)->sw.buf.data &= ~VAR_0;
}
