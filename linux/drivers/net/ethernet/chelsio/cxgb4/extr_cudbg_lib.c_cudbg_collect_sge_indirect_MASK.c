
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sge_qbase_reg_field {int vfcount; void** reg_data; void* reg_addr; } ;
struct ireg_field {void* ireg_local_offset; void* ireg_offset_range; void* ireg_data; void* ireg_addr; } ;
struct ireg_buf {int * outbuf; struct ireg_field tp_pio; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct TYPE_3__ {int vfcount; } ;
struct TYPE_4__ {TYPE_1__ arch; int chip; } ;
struct adapter {TYPE_2__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct adapter*,struct sge_qbase_reg_field*,int,int) ;
 int FUNC_3 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_4 (struct adapter*,void*,void*,int *,void*,void*) ;
 void*** VAR_3 ;
 void** VAR_4 ;

int FUNC_5(struct cudbg_init *VAR_5,
          struct cudbg_buffer *VAR_6,
          struct cudbg_error *VAR_7)
{
 struct adapter *VAR_8 = VAR_5->adap;
 struct cudbg_buffer VAR_9 = { 0 };
 struct sge_qbase_reg_field *VAR_10;
 struct ireg_buf *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_1(VAR_5, VAR_6,
       sizeof(*VAR_11) * 2 + sizeof(*VAR_10),
       &VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_11 = (struct ireg_buf *)VAR_9.data;
 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  struct ireg_field *VAR_14 = &VAR_11->tp_pio;
  u32 *VAR_15 = VAR_11->outbuf;

  VAR_14->ireg_addr = VAR_3[VAR_12][0];
  VAR_14->ireg_data = VAR_3[VAR_12][1];
  VAR_14->ireg_local_offset = VAR_3[VAR_12][2];
  VAR_14->ireg_offset_range = VAR_3[VAR_12][3];
  FUNC_4(VAR_8,
     VAR_14->ireg_addr,
     VAR_14->ireg_data,
     VAR_15,
     VAR_14->ireg_offset_range,
     VAR_14->ireg_local_offset);
  VAR_11++;
 }

 if (FUNC_0(VAR_8->params.chip) > VAR_0) {
  VAR_10 = (struct sge_qbase_reg_field *)VAR_11;



  VAR_10->reg_addr = VAR_4[0];
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   VAR_10->reg_data[VAR_12] =
    VAR_4[VAR_12 + 1];

  for (VAR_12 = 0; VAR_12 <= VAR_1; VAR_12++)
   FUNC_2(VAR_8, VAR_10,
         VAR_12, 1);

  for (VAR_12 = 0; VAR_12 < VAR_8->params.arch.vfcount; VAR_12++)
   FUNC_2(VAR_8, VAR_10,
         VAR_12, 0);

  VAR_10->vfcount = VAR_8->params.arch.vfcount;
 }

 return FUNC_3(VAR_5, &VAR_9, VAR_6);
}
