
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct tbnet_frame {TYPE_1__ frame; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(const struct tbnet_frame *VAR_1)
{
 return VAR_1->frame.size ? : VAR_0;
}
