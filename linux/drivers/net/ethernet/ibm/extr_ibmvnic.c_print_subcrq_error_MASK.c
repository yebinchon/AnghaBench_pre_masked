
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;




 int FUNC_0 (struct device*,char*,char const*,int) ;
 int FUNC_1 (struct device*,char*,char const*,int) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, int VAR_1, const char *VAR_2)
{
 switch (VAR_1) {
 case 128:
  FUNC_1(VAR_0,
         "%s failed: Send request is malformed or adapter failover pending. (rc=%d)\n",
         VAR_2, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0,
         "%s failed: Backing queue closed. Adapter is down or failover pending. (rc=%d)\n",
         VAR_2, VAR_1);
  break;
 default:
  FUNC_0(VAR_0, "%s failed: (rc=%d)\n", VAR_2, VAR_1);
  break;
 }
}
