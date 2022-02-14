
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memcard {int blocklen; int readcnt; int blockread; } ;
struct mapleq {TYPE_1__* recvbuf; struct maple_device* dev; } ;
struct maple_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ buf; } ;


 struct memcard* FUNC_0 (struct maple_device*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mapleq *VAR_0)
{
 struct maple_device *VAR_1;
 struct memcard *VAR_2;

 VAR_1 = VAR_0->dev;
 VAR_2 = FUNC_0(VAR_1);


 if (FUNC_2(!VAR_2->blockread))
  return;

 FUNC_1(VAR_2->blockread, VAR_0->recvbuf->buf + 12,
  VAR_2->blocklen/VAR_2->readcnt);

}
