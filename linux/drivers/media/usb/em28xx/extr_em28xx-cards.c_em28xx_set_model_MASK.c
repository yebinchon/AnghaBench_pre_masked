
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int def_i2c_bus; int is_webcam; int has_msp34xx; } ;
struct em28xx {size_t model; TYPE_1__ board; int def_i2c_bus; int is_webcam; int has_msp34xx; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct em28xx*) ;

__attribute__((used)) static inline void FUNC_1(struct em28xx *VAR_1)
{
 VAR_1->board = VAR_0[VAR_1->model];
 VAR_1->has_msp34xx = VAR_1->board.has_msp34xx;
 VAR_1->is_webcam = VAR_1->board.is_webcam;

 FUNC_0(VAR_1);


 VAR_1->def_i2c_bus = VAR_1->board.def_i2c_bus;
}
