
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m2m_ctx; } ;
struct allegro_channel {TYPE_1__ fh; } ;





 int FUNC_0 (struct allegro_channel*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct allegro_channel *VAR_0)
{
 bool VAR_1 = 0;

 switch (FUNC_0(VAR_0)) {
 case 129:
  VAR_1 = 1;
  break;
 case 130:
 case 128:
  if (FUNC_1(VAR_0->fh.m2m_ctx) == 0)
   VAR_1 = 1;
  break;
 default:
  break;
 }

 return VAR_1;
}
