
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_regulator {int ocp_count; int ocp_max_retries; int dev; int ocp_retry_delay_ms; int ocp_work; int vs_enable_time; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct spmi_regulator*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct spmi_regulator *VAR_5 = VAR_4;
 ktime_t VAR_6;
 s64 VAR_7;

 VAR_6 = FUNC_1();
 VAR_7 = FUNC_2(VAR_6,
      VAR_5->vs_enable_time);






 if (VAR_7 > VAR_2)
  VAR_5->ocp_count = 0;


 FUNC_6(VAR_1);

 VAR_5->ocp_count++;

 if (VAR_5->ocp_count == 1) {

  FUNC_5(VAR_5);
 } else if (VAR_5->ocp_count <= VAR_5->ocp_max_retries) {

  FUNC_4(&VAR_5->ocp_work,
   FUNC_3(VAR_5->ocp_retry_delay_ms) + 1);
 } else {
  FUNC_0(VAR_5->dev,
   "OCP triggered %d times; no further retries\n",
   VAR_5->ocp_count);
 }

 return VAR_0;
}
