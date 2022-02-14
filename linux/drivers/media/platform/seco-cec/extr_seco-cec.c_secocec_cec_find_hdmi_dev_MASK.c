
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cec_dmi_match {char* conn; int devname; int product_name; int sys_vendor; } ;


 int FUNC_0 (struct cec_dmi_match*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct device* FUNC_1 (int ) ;
 struct device* FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct device*) ;
 struct cec_dmi_match* VAR_5 ;

__attribute__((used)) static struct device *FUNC_5(struct device *VAR_6,
      const char **VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0 ; VAR_8 < FUNC_0(VAR_5) ; ++VAR_8) {
  const struct cec_dmi_match *VAR_9 = &VAR_5[VAR_8];

  if (FUNC_3(VAR_1, VAR_9->sys_vendor) &&
      FUNC_3(VAR_0, VAR_9->product_name)) {
   struct device *VAR_10;


   VAR_10 = FUNC_2(&VAR_4, ((void*)0),
          VAR_9->devname);
   if (!VAR_10)
    return FUNC_1(-VAR_3);

   FUNC_4(VAR_10);
   *VAR_7 = VAR_9->conn;
   return VAR_10;
  }
 }

 return FUNC_1(-VAR_2);
}
