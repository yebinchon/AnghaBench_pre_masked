
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t type; } ;
struct bttv {int triton1; scalar_t__ gpioirq; TYPE_1__ c; } ;
struct TYPE_4__ {scalar_t__ no_video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_12)
{

 FUNC_0(0xfffffUL, VAR_9);

 if (VAR_10[VAR_12->c.type].no_video) {

  FUNC_0(VAR_4,
   VAR_5);
 } else {

  FUNC_0((VAR_12->triton1) |
   (VAR_12->gpioirq ? VAR_2 : 0) |
   VAR_8 |
   (VAR_11 ? VAR_0 : 0) |
   VAR_7 | VAR_6 |
   VAR_1|VAR_3|
   VAR_4,
   VAR_5);
 }
}
