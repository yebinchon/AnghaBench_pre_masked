
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct gfar_private {size_t* ftp_rqfcr; size_t* ftp_rqfpr; size_t cur_filer_idx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (struct gfar_private*,size_t,int) ;
 int FUNC_1 (struct gfar_private*,int,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(struct gfar_private *VAR_8)
{
 int VAR_9 = 0x0;
 u32 VAR_10 = VAR_1;
 u32 VAR_11 = 0x0;
 u32 VAR_12 = VAR_0;


 VAR_11 = VAR_2;
 VAR_8->ftp_rqfcr[VAR_10] = VAR_11;
 VAR_8->ftp_rqfpr[VAR_10] = VAR_12;
 FUNC_1(VAR_8, VAR_10, VAR_11, VAR_12);

 VAR_10 = FUNC_0(VAR_8, VAR_10, VAR_5);
 VAR_10 = FUNC_0(VAR_8, VAR_10, VAR_5 | VAR_7);
 VAR_10 = FUNC_0(VAR_8, VAR_10, VAR_5 | VAR_6);
 VAR_10 = FUNC_0(VAR_8, VAR_10, VAR_4);
 VAR_10 = FUNC_0(VAR_8, VAR_10, VAR_4 | VAR_7);
 VAR_10 = FUNC_0(VAR_8, VAR_10, VAR_4 | VAR_6);


 VAR_8->cur_filer_idx = VAR_10;


 VAR_11 = VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_8->ftp_rqfcr[VAR_9] = VAR_11;
  VAR_8->ftp_rqfpr[VAR_9] = VAR_12;
  FUNC_1(VAR_8, VAR_9, VAR_11, VAR_12);
 }
}
