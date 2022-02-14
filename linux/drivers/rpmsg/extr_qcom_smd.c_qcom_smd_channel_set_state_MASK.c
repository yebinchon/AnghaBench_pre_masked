
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smd_edge {int dev; } ;
struct qcom_smd_channel {int state; int name; struct qcom_smd_edge* edge; } ;


 int FUNC_0 (struct qcom_smd_channel*,int ,int) ;
 int FUNC_1 (struct qcom_smd_channel*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct qcom_smd_channel*) ;

__attribute__((used)) static void FUNC_4(struct qcom_smd_channel *VAR_5,
           int VAR_6)
{
 struct qcom_smd_edge *VAR_7 = VAR_5->edge;
 bool VAR_8 = VAR_6 == VAR_0;

 if (VAR_5->state == VAR_6)
  return;

 FUNC_2(&VAR_7->dev, "set_state(%s, %d)\n", VAR_5->name, VAR_6);

 FUNC_0(VAR_5, VAR_3, VAR_8);
 FUNC_0(VAR_5, VAR_2, VAR_8);
 FUNC_0(VAR_5, VAR_1, VAR_8);

 FUNC_1(VAR_5, VAR_6, VAR_6);
 FUNC_0(VAR_5, VAR_4, 1);

 VAR_5->state = VAR_6;
 FUNC_3(VAR_5);
}
