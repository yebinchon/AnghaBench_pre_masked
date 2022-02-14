
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct cxl_afu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cxl_afu*,int ) ;
 int FUNC_1 (struct cxl_afu*,int ) ;
 int FUNC_2 (char*,int,struct dentry*,int ) ;

void FUNC_3(struct cxl_afu *VAR_8, struct dentry *VAR_9)
{
 FUNC_2("sstp0", VAR_6, VAR_9, FUNC_1(VAR_8, VAR_4));
 FUNC_2("sstp1", VAR_6, VAR_9, FUNC_1(VAR_8, VAR_5));

 FUNC_2("fir", VAR_6, VAR_9, FUNC_0(VAR_8, VAR_1));
 FUNC_2("serr", VAR_6, VAR_9, FUNC_0(VAR_8, VAR_2));
 FUNC_2("afu_debug", VAR_6, VAR_9, FUNC_0(VAR_8, VAR_0));
 FUNC_2("trace", VAR_6 | VAR_7, VAR_9, FUNC_0(VAR_8, VAR_3));
}
