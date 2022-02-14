
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amvdec_session {scalar_t__ vififo_paddr; scalar_t__ last_offset; int wrap_count; int vififo_size; struct amvdec_core* core; } ;
struct amvdec_core {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amvdec_core*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct amvdec_session *VAR_1)
{
 struct amvdec_core *VAR_2 = VAR_1->core;
 u32 VAR_3 = FUNC_0(VAR_2, VAR_0) -
       VAR_1->vififo_paddr;

 if (VAR_3 < VAR_1->last_offset)
  VAR_1->wrap_count++;

 VAR_1->last_offset = VAR_3;
 VAR_3 += (VAR_1->wrap_count * VAR_1->vififo_size);

 return VAR_3;
}
