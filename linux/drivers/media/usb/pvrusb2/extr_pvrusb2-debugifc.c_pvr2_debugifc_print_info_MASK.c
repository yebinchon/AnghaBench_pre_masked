
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int dummy; } ;


 int FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (struct pvr2_hdw*,char*,unsigned int) ;
 int FUNC_2 (char*,unsigned int,char*,...) ;

int FUNC_3(struct pvr2_hdw *VAR_0,char *VAR_1,unsigned int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 VAR_4 = FUNC_2(VAR_1, VAR_2, "Driver hardware description: %s\n",
    FUNC_0(VAR_0));
 VAR_3 += VAR_4; VAR_2 -= VAR_4; VAR_1 += VAR_4;
 VAR_4 = FUNC_2(VAR_1,VAR_2,"Driver state info:\n");
 VAR_3 += VAR_4; VAR_2 -= VAR_4; VAR_1 += VAR_4;
 VAR_4 = FUNC_1(VAR_0,VAR_1,VAR_2);
 VAR_3 += VAR_4; VAR_2 -= VAR_4; VAR_1 += VAR_4;

 return VAR_3;
}
