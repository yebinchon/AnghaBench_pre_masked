
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {int sync_state; unsigned int c_data_len; unsigned int c_data_offs; size_t sync_buf_offs; size_t sync_key_len; scalar_t__* c_data_ptr; scalar_t__* sync_key_ptr; unsigned int sync_trashed_count; int mutex; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pvr2_ioread*) ;
 int FUNC_3 (int ,char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_4(struct pvr2_ioread *VAR_2)
{
 unsigned int VAR_3;
 if (!VAR_2->enabled) return;
 if (VAR_2->sync_state != 1) return;




 FUNC_0(&VAR_2->mutex);
 while (1) {

  if (!FUNC_2(VAR_2)) break;
  if (!VAR_2->c_data_len) break;



  for (VAR_3 = VAR_2->c_data_offs; VAR_3 < VAR_2->c_data_len; VAR_3++) {
   if (VAR_2->sync_buf_offs >= VAR_2->sync_key_len) break;
   if (VAR_2->c_data_ptr[VAR_3] ==
       VAR_2->sync_key_ptr[VAR_2->sync_buf_offs]) {

    (VAR_2->sync_buf_offs)++;
   } else {

    VAR_2->sync_buf_offs = 0;
   }
  }


  VAR_2->c_data_offs += VAR_3;
  VAR_2->sync_trashed_count += VAR_3;


  if (VAR_2->sync_buf_offs >= VAR_2->sync_key_len) {
   VAR_2->sync_trashed_count -= VAR_2->sync_key_len;
   FUNC_3(VAR_0,
       "/*---TRACE_READ---*/ sync_state <== 2 (skipped %u bytes)",
       VAR_2->sync_trashed_count);
   VAR_2->sync_state = 2;
   VAR_2->sync_buf_offs = 0;
   break;
  }

  if (VAR_2->c_data_offs < VAR_2->c_data_len) {

   FUNC_3(VAR_1,
       "ERROR: pvr2_ioread filter sync problem len=%u offs=%u",
       VAR_2->c_data_len,VAR_2->c_data_offs);


   break;
  }

  continue;
 }
 FUNC_1(&VAR_2->mutex);
}
