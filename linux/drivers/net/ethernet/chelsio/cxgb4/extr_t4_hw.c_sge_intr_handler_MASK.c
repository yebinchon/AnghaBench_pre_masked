
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef struct intr_info {int member_0; char* member_1; int member_2; int member_3; int const member_4; } const intr_info ;
struct TYPE_2__ {int chip; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;



 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 int FUNC_3 (int ,char*,...) ;


 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int ,struct intr_info const*) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct adapter *VAR_7)
{
 u64 VAR_8;
 u32 VAR_9;

 static const struct intr_info VAR_10[] = {
  { 138,
    "SGE received CPL exceeding IQE size", -1, 1 },
  { 131,
    "SGE GTS CIDX increment too large", -1, 0 },
  { 137, "SGE received 0-length CPL", -1, 0 },
  { 144, ((void*)0), -1, 0, 128 },
  { 135 | 136,
    "SGE IQID > 1023 received CPL for FL", -1, 0 },
  { 139, "SGE DBP 3 pidx increment too large", -1,
    0 },
  { 140, "SGE DBP 2 pidx increment too large", -1,
    0 },
  { 141, "SGE DBP 1 pidx increment too large", -1,
    0 },
  { 142, "SGE DBP 0 pidx increment too large", -1,
    0 },
  { 132,
    "SGE too many priority ingress contexts", -1, 0 },
  { 130, "SGE illegal ingress QID", -1, 0 },
  { 143, "SGE illegal egress QID", -1, 0 },
  { 0 }
 };

 static struct intr_info VAR_11[] = {
  { 134, ((void*)0), -1, 0, 129 },
  { 145, ((void*)0), -1, 0, 128 },
  { 133,
    "SGE too many priority egress contexts", -1, 0 },
  { 0 }
 };

 VAR_8 = (u64)FUNC_6(VAR_7, VAR_3) |
  ((u64)FUNC_6(VAR_7, VAR_4) << 32);
 if (VAR_8) {
  FUNC_2(VAR_7->pdev_dev, "SGE parity error (%#llx)\n",
    (unsigned long long)VAR_8);
  FUNC_7(VAR_7, VAR_3, VAR_8);
  FUNC_7(VAR_7, VAR_4, VAR_8 >> 32);
 }

 VAR_8 |= FUNC_5(VAR_7, VAR_5, VAR_10);
 if (FUNC_0(VAR_7->params.chip) <= VAR_0)
  VAR_8 |= FUNC_5(VAR_7, VAR_5,
        VAR_11);

 VAR_9 = FUNC_6(VAR_7, VAR_2);
 if (VAR_9 & VAR_1) {
  FUNC_3(VAR_7->pdev_dev, "SGE error for queue %u\n",
   FUNC_1(VAR_9));
  if (VAR_9 & VAR_6)
   FUNC_3(VAR_7->pdev_dev,
    "SGE UNCAPTURED_ERROR set (clearing)\n");
  FUNC_7(VAR_7, VAR_2, VAR_1 |
        VAR_6);
 }

 if (VAR_8 != 0)
  FUNC_4(VAR_7);
}
