
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dax_ctx {int ** pages; struct dax_ccb* ccb_buf; } ;
struct TYPE_2__ {scalar_t__ out_addr_type; scalar_t__ pri_addr_type; scalar_t__ sec_addr_type; scalar_t__ table_addr_type; scalar_t__ longccb; } ;
struct dax_ccb {TYPE_1__ hdr; scalar_t__ tbl; scalar_t__ sec; scalar_t__ pri; scalar_t__ out; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct dax_ctx*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dax_ctx *VAR_8, int VAR_9,
     int VAR_10, u64 *VAR_11)
{
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  struct dax_ccb *VAR_13 = &VAR_8->ccb_buf[VAR_12];







  if (VAR_13->hdr.out_addr_type == VAR_0) {
   FUNC_0("output");
   if (FUNC_1(VAR_13->out,
       &VAR_8->pages[VAR_12 + VAR_9][VAR_4]) != 0) {
    *VAR_11 = (u64)VAR_13->out;
    goto error;
   }
   VAR_13->hdr.out_addr_type = VAR_1;
  }

  if (VAR_13->hdr.pri_addr_type == VAR_0) {
   FUNC_0("input");
   if (FUNC_1(VAR_13->pri,
       &VAR_8->pages[VAR_12 + VAR_9][VAR_5]) != 0) {
    *VAR_11 = (u64)VAR_13->pri;
    goto error;
   }
   VAR_13->hdr.pri_addr_type = VAR_1;
  }

  if (VAR_13->hdr.sec_addr_type == VAR_0) {
   FUNC_0("sec input");
   if (FUNC_1(VAR_13->sec,
       &VAR_8->pages[VAR_12 + VAR_9][VAR_6]) != 0) {
    *VAR_11 = (u64)VAR_13->sec;
    goto error;
   }
   VAR_13->hdr.sec_addr_type = VAR_1;
  }

  if (VAR_13->hdr.table_addr_type == VAR_0) {
   FUNC_0("tbl");
   if (FUNC_1(VAR_13->tbl,
       &VAR_8->pages[VAR_12 + VAR_9][VAR_7]) != 0) {
    *VAR_11 = (u64)VAR_13->tbl;
    goto error;
   }
   VAR_13->hdr.table_addr_type = VAR_1;
  }


  if (VAR_13->hdr.longccb)
   VAR_12++;
 }
 return VAR_3;

error:
 FUNC_2(VAR_8, VAR_9, VAR_10);
 return VAR_2;
}
