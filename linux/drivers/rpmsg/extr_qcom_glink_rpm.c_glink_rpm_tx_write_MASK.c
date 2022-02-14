
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink_pipe {int dummy; } ;
struct glink_rpm_pipe {int head; } ;


 size_t FUNC_0 (size_t,int) ;
 size_t FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (size_t,char*) ;
 unsigned int FUNC_3 (struct glink_rpm_pipe*,unsigned int,char*,size_t) ;
 int FUNC_4 (char*,void const*,size_t) ;
 unsigned int FUNC_5 (int ) ;
 struct glink_rpm_pipe* FUNC_6 (struct qcom_glink_pipe*) ;
 int FUNC_7 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_8(struct qcom_glink_pipe *VAR_0,
          const void *VAR_1, size_t VAR_2,
          const void *VAR_3, size_t VAR_4)
{
 struct glink_rpm_pipe *VAR_5 = FUNC_6(VAR_0);
 size_t VAR_6 = VAR_2 + VAR_4;
 size_t VAR_7;
 unsigned int VAR_8;
 char VAR_9[8] = {0};
 size_t VAR_10;


 if (FUNC_2(VAR_2 % 4, "Glink Header length must be 4 bytes aligned\n"))
  return;





 VAR_7 = FUNC_1(VAR_4, 4);
 if (VAR_7 != VAR_4)
  FUNC_4(VAR_9, VAR_3 + VAR_7, VAR_4 - VAR_7);

 VAR_8 = FUNC_5(VAR_5->head);
 VAR_8 = FUNC_3(VAR_5, VAR_8, VAR_1, VAR_2);
 VAR_8 = FUNC_3(VAR_5, VAR_8, VAR_3, VAR_7);

 VAR_10 = FUNC_0(VAR_6, 8) - FUNC_1(VAR_6, 4);
 if (VAR_10)
  VAR_8 = FUNC_3(VAR_5, VAR_8, VAR_9, VAR_10);
 FUNC_7(VAR_8, VAR_5->head);
}
