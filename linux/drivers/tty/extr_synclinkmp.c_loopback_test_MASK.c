
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tty_struct {int dummy; } ;
struct TYPE_13__ {struct tty_struct* tty; } ;
struct TYPE_12__ {int clock_speed; } ;
struct TYPE_14__ {int tx_count; int tmp_rx_buf_count; TYPE_2__ port; TYPE_1__ params; int lock; int tmp_rx_buf; int init_error; } ;
typedef TYPE_3__ SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_3__*,unsigned char*,int) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static bool FUNC_12(SLMP_INFO *VAR_2)
{


 unsigned long VAR_3;
 u16 VAR_4 = 20;
 unsigned char VAR_5[20];
 bool VAR_6 = 0;
 unsigned long VAR_7;

 struct tty_struct *VAR_8 = VAR_2->port.tty;
 u32 VAR_9 = VAR_2->params.clock_speed;

 VAR_2->params.clock_speed = 3686400;
 VAR_2->port.tty = ((void*)0);


 VAR_2->init_error = VAR_0;


 for (VAR_4 = 0; VAR_4 < 20;++VAR_4)
  VAR_5[VAR_4] = (unsigned char)VAR_4;

 FUNC_3(VAR_2->tmp_rx_buf,0,20);


 FUNC_8(&VAR_2->lock,VAR_7);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2,1);
        FUNC_7(VAR_2);
 VAR_2->tx_count = VAR_4;
 FUNC_10(VAR_2,VAR_5,VAR_4);
 FUNC_11(VAR_2);
 FUNC_9(&VAR_2->lock,VAR_7);



 for ( VAR_3 = 100; VAR_3; --VAR_3 ) {
  FUNC_4(10);

  if (FUNC_6(VAR_2)) {
   VAR_6 = 1;
   break;
  }
 }


 if (VAR_6 &&
     ( VAR_2->tmp_rx_buf_count != VAR_4 ||
       FUNC_2(VAR_5, VAR_2->tmp_rx_buf,VAR_4))) {
  VAR_6 = 0;
 }

 FUNC_8(&VAR_2->lock,VAR_7);
 FUNC_5(VAR_2);
 FUNC_9(&VAR_2->lock,VAR_7);

 VAR_2->params.clock_speed = VAR_9;
 VAR_2->port.tty = VAR_8;

 return VAR_6;
}
