
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct cxl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cxl*,int ) ;
 int FUNC_1 (char*,int,struct dentry*,int ) ;

void FUNC_2(struct cxl *VAR_8, struct dentry *VAR_9)
{
 FUNC_1("fir1", VAR_6, VAR_9, FUNC_0(VAR_8, VAR_1));
 FUNC_1("fir_mask", 0400, VAR_9,
         FUNC_0(VAR_8, VAR_3));
 FUNC_1("fir_cntl", VAR_6, VAR_9, FUNC_0(VAR_8, VAR_2));
 FUNC_1("trace", VAR_6 | VAR_7, VAR_9, FUNC_0(VAR_8, VAR_4));
 FUNC_1("debug", 0600, VAR_9,
         FUNC_0(VAR_8, VAR_0));
 FUNC_1("xsl-debug", 0600, VAR_9,
         FUNC_0(VAR_8, VAR_5));
}
