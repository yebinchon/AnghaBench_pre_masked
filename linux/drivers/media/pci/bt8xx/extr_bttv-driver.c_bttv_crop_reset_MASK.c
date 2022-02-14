
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bttv_crop {int rect; } ;
struct TYPE_3__ {int defrect; } ;
struct TYPE_4__ {TYPE_1__ cropcap; } ;


 int FUNC_0 (struct bttv_crop*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct bttv_crop *VAR_1, unsigned int VAR_2)
{
 VAR_1->rect = VAR_0[VAR_2].cropcap.defrect;
 FUNC_0(VAR_1);
}
