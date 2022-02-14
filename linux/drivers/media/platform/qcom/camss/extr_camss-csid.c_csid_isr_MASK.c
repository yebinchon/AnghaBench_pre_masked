
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct csid_device {int reset_complete; scalar_t__ base; TYPE_1__* camss; } ;
typedef int irqreturn_t ;
typedef enum camss_version { ____Placeholder_camss_version } camss_version ;
struct TYPE_2__ {int version; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct csid_device *VAR_3 = VAR_2;
 enum camss_version VAR_4 = VAR_3->camss->version;
 u32 VAR_5;

 VAR_5 = FUNC_3(VAR_3->base + FUNC_1(VAR_4));
 FUNC_4(VAR_5, VAR_3->base + FUNC_0(VAR_4));

 if ((VAR_5 >> 11) & 0x1)
  FUNC_2(&VAR_3->reset_complete);

 return VAR_0;
}
