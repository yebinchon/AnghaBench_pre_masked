
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {scalar_t__ c_data_len; scalar_t__ c_data_offs; int * c_buf; int ** buffer_storage; int * c_data_ptr; int stream; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pvr2_ioread*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,struct pvr2_ioread*,int) ;

__attribute__((used)) static int FUNC_7(struct pvr2_ioread *VAR_1)
{
 int VAR_2;

 while (VAR_1->c_data_len <= VAR_1->c_data_offs) {
  if (VAR_1->c_buf) {

   VAR_2 = FUNC_3(VAR_1->c_buf);
   if (VAR_2 < 0) {

    FUNC_6(VAR_0,
        "/*---TRACE_READ---*/ pvr2_ioread_read id=%p queue_error=%d",
        VAR_1,VAR_2);
    FUNC_4(VAR_1);
    return 0;
   }
   VAR_1->c_buf = ((void*)0);
   VAR_1->c_data_ptr = ((void*)0);
   VAR_1->c_data_len = 0;
   VAR_1->c_data_offs = 0;
  }

  VAR_1->c_buf = FUNC_5(VAR_1->stream);
  if (!VAR_1->c_buf) break;
  VAR_1->c_data_len = FUNC_0(VAR_1->c_buf);
  if (!VAR_1->c_data_len) {

   VAR_2 = FUNC_2(VAR_1->c_buf);
   if (VAR_2 < 0) {

    FUNC_6(VAR_0,
        "/*---TRACE_READ---*/ pvr2_ioread_read id=%p buffer_error=%d",
        VAR_1,VAR_2);
    FUNC_4(VAR_1);

    return 0;
   }

   continue;
  }
  VAR_1->c_data_offs = 0;
  VAR_1->c_data_ptr = VAR_1->buffer_storage[
   FUNC_1(VAR_1->c_buf)];
 }
 return !0;
}
