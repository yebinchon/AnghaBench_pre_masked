
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sunxi_ir {unsigned int fifo_size; int ir_lock; TYPE_1__* rc; scalar_t__ base; } ;
struct ir_raw_event {int pulse; unsigned char duration; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {unsigned char rx_resolution; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,struct ir_raw_event*) ;
 unsigned char FUNC_5 (scalar_t__) ;
 unsigned long FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 unsigned long VAR_9;
 unsigned char VAR_10;
 unsigned int VAR_11, VAR_12;
 struct sunxi_ir *VAR_13 = VAR_8;
 struct ir_raw_event VAR_14 = {};

 FUNC_7(&VAR_13->ir_lock);

 VAR_9 = FUNC_6(VAR_13->base + VAR_6);


 FUNC_9(VAR_9 | VAR_1, VAR_13->base + VAR_6);

 if (VAR_9 & (VAR_2 | VAR_4)) {

  VAR_12 = FUNC_0(VAR_9);

  VAR_12 = VAR_12 > VAR_13->fifo_size ? VAR_13->fifo_size : VAR_12;

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {

   VAR_10 = FUNC_5(VAR_13->base + VAR_5);
   VAR_14.pulse = (VAR_10 & 0x80) != 0;
   VAR_14.duration = ((VAR_10 & 0x7f) + 1) *
      VAR_13->rc->rx_resolution;
   FUNC_4(VAR_13->rc, &VAR_14);
  }
 }

 if (VAR_9 & VAR_3) {
  FUNC_2(VAR_13->rc);
 } else if (VAR_9 & VAR_4) {
  FUNC_3(VAR_13->rc, 1);
  FUNC_1(VAR_13->rc);
 }

 FUNC_8(&VAR_13->ir_lock);

 return VAR_0;
}
