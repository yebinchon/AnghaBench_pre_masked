
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tifm_ms {int cmd_flags; TYPE_1__* req; } ;
struct tifm_dev {int lock; scalar_t__ addr; int dev; } ;
struct memstick_host {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int *,char*,unsigned int,int ) ;
 struct tifm_ms* FUNC_1 (struct memstick_host*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct tifm_dev*) ;
 int FUNC_6 (struct tifm_ms*) ;
 int FUNC_7 (struct tifm_ms*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct tifm_dev *VAR_11)
{
 struct tifm_ms *VAR_12;
 unsigned int VAR_13 = 0;
 int VAR_14 = 1;

 FUNC_3(&VAR_11->lock);
 VAR_12 = FUNC_1((struct memstick_host *)FUNC_5(VAR_11));
 VAR_13 = FUNC_2(VAR_11->addr + VAR_4);
 FUNC_0(&VAR_11->dev, "host event: host_status %x, flags %x\n",
  VAR_13, VAR_12->cmd_flags);

 if (VAR_12->req) {
  if (VAR_13 & VAR_9)
   VAR_12->req->error = -VAR_3;
  else if (VAR_13 & VAR_6)
   VAR_12->req->error = -VAR_2;

  if (VAR_13 & VAR_8)
   VAR_12->cmd_flags |= VAR_1;

  if (VAR_13 & VAR_7)
   VAR_12->cmd_flags |= VAR_0;

  VAR_14 = FUNC_6(VAR_12);

 }

 FUNC_8(VAR_10 | FUNC_2(VAR_11->addr + VAR_5),
        VAR_11->addr + VAR_5);

 if (!VAR_14)
  FUNC_7(VAR_12);

 FUNC_4(&VAR_11->lock);
 return;
}
