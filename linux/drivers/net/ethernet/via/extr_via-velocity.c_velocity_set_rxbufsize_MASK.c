
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf_sz; } ;
struct velocity_info {TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct velocity_info *VAR_2, int VAR_3)
{
 VAR_2->rx.buf_sz = (VAR_3 <= VAR_0) ? VAR_1 : VAR_3 + 32;
}
