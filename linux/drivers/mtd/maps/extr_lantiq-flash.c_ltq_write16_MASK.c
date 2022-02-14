
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct map_info {scalar_t__ map_priv_1; scalar_t__ virt; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct map_info *VAR_2, map_word VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;

 if (VAR_2->map_priv_1 == VAR_0)
  VAR_4 ^= 2;
 FUNC_0(&VAR_1, VAR_5);
 *(u16 *)(VAR_2->virt + VAR_4) = VAR_3.x[0];
 FUNC_1(&VAR_1, VAR_5);
}
