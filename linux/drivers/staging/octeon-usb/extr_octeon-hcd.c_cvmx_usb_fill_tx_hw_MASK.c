
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct octeon_hcd {int index; } ;
struct cvmx_usb_tx_fifo {int head; int tail; TYPE_1__* entry; } ;
struct TYPE_2__ {int address; int size; int channel; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct octeon_hcd *VAR_1,
          struct cvmx_usb_tx_fifo *VAR_2, int VAR_3)
{




 while (VAR_3 && (VAR_2->head != VAR_2->tail)) {
  int VAR_4 = VAR_2->tail;
  const u32 *VAR_5 = FUNC_2(VAR_2->entry[VAR_4].address);
  u64 VAR_6 = FUNC_1(VAR_2->entry[VAR_4].channel,
         VAR_1->index) ^ 4;
  int VAR_7 = VAR_3;


  if (VAR_2->entry[VAR_4].size <= VAR_3) {
   VAR_7 = VAR_2->entry[VAR_4].size;
   VAR_2->tail++;
   if (VAR_2->tail > VAR_0)
    VAR_2->tail = 0;
  }


  VAR_3 -= VAR_7;
  VAR_2->entry[VAR_4].address += VAR_7 * 4;
  VAR_2->entry[VAR_4].size -= VAR_7;





  while (VAR_7 > 3) {
   FUNC_4(VAR_6, *VAR_5++);
   FUNC_4(VAR_6, *VAR_5++);
   FUNC_4(VAR_6, *VAR_5++);
   FUNC_3(
     FUNC_0(VAR_1->index));
   VAR_7 -= 3;
  }
  FUNC_4(VAR_6, *VAR_5++);
  if (--VAR_7) {
   FUNC_4(VAR_6, *VAR_5++);
   if (--VAR_7)
    FUNC_4(VAR_6, *VAR_5++);
  }
  FUNC_3(FUNC_0(VAR_1->index));
 }
 return VAR_2->head != VAR_2->tail;
}
