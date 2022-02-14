
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* u32 ;
struct gfar_private {size_t cur_filer_idx; void** ftp_rqfcr; void** ftp_rqfpr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct gfar_private*,size_t,void*,void*) ;

__attribute__((used)) static void FUNC_1 (struct gfar_private *VAR_20, u64 VAR_21)
{
 u32 VAR_22 = 0x0, VAR_23 = VAR_0;

 if (VAR_21 & VAR_15) {
  VAR_22 = VAR_5 | VAR_2 |
        VAR_3 | VAR_1 | VAR_4;
  VAR_20->ftp_rqfpr[VAR_20->cur_filer_idx] = VAR_23;
  VAR_20->ftp_rqfcr[VAR_20->cur_filer_idx] = VAR_22;
  FUNC_0(VAR_20, VAR_20->cur_filer_idx, VAR_22, VAR_23);
  VAR_20->cur_filer_idx = VAR_20->cur_filer_idx - 1;

  VAR_22 = VAR_6 | VAR_2 |
        VAR_3 | VAR_1 | VAR_4;
  VAR_20->ftp_rqfpr[VAR_20->cur_filer_idx] = VAR_23;
  VAR_20->ftp_rqfcr[VAR_20->cur_filer_idx] = VAR_22;
  FUNC_0(VAR_20, VAR_20->cur_filer_idx, VAR_22, VAR_23);
  VAR_20->cur_filer_idx = VAR_20->cur_filer_idx - 1;
 }

 if (VAR_21 & VAR_19) {
  VAR_22 = VAR_12 | VAR_2 | VAR_3 |
        VAR_1 | VAR_4;
  FUNC_0(VAR_20, VAR_20->cur_filer_idx, VAR_22, VAR_23);
  VAR_20->ftp_rqfpr[VAR_20->cur_filer_idx] = VAR_23;
  VAR_20->ftp_rqfcr[VAR_20->cur_filer_idx] = VAR_22;
  VAR_20->cur_filer_idx = VAR_20->cur_filer_idx - 1;
 }

 if (VAR_21 & VAR_14) {
  VAR_22 = VAR_10 | VAR_2 | VAR_3 |
        VAR_1 | VAR_4;
  VAR_20->ftp_rqfpr[VAR_20->cur_filer_idx] = VAR_23;
  VAR_20->ftp_rqfcr[VAR_20->cur_filer_idx] = VAR_22;
  FUNC_0(VAR_20, VAR_20->cur_filer_idx, VAR_22, VAR_23);
  VAR_20->cur_filer_idx = VAR_20->cur_filer_idx - 1;
 }

 if (VAR_21 & (VAR_13)) {
  VAR_22 = VAR_7 | VAR_2 | VAR_3 |
        VAR_1 | VAR_4;
  VAR_20->ftp_rqfpr[VAR_20->cur_filer_idx] = VAR_23;
  VAR_20->ftp_rqfcr[VAR_20->cur_filer_idx] = VAR_22;
  FUNC_0(VAR_20, VAR_20->cur_filer_idx, VAR_22, VAR_23);
  VAR_20->cur_filer_idx = VAR_20->cur_filer_idx - 1;
 }

 if (VAR_21 & VAR_16) {
  VAR_22 = VAR_9 | VAR_2 | VAR_3 |
        VAR_1 | VAR_4;
  VAR_20->ftp_rqfpr[VAR_20->cur_filer_idx] = VAR_23;
  VAR_20->ftp_rqfcr[VAR_20->cur_filer_idx] = VAR_22;
  FUNC_0(VAR_20, VAR_20->cur_filer_idx, VAR_22, VAR_23);
  VAR_20->cur_filer_idx = VAR_20->cur_filer_idx - 1;
 }

 if (VAR_21 & VAR_17) {
  VAR_22 = VAR_11 | VAR_2 | VAR_3 |
        VAR_1 | VAR_4;
  VAR_20->ftp_rqfpr[VAR_20->cur_filer_idx] = VAR_23;
  VAR_20->ftp_rqfcr[VAR_20->cur_filer_idx] = VAR_22;
  FUNC_0(VAR_20, VAR_20->cur_filer_idx, VAR_22, VAR_23);
  VAR_20->cur_filer_idx = VAR_20->cur_filer_idx - 1;
 }

 if (VAR_21 & VAR_18) {
  VAR_22 = VAR_8 | VAR_2 | VAR_3 |
        VAR_1 | VAR_4;
  VAR_20->ftp_rqfpr[VAR_20->cur_filer_idx] = VAR_23;
  VAR_20->ftp_rqfcr[VAR_20->cur_filer_idx] = VAR_22;
  FUNC_0(VAR_20, VAR_20->cur_filer_idx, VAR_22, VAR_23);
  VAR_20->cur_filer_idx = VAR_20->cur_filer_idx - 1;
 }
}
