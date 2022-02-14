
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int rx_buf_count; unsigned int current_rx_buf; TYPE_2__* rx_buf_list_ex; TYPE_1__* rx_buf_list; } ;
struct TYPE_7__ {int phys_entry; } ;
struct TYPE_6__ {int status; } ;
typedef TYPE_3__ SLMP_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(SLMP_INFO *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 bool VAR_5 = 0;

 while(!VAR_5) {

  VAR_2->rx_buf_list[VAR_3].status = 0xff;

         if (VAR_3 == VAR_4) {
                 VAR_5 = 1;

   FUNC_0(VAR_2, VAR_1 + VAR_0, VAR_2->rx_buf_list_ex[VAR_3].phys_entry);
         }

         VAR_3++;
  if (VAR_3 == VAR_2->rx_buf_count)
   VAR_3 = 0;
 }


 VAR_2->current_rx_buf = VAR_3;
}
