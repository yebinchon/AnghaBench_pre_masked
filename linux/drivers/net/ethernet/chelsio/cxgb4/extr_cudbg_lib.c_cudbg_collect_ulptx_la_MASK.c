
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cudbg_ver_hdr {int size; int revision; int signature; } ;
struct cudbg_ulptx_la {void*** rddata_asic; void** rdptr_asic; void*** rd_data; void** rddata; void** wrptr; void** rdptr; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 void* FUNC_2 (struct adapter*,scalar_t__) ;
 int FUNC_3 (struct adapter*,scalar_t__,int) ;

int FUNC_4(struct cudbg_init *VAR_15,
      struct cudbg_buffer *VAR_16,
      struct cudbg_error *VAR_17)
{
 struct adapter *VAR_18 = VAR_15->adap;
 struct cudbg_buffer VAR_19 = { 0 };
 struct cudbg_ulptx_la *VAR_20;
 struct cudbg_ver_hdr *VAR_21;
 u32 VAR_22, VAR_23;
 int VAR_24;

 VAR_24 = FUNC_0(VAR_15, VAR_16,
       sizeof(struct cudbg_ver_hdr) +
       sizeof(struct cudbg_ulptx_la),
       &VAR_19);
 if (VAR_24)
  return VAR_24;

 VAR_21 = (struct cudbg_ver_hdr *)VAR_19.data;
 VAR_21->signature = VAR_0;
 VAR_21->revision = VAR_4;
 VAR_21->size = sizeof(struct cudbg_ulptx_la);

 VAR_20 = (struct cudbg_ulptx_la *)(VAR_19.data +
        sizeof(*VAR_21));
 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++) {
  VAR_20->rdptr[VAR_22] = FUNC_2(VAR_18,
            VAR_13 +
            0x10 * VAR_22);
  VAR_20->wrptr[VAR_22] = FUNC_2(VAR_18,
            VAR_14 +
            0x10 * VAR_22);
  VAR_20->rddata[VAR_22] = FUNC_2(VAR_18,
             VAR_12 +
             0x10 * VAR_22);
  for (VAR_23 = 0; VAR_23 < VAR_3; VAR_23++)
   VAR_20->rd_data[VAR_22][VAR_23] =
    FUNC_2(VAR_18,
         VAR_12 + 0x10 * VAR_22);
 }

 for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
  FUNC_3(VAR_18, VAR_11, 0x1);
  VAR_20->rdptr_asic[VAR_22] =
    FUNC_2(VAR_18, VAR_11);
  VAR_20->rddata_asic[VAR_22][0] =
    FUNC_2(VAR_18, VAR_6);
  VAR_20->rddata_asic[VAR_22][1] =
    FUNC_2(VAR_18, VAR_7);
  VAR_20->rddata_asic[VAR_22][2] =
    FUNC_2(VAR_18, VAR_8);
  VAR_20->rddata_asic[VAR_22][3] =
    FUNC_2(VAR_18, VAR_9);
  VAR_20->rddata_asic[VAR_22][4] =
    FUNC_2(VAR_18, VAR_10);
  VAR_20->rddata_asic[VAR_22][5] =
    FUNC_2(VAR_18, VAR_5);
 }

 return FUNC_1(VAR_15, &VAR_19, VAR_16);
}
