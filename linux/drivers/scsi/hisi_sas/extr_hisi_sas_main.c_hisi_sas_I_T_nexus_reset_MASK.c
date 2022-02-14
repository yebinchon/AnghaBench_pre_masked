
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {struct device* dev; } ;
struct domain_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 scalar_t__ FUNC_1 (struct domain_device*) ;
 struct hisi_hba* FUNC_2 (struct domain_device*) ;
 int FUNC_3 (struct domain_device*) ;
 int FUNC_4 (struct hisi_hba*,struct domain_device*) ;
 int FUNC_5 (struct hisi_hba*,struct domain_device*,int ,int ) ;
 int FUNC_6 (struct hisi_hba*,struct domain_device*) ;
 int FUNC_7 (struct domain_device*) ;

__attribute__((used)) static int FUNC_8(struct domain_device *VAR_4)
{
 struct hisi_hba *VAR_5 = FUNC_2(VAR_4);
 struct device *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_5, VAR_4,
       VAR_1, 0);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6, "I_T nexus reset: internal abort (%d)\n", VAR_7);
  return VAR_3;
 }
 FUNC_4(VAR_5, VAR_4);

 if (FUNC_1(VAR_4)) {
  VAR_7 = FUNC_7(VAR_4);
  if (VAR_7 == VAR_3)
   return VAR_3;
 }

 VAR_7 = FUNC_3(VAR_4);

 if ((VAR_7 == VAR_2) || (VAR_7 == -VAR_0))
  FUNC_6(VAR_5, VAR_4);

 return VAR_7;
}
