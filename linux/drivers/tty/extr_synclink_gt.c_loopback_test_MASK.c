
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct tty_struct {int dummy; } ;
struct TYPE_5__ {struct tty_struct* tty; } ;
struct TYPE_6__ {int data_rate; int loopback; int mode; } ;
struct slgt_info {int tmp_rbuf_count; int init_error; TYPE_1__ port; TYPE_2__ params; int lock; int tmp_rbuf; } ;
typedef int params ;
typedef TYPE_2__ MGSL_PARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct slgt_info*) ;
 scalar_t__ FUNC_1 (struct slgt_info*) ;
 scalar_t__ FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (struct slgt_info*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct slgt_info*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_11(struct slgt_info *VAR_4)
{


 unsigned long VAR_5;
 u16 VAR_6 = 20;
 unsigned char VAR_7[20];
 int VAR_8 = -VAR_1;
 unsigned long VAR_9;

 struct tty_struct *VAR_10 = VAR_4->port.tty;
 MGSL_PARAMS VAR_11;

 FUNC_3(&VAR_11, &VAR_4->params, sizeof(VAR_11));

 VAR_4->params.mode = VAR_2;
 VAR_4->params.data_rate = 921600;
 VAR_4->params.loopback = 1;
 VAR_4->port.tty = ((void*)0);


 for (VAR_6 = 0; VAR_6 < 20; ++VAR_6)
  VAR_7[VAR_6] = (unsigned char)VAR_6;

 VAR_4->tmp_rbuf_count = 0;
 FUNC_4(VAR_4->tmp_rbuf, 0, 20);


 FUNC_8(&VAR_4->lock,VAR_9);
 FUNC_0(VAR_4);
 FUNC_7(VAR_4);
 FUNC_10(VAR_4, VAR_7, VAR_6);
 FUNC_9(&VAR_4->lock, VAR_9);


 for (VAR_5 = 100; VAR_5; --VAR_5) {
  FUNC_5(10);
  if (FUNC_1(VAR_4)) {
   VAR_8 = 0;
   break;
  }
 }


 if (!VAR_8 && (VAR_4->tmp_rbuf_count != VAR_6 ||
    FUNC_2(VAR_7, VAR_4->tmp_rbuf, VAR_6))) {
  VAR_8 = -VAR_1;
 }

 FUNC_8(&VAR_4->lock,VAR_9);
 FUNC_6(VAR_4);
 FUNC_9(&VAR_4->lock,VAR_9);

 FUNC_3(&VAR_4->params, &VAR_11, sizeof(VAR_4->params));
 VAR_4->port.tty = VAR_10;

 VAR_4->init_error = VAR_8 ? VAR_0 : 0;
 return VAR_8;
}
