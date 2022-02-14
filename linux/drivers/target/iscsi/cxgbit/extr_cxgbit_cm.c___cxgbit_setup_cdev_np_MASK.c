
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ss_family; } ;
struct TYPE_6__ {TYPE_2__ local_addr; } ;
struct cxgbit_np {TYPE_3__ com; } ;
struct TYPE_4__ {int tids; } ;
struct cxgbit_device {TYPE_1__ lldi; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,struct cxgbit_np*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct cxgbit_device*,int,struct cxgbit_np*) ;
 int FUNC_3 (struct cxgbit_device*,int,struct cxgbit_np*) ;
 int FUNC_4 (struct cxgbit_device*,struct cxgbit_np*,int) ;
 int FUNC_5 (struct cxgbit_device*,struct cxgbit_np*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct cxgbit_device *VAR_4, struct cxgbit_np *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = VAR_5->com.local_addr.ss_family;

 if (!FUNC_6(VAR_1, &VAR_4->flags))
  return -VAR_2;

 VAR_6 = FUNC_0(VAR_4->lldi.tids, VAR_8, VAR_5);
 if (VAR_6 < 0)
  return -VAR_2;

 if (!FUNC_4(VAR_4, VAR_5, VAR_6)) {
  FUNC_1(VAR_4->lldi.tids, VAR_6, VAR_8);
  return -VAR_2;
 }

 if (VAR_8 == VAR_0)
  VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_5);
 else
  VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_5);

 if (VAR_7) {
  if (VAR_7 != -VAR_3)
   FUNC_1(VAR_4->lldi.tids, VAR_6,
     VAR_8);
  FUNC_5(VAR_4, VAR_5);
  return VAR_7;
 }
 return VAR_7;
}
