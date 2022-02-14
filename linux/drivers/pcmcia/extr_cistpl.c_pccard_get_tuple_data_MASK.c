
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ TupleLink; scalar_t__ TupleOffset; scalar_t__ TupleDataLen; scalar_t__ CISOffset; int TupleData; scalar_t__ TupleDataMax; int Flags; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct pcmcia_socket*,int ,scalar_t__,int ,int ) ;

int FUNC_3(struct pcmcia_socket *VAR_2, tuple_t *VAR_3)
{
 u_int VAR_4;
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_3->TupleLink < VAR_3->TupleOffset)
  return -VAR_1;
 VAR_4 = VAR_3->TupleLink - VAR_3->TupleOffset;
 VAR_3->TupleDataLen = VAR_3->TupleLink;
 if (VAR_4 == 0)
  return 0;
 VAR_5 = FUNC_2(VAR_2, FUNC_0(VAR_3->Flags),
   VAR_3->CISOffset + VAR_3->TupleOffset,
   FUNC_1(VAR_4, (u_int) VAR_3->TupleDataMax),
   VAR_3->TupleData);
 if (VAR_5)
  return -1;
 return 0;
}
