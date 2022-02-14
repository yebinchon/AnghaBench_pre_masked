
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_6__ {int owner; int * ops; TYPE_1__ dev; } ;
struct vrc4171_socket {int slot; TYPE_3__ pcmcia_socket; int name; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct vrc4171_socket* VAR_11 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct vrc4171_socket *VAR_12;
 int VAR_13, VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (VAR_13 == VAR_1 && VAR_10 == VAR_4)
   continue;

  VAR_12 = &VAR_11[VAR_13];
  if (VAR_12->slot != VAR_6) {
   uint8_t VAR_15;

   switch (VAR_12->slot) {
   case 128:
    VAR_15 = FUNC_0(VAR_13, VAR_3);
    VAR_15 &= 0x1f;
    FUNC_1(VAR_13, VAR_3, VAR_15);
    break;
   case 129:
    VAR_15 = FUNC_0(VAR_13, VAR_3);
    VAR_15 &= 0xc0;
    FUNC_1(VAR_13, VAR_3, VAR_15);
    break;
   default:
    break;
   }

   FUNC_3(VAR_13);
   continue;
  }

  FUNC_4(VAR_12->name, "NEC VRC4171 Card Slot %1c", 'A' + VAR_13);
  VAR_12->pcmcia_socket.dev.parent = &VAR_8.dev;
  VAR_12->pcmcia_socket.ops = &VAR_9;
  VAR_12->pcmcia_socket.owner = VAR_7;

  VAR_14 = FUNC_2(&VAR_12->pcmcia_socket);
  if (VAR_14 < 0)
   return VAR_14;

  FUNC_1(VAR_13, VAR_3, 0);
  FUNC_1(VAR_13, VAR_2, 0);

  VAR_12->slot = VAR_5;
 }

 return 0;
}
