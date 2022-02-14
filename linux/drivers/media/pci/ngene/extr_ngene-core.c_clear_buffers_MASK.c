
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct SBufferHeader* Head; } ;
struct ngene_channel {int mode; int DataFormatFlags; int Capture1Length; TYPE_1__ TSIdleBuffer; scalar_t__ AudioDTOUpdated; int AudioDTOValue; struct SBufferHeader* nextBuffer; } ;
struct TYPE_6__ {int DTOUpdate; } ;
struct TYPE_5__ {TYPE_3__ SR; } ;
struct SBufferHeader {struct SBufferHeader* Next; int Buffer1; TYPE_2__ ngeneBuffer; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ngene_channel *VAR_1)
{
 struct SBufferHeader *VAR_2 = VAR_1->nextBuffer;

 do {
  FUNC_1(&VAR_2->ngeneBuffer.SR, 0, sizeof(VAR_2->ngeneBuffer.SR));
  if (VAR_1->mode & VAR_0)
   FUNC_0(VAR_2->Buffer1,
         VAR_1->Capture1Length,
         VAR_1->DataFormatFlags);
  VAR_2 = VAR_2->Next;
 } while (VAR_2 != VAR_1->nextBuffer);

 if (VAR_1->mode & VAR_0) {
  VAR_1->nextBuffer->ngeneBuffer.SR.DTOUpdate =
   VAR_1->AudioDTOValue;
  VAR_1->AudioDTOUpdated = 0;

  VAR_2 = VAR_1->TSIdleBuffer.Head;

  do {
   FUNC_1(&VAR_2->ngeneBuffer.SR, 0,
          sizeof(VAR_2->ngeneBuffer.SR));
   FUNC_0(VAR_2->Buffer1,
         VAR_1->Capture1Length,
         VAR_1->DataFormatFlags);
   VAR_2 = VAR_2->Next;
  } while (VAR_2 != VAR_1->TSIdleBuffer.Head);
 }
}
