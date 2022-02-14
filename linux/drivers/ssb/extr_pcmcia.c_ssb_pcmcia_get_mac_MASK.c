
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* TupleData; scalar_t__ TupleDataLen; } ;
typedef TYPE_1__ tuple_t ;
struct ssb_sprom {int il0mac; } ;
struct pcmcia_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3,
   tuple_t *VAR_4,
   void *VAR_5)
{
 struct ssb_sprom *VAR_6 = VAR_5;

 if (VAR_4->TupleData[0] != VAR_0)
  return -VAR_1;
 if (VAR_4->TupleDataLen != VAR_2 + 2)
  return -VAR_1;
 if (VAR_4->TupleData[1] != VAR_2)
  return -VAR_1;
 FUNC_0(VAR_6->il0mac, &VAR_4->TupleData[2], VAR_2);
 return 0;
}
