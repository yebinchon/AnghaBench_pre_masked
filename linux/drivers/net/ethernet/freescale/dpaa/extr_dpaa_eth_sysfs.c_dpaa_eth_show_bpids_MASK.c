
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa_priv {TYPE_1__** dpaa_bps; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int bpid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dpaa_priv* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 struct dpaa_priv *VAR_5 = FUNC_0(FUNC_2(VAR_2));
 ssize_t VAR_6 = 0;
 int VAR_7 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_1 - VAR_6, "%u\n",
      VAR_5->dpaa_bps[VAR_7]->bpid);

 return VAR_6;
}
