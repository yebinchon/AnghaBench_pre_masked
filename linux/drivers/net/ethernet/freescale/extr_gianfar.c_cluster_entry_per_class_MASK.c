
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct gfar_private {size_t* ftp_rqfpr; size_t* ftp_rqfcr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct gfar_private*,size_t,size_t,size_t) ;

__attribute__((used)) static u32 FUNC_1(struct gfar_private *VAR_7, u32 VAR_8,
       u32 VAR_9)
{
 u32 VAR_10 = VAR_0;
 u32 VAR_11 = 0x0;

 VAR_8--;
 VAR_11 = VAR_2 | VAR_5 | VAR_3;
 VAR_7->ftp_rqfpr[VAR_8] = VAR_10;
 VAR_7->ftp_rqfcr[VAR_8] = VAR_11;
 FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10);

 VAR_8--;
 VAR_11 = VAR_4;
 VAR_7->ftp_rqfpr[VAR_8] = VAR_10;
 VAR_7->ftp_rqfcr[VAR_8] = VAR_11;
 FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10);

 VAR_8--;
 VAR_11 = VAR_3 | VAR_6 | VAR_2 | VAR_1;
 VAR_10 = VAR_9;
 VAR_7->ftp_rqfcr[VAR_8] = VAR_11;
 VAR_7->ftp_rqfpr[VAR_8] = VAR_10;
 FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10);

 VAR_8--;
 VAR_11 = VAR_3 | VAR_5 | VAR_1;
 VAR_10 = VAR_9;
 VAR_7->ftp_rqfcr[VAR_8] = VAR_11;
 VAR_7->ftp_rqfpr[VAR_8] = VAR_10;
 FUNC_0(VAR_7, VAR_8, VAR_11, VAR_10);

 return VAR_8;
}
