
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmci_datagram {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vmci_datagram*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,struct vmci_datagram*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

int FUNC_5(struct vmci_datagram *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;


 if (VAR_6 == ((void*)0))
  return VAR_1;
 FUNC_3(&VAR_5, VAR_7);

 if (VAR_4) {
  FUNC_2(VAR_4->iobase + VAR_0,
        VAR_6, FUNC_0(VAR_6));
  VAR_8 = FUNC_1(VAR_4->iobase + VAR_3);
 } else {
  VAR_8 = VAR_2;
 }

 FUNC_4(&VAR_5, VAR_7);

 return VAR_8;
}
