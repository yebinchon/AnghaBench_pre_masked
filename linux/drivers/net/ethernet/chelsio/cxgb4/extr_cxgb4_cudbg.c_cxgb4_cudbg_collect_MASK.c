
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cudbg_init {int outbuf_size; scalar_t__ compress_type; void* outbuf; struct adapter* adap; } ;
struct cudbg_hdr {int hdr_len; int max_entities; scalar_t__ compress_type; int data_len; int dump_type; int chip_ver; int minor_ver; int major_ver; int signature; } ;
struct cudbg_entity_hdr {int dummy; } ;
struct cudbg_buffer {int size; int offset; void* data; int member_0; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct cudbg_init*) ;
 int FUNC_2 (struct cudbg_init*) ;
 int FUNC_3 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct cudbg_init*,struct cudbg_buffer*,int ,int ,void*,int*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct cudbg_init*,int ,int) ;

int FUNC_7(struct adapter *VAR_12, void *VAR_13, u32 *VAR_14,
   u32 VAR_15)
{
 struct cudbg_buffer VAR_16 = { 0 };
 u32 VAR_17, VAR_18, VAR_19 = 0;
 struct cudbg_init VAR_20;
 struct cudbg_hdr *VAR_21;
 int VAR_22;

 VAR_17 = *VAR_14;

 FUNC_6(&VAR_20, 0, sizeof(struct cudbg_init));
 VAR_20.adap = VAR_12;
 VAR_20.outbuf = VAR_13;
 VAR_20.outbuf_size = VAR_17;

 VAR_16.data = VAR_13;
 VAR_16.size = VAR_17;
 VAR_16.offset = 0;

 VAR_21 = (struct cudbg_hdr *)VAR_13;
 VAR_21->signature = VAR_6;
 VAR_21->hdr_len = sizeof(struct cudbg_hdr);
 VAR_21->major_ver = VAR_3;
 VAR_21->minor_ver = VAR_5;
 VAR_21->max_entities = VAR_4;
 VAR_21->chip_ver = VAR_12->params.chip;
 VAR_21->dump_type = VAR_2;

 VAR_18 = sizeof(struct cudbg_hdr) +
     sizeof(struct cudbg_entity_hdr) *
     VAR_21->max_entities;
 if (VAR_17 < VAR_18)
  return -VAR_9;

 VAR_22 = FUNC_3();
 if (VAR_22) {

  VAR_20.compress_type = VAR_1;
  VAR_22 = FUNC_1(&VAR_20);
  if (VAR_22) {

   FUNC_5(VAR_12->pdev_dev,
     "Fail allocating compression buffer ret: %d.  Continuing without compression.\n",
     VAR_22);
   VAR_20.compress_type = VAR_0;
   VAR_22 = 0;
  }
 } else {
  VAR_20.compress_type = VAR_0;
 }

 VAR_21->compress_type = VAR_20.compress_type;
 VAR_16.offset += VAR_18;
 VAR_19 = VAR_16.offset;

 if (VAR_15 & VAR_7)
  FUNC_4(&VAR_20, &VAR_16,
        VAR_10,
        FUNC_0(VAR_10),
        VAR_13,
        &VAR_19);

 if (VAR_15 & VAR_8)
  FUNC_4(&VAR_20, &VAR_16,
        VAR_11,
        FUNC_0(VAR_11),
        VAR_13,
        &VAR_19);

 FUNC_2(&VAR_20);
 VAR_21->data_len = VAR_19;
 if (VAR_20.compress_type != VAR_0)
  *VAR_14 = VAR_17;
 else
  *VAR_14 = VAR_19;
 return 0;
}
