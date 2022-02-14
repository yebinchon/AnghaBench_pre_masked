
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapleq {TYPE_1__* recvbuf; struct maple_device* dev; int list; } ;
struct maple_device {int unit; int port; int dev; } ;
struct TYPE_2__ {int * bufx; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (struct mapleq*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 struct mapleq* FUNC_4 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct mapleq *FUNC_5(struct maple_device *VAR_2)
{
 struct mapleq *VAR_3;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto failed_nomem;

 FUNC_0(&VAR_3->list);
 VAR_3->dev = VAR_2;
 VAR_3->recvbuf = FUNC_3(VAR_1, VAR_0);
 if (!VAR_3->recvbuf)
  goto failed_p2;
 VAR_3->recvbuf->buf = &((VAR_3->recvbuf->bufx)[0]);

 return VAR_3;

failed_p2:
 FUNC_2(VAR_3);
failed_nomem:
 FUNC_1(&VAR_2->dev, "could not allocate memory for device (%d, %d)\n",
  VAR_2->port, VAR_2->unit);
 return ((void*)0);
}
