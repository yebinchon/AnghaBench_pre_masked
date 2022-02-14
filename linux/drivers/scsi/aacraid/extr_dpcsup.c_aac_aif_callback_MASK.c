
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_fib {int dummy; } ;
struct fib {TYPE_2__* hw_fib_va; struct aac_dev* dev; } ;
struct aac_fibhdr {int dummy; } ;
struct aac_dev {scalar_t__ sa_firmware; } ;
struct aac_aifcmd {int command; } ;
typedef int fib_callback ;
struct TYPE_3__ {int XferState; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int ,struct fib*,int,int ,int ,int,int ,struct fib*) ;
 int FUNC_5 (struct aac_dev*,int ,int,int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct fib*) ;

__attribute__((used)) static void FUNC_8(void *VAR_4, struct fib * VAR_5)
{
 struct fib *VAR_6;
 struct aac_dev *VAR_7;
 struct aac_aifcmd *VAR_8;
 int VAR_9;

 VAR_6 = (struct fib *)VAR_4;
 FUNC_0(VAR_5 == ((void*)0));
 VAR_7 = VAR_5->dev;

 if ((VAR_5->hw_fib_va->header.XferState &
     FUNC_6(VAR_3)) ||
  VAR_7->sa_firmware) {
  FUNC_1(VAR_5);
  FUNC_2(VAR_5);
  return;
 }

 FUNC_5(VAR_7, 0, 1, 0, VAR_5->hw_fib_va);

 FUNC_3(VAR_6);
 VAR_8 = (struct aac_aifcmd *) FUNC_7(VAR_6);
 VAR_8->command = FUNC_6(VAR_0);

 VAR_9 = FUNC_4(VAR_1,
  VAR_6,
  sizeof(struct hw_fib)-sizeof(struct aac_fibhdr),
  VAR_2,
  0, 1,
  (fib_callback)FUNC_8, VAR_6);
}
