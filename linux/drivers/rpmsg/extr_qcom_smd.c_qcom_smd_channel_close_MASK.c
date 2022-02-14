
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smd_channel {int * bounce_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qcom_smd_channel*) ;
 int FUNC_2 (struct qcom_smd_channel*,int *) ;
 int FUNC_3 (struct qcom_smd_channel*,int ) ;

__attribute__((used)) static void FUNC_4(struct qcom_smd_channel *VAR_1)
{
 FUNC_2(VAR_1, ((void*)0));

 FUNC_0(VAR_1->bounce_buffer);
 VAR_1->bounce_buffer = ((void*)0);

 FUNC_3(VAR_1, VAR_0);
 FUNC_1(VAR_1);
}
