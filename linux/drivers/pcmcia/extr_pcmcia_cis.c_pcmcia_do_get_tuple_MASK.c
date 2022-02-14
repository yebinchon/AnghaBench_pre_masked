
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TupleDataLen; int TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_loop_get {scalar_t__* buf; int len; } ;
struct pcmcia_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_1, tuple_t *VAR_2,
          void *VAR_3)
{
 struct pcmcia_loop_get *VAR_4 = VAR_3;

 *VAR_4->buf = FUNC_1(VAR_2->TupleDataLen, VAR_0);
 if (*VAR_4->buf) {
  VAR_4->len = VAR_2->TupleDataLen;
  FUNC_2(*VAR_4->buf, VAR_2->TupleData, VAR_2->TupleDataLen);
 } else
  FUNC_0(&VAR_1->dev, "do_get_tuple: out of memory\n");
 return 0;
}
