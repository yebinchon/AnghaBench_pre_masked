
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_info {int virt; } ;
struct TYPE_3__ {int* x; } ;
typedef TYPE_1__ map_word ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static map_word FUNC_2(struct map_info *VAR_0, unsigned long VAR_1)
{
 map_word VAR_2;

 VAR_2.x[0] = FUNC_1(VAR_0->virt, FUNC_0(VAR_1));
 if (VAR_1 & 0x2)
  VAR_2.x[0] >>= 16;
 else
  VAR_2.x[0] &= 0x0000ffff;

 return VAR_2;
}
