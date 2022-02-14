
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct SRingBufferDescriptor {int NumBuffers; struct SBufferHeader* Head; } ;
struct TYPE_2__ {int Number_of_entries_1; int Number_of_entries_2; int Address_of_first_entry_1; int Address_of_first_entry_2; } ;
struct SBufferHeader {struct SBufferHeader* Next; TYPE_1__ ngeneBuffer; int scList1; int scList2; int Buffer1; int Buffer2; } ;



__attribute__((used)) static int FUNC_0(struct SRingBufferDescriptor *VAR_0,
       struct SRingBufferDescriptor *VAR_1)
{




 u32 VAR_2 = VAR_1->NumBuffers;


 struct SBufferHeader *VAR_3 = VAR_1->Head;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3->Buffer2 = VAR_0->Head->Buffer1;
  VAR_3->scList2 = VAR_0->Head->scList1;
  VAR_3->ngeneBuffer.Address_of_first_entry_2 =
   VAR_0->Head->ngeneBuffer.
   Address_of_first_entry_1;
  VAR_3->ngeneBuffer.Number_of_entries_2 =
   VAR_0->Head->ngeneBuffer.Number_of_entries_1;
  VAR_3 = VAR_3->Next;
 }
 return 0;
}
