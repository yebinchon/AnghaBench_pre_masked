
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct intr_info {int member_0; char* member_1; int member_2; int member_3; } ;
struct csio_hw {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*,char*,unsigned long long) ;
 int FUNC_1 (struct csio_hw*,int ,struct intr_info*) ;
 int FUNC_2 (struct csio_hw*) ;
 scalar_t__ FUNC_3 (struct csio_hw*,int ) ;
 int FUNC_4 (struct csio_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct csio_hw *VAR_3)
{
 uint64_t VAR_4;

 static struct intr_info VAR_5[] = {
  { 136,
    "SGE received CPL exceeding IQE size", -1, 1 },
  { 129,
    "SGE GTS CIDX increment too large", -1, 0 },
  { 135, "SGE received 0-length CPL", -1, 0 },
  { 132, "SGE doorbell dropped", -1, 0 },
  { 133 | 134,
    "SGE IQID > 1023 received CPL for FL", -1, 0 },
  { 137, "SGE DBP 3 pidx increment too large", -1,
    0 },
  { 138, "SGE DBP 2 pidx increment too large", -1,
    0 },
  { 139, "SGE DBP 1 pidx increment too large", -1,
    0 },
  { 140, "SGE DBP 0 pidx increment too large", -1,
    0 },
  { 130,
    "SGE too many priority ingress contexts", -1, 0 },
  { 131,
    "SGE too many priority egress contexts", -1, 0 },
  { 128, "SGE illegal ingress QID", -1, 0 },
  { 141, "SGE illegal egress QID", -1, 0 },
  { 0, ((void*)0), 0, 0 }
 };

 VAR_4 = (uint64_t)FUNC_3(VAR_3, VAR_0) |
     ((uint64_t)FUNC_3(VAR_3, VAR_1) << 32);
 if (VAR_4) {
  FUNC_0(VAR_3, "SGE parity error (%#llx)\n",
       (unsigned long long)VAR_4);
  FUNC_4(VAR_3, (uint32_t)(VAR_4 & 0xFFFFFFFF),
      VAR_0);
  FUNC_4(VAR_3, (uint32_t)(VAR_4 >> 32), VAR_1);
 }

 VAR_4 |= FUNC_1(VAR_3, VAR_2, VAR_5);

 if (FUNC_1(VAR_3, VAR_2, VAR_5) ||
     VAR_4 != 0)
  FUNC_2(VAR_3);
}
