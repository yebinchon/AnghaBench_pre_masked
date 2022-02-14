
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct fc_trace_hdr {int dummy; } ;
struct TYPE_5__ {scalar_t__ buffer; } ;
typedef TYPE_1__ fnic_dbgfs_t ;
struct TYPE_6__ {int wr_idx; int rd_idx; scalar_t__* page_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_trace_hdr*,TYPE_1__*,int*,int ) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int,char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(fnic_dbgfs_t *VAR_6, u8 VAR_7)
{
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0, VAR_12;
 struct fc_trace_hdr *VAR_13;
 char *VAR_14;

 FUNC_3(&VAR_4, VAR_10);
 if (VAR_2.wr_idx == VAR_2.rd_idx) {
  FUNC_4(&VAR_4, VAR_10);
  FUNC_1("fnic: Buffer is empty\n");
  return 0;
 }
 VAR_8 = VAR_2.rd_idx;
 VAR_9 = VAR_2.wr_idx;
 if (VAR_7 == 0) {
  VAR_11 += FUNC_2(VAR_6->buffer + VAR_11,
   (VAR_5 * VAR_1 * 3) - VAR_11,
   "Time Stamp (UTC)\t\t"
   "Host No:   F Type:  len:     FCoE_FRAME:\n");
 }

 while (VAR_8 != VAR_9) {
  VAR_13 = (struct fc_trace_hdr *)
   VAR_2.page_offset[VAR_8];
  if (!VAR_13) {
   FUNC_1("fnic: Rd data is NULL\n");
   FUNC_4(&VAR_4, VAR_10);
   return 0;
  }
  if (VAR_7 == 0) {
   FUNC_0(VAR_13,
    VAR_6, &VAR_11, VAR_7);
  } else {
   VAR_14 = (char *)VAR_13;
   for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
    VAR_11 += FUNC_2(VAR_6->buffer + VAR_11,
    (VAR_5 * VAR_1 * 3)
    - VAR_11, "%02x", VAR_14[VAR_12] & 0xff);
   }
   VAR_11 += FUNC_2(VAR_6->buffer + VAR_11,
    (VAR_5 * VAR_1 * 3) - VAR_11,
    "\n");
  }
  VAR_8++;
  if (VAR_8 > (VAR_3 - 1))
   VAR_8 = 0;
 }

 FUNC_4(&VAR_4, VAR_10);
 return VAR_11;
}
