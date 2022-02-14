
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* page_offset; scalar_t__ wr_idx; scalar_t__ rd_idx; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int FUNC_1 () ;
 unsigned long VAR_6 ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 unsigned long* FUNC_6 (int ) ;

int FUNC_7(void)
{
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_4 = (VAR_6 * VAR_2)/
    VAR_1;
 VAR_5 =
  (unsigned long)FUNC_6(FUNC_0(VAR_2,
        VAR_6));
 if (!VAR_5) {
  FUNC_3("fnic: Failed to allocate memory for "
         "FC Control Trace Buf\n");
  VAR_8 = -VAR_0;
  goto err_fnic_fc_ctlr_trace_buf_init;
 }

 FUNC_2((void *)VAR_5, 0,
   VAR_6 * VAR_2);


 VAR_3.page_offset =
  FUNC_6(FUNC_0(VAR_4,
       sizeof(unsigned long)));
 if (!VAR_3.page_offset) {
  FUNC_3("fnic:Failed to allocate memory for page_offset\n");
  if (VAR_5) {
   FUNC_3("fnic: Freeing FC Control Trace Buf\n");
   FUNC_5((void *)VAR_5);
   VAR_5 = 0;
  }
  VAR_8 = -VAR_0;
  goto err_fnic_fc_ctlr_trace_buf_init;
 }
 FUNC_2((void *)VAR_3.page_offset, 0,
        (VAR_4 * sizeof(unsigned long)));

 VAR_3.rd_idx = VAR_3.wr_idx = 0;
 VAR_7 = VAR_5;





 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_3.page_offset[VAR_9] = VAR_7;
  VAR_7 += VAR_1;
 }
 FUNC_1();
 FUNC_4("fnic: Successfully Initialized FC_CTLR Trace Buffer\n");
 return VAR_8;

err_fnic_fc_ctlr_trace_buf_init:
 return VAR_8;
}
