
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {int intr_interval; int net; TYPE_1__* usb; } ;
typedef TYPE_2__ pegasus_t ;
struct TYPE_7__ {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static inline void FUNC_3(pegasus_t *VAR_2)
{
 u16 VAR_3;
 u8 VAR_4;

 FUNC_1(VAR_2, 4, &VAR_3);
 VAR_4 = VAR_3 >> 8;
 if (VAR_2->usb->speed != VAR_0) {
  if (VAR_4 < 0x80) {
   FUNC_0(VAR_2, VAR_1, VAR_2->net,
       "intr interval changed from %ums to %ums\n",
       VAR_4, 0x80);
   VAR_4 = 0x80;
   VAR_3 = (VAR_3 & 0x00FF) | ((u16)VAR_4 << 8);



  }
 }
 VAR_2->intr_interval = VAR_4;
}
