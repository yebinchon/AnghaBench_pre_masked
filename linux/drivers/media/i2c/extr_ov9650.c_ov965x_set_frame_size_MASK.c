
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ov965x {TYPE_1__* frame_size; } ;
struct TYPE_2__ {int * regs; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct ov965x*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ov965x *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_4 == 0 && VAR_3 < VAR_0; VAR_3++)
  VAR_4 = FUNC_0(VAR_2, VAR_1[VAR_3],
       VAR_2->frame_size->regs[VAR_3]);
 return VAR_4;
}
