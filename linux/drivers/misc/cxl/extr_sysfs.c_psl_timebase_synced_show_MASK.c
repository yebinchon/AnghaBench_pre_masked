
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxl {int psl_timebase_synced; TYPE_2__* native; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* sl_ops; } ;
struct TYPE_3__ {scalar_t__ (* timebase_read ) (struct cxl*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,char*,int) ;
 scalar_t__ FUNC_5 (struct cxl*) ;
 int FUNC_6 (scalar_t__) ;
 struct cxl* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct cxl *VAR_5 = FUNC_7(VAR_2);
 u64 VAR_6, VAR_7;


 if (FUNC_1(VAR_0)) {
  VAR_6 = VAR_5->native->sl_ops->timebase_read(VAR_5);
  VAR_7 = FUNC_0(FUNC_2() - VAR_6);


  VAR_5->psl_timebase_synced = (FUNC_6(VAR_7) < 16000) ? 1 : 0;
  FUNC_3("PSL timebase %s - delta: 0x%016llx\n",
    (FUNC_6(VAR_7) < 16000) ? "synchronized" :
    "not synchronized", FUNC_6(VAR_7));
 }
 return FUNC_4(VAR_4, VAR_1, "%i\n", VAR_5->psl_timebase_synced);
}
