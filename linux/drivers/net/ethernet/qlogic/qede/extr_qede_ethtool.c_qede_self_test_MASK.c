
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct qede_dev {int cdev; TYPE_3__* ops; } ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct TYPE_6__ {TYPE_2__* common; } ;
struct TYPE_5__ {TYPE_1__* selftest; } ;
struct TYPE_4__ {scalar_t__ (* selftest_nvram ) (int ) ;scalar_t__ (* selftest_clock ) (int ) ;scalar_t__ (* selftest_register ) (int ) ;scalar_t__ (* selftest_memory ) (int ) ;scalar_t__ (* selftest_interrupt ) (int ) ;} ;


 int FUNC_0 (struct qede_dev*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int*,int ,int) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qede_dev*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_12,
      struct ethtool_test *VAR_13, u64 *VAR_14)
{
 struct qede_dev *VAR_15 = FUNC_2(VAR_12);

 FUNC_0(VAR_15, VAR_11,
     "Self-test command parameters: offline = %d, external_lb = %d\n",
     (VAR_13->flags & VAR_2),
     (VAR_13->flags & VAR_0) >> 2);

 FUNC_1(VAR_14, 0, sizeof(u64) * VAR_9);

 if (VAR_13->flags & VAR_2) {
  if (FUNC_3(VAR_15,
            VAR_10)) {
   VAR_14[VAR_5] = 1;
   VAR_13->flags |= VAR_1;
  }
 }

 if (VAR_15->ops->common->selftest->selftest_interrupt(VAR_15->cdev)) {
  VAR_14[VAR_4] = 1;
  VAR_13->flags |= VAR_1;
 }

 if (VAR_15->ops->common->selftest->selftest_memory(VAR_15->cdev)) {
  VAR_14[VAR_6] = 1;
  VAR_13->flags |= VAR_1;
 }

 if (VAR_15->ops->common->selftest->selftest_register(VAR_15->cdev)) {
  VAR_14[VAR_8] = 1;
  VAR_13->flags |= VAR_1;
 }

 if (VAR_15->ops->common->selftest->selftest_clock(VAR_15->cdev)) {
  VAR_14[VAR_3] = 1;
  VAR_13->flags |= VAR_1;
 }

 if (VAR_15->ops->common->selftest->selftest_nvram(VAR_15->cdev)) {
  VAR_14[VAR_7] = 1;
  VAR_13->flags |= VAR_1;
 }
}
