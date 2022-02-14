
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int offset; int len; } ;
struct bnx2_rv2p_fw_file_entry {int * fixup; TYPE_1__ rv2p; } ;
struct bnx2 {TYPE_2__* rv2p_firmware; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct bnx2*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_10, u32 VAR_11,
      const struct bnx2_rv2p_fw_file_entry *VAR_12)
{
 u32 VAR_13, VAR_14;
 __be32 *VAR_15;
 int VAR_16;
 u32 VAR_17, VAR_18, VAR_19;

 VAR_13 = FUNC_1(VAR_12->rv2p.len);
 VAR_14 = FUNC_1(VAR_12->rv2p.offset);

 VAR_15 = (__be32 *)(VAR_10->rv2p_firmware->data + VAR_14);

 if (VAR_11 == VAR_9) {
  VAR_18 = VAR_6;
  VAR_19 = VAR_5;
 } else {
  VAR_18 = VAR_8;
  VAR_19 = VAR_7;
 }

 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16 += 8) {
  FUNC_0(VAR_10, VAR_3, FUNC_1(*VAR_15));
  VAR_15++;
  FUNC_0(VAR_10, VAR_4, FUNC_1(*VAR_15));
  VAR_15++;

  VAR_17 = (VAR_16 / 8) | VAR_18;
  FUNC_0(VAR_10, VAR_19, VAR_17);
 }

 VAR_15 = (__be32 *)(VAR_10->rv2p_firmware->data + VAR_14);
 for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
  u32 VAR_20, VAR_21;

  VAR_20 = FUNC_1(VAR_12->fixup[VAR_16]);
  if (VAR_20 && ((VAR_20 * 4) < VAR_13)) {
   VAR_21 = FUNC_1(*(VAR_15 + VAR_20 - 1));
   FUNC_0(VAR_10, VAR_3, VAR_21);
   VAR_21 = FUNC_1(*(VAR_15 + VAR_20));
   VAR_21 = FUNC_2(VAR_11, VAR_16, VAR_20, VAR_21);
   FUNC_0(VAR_10, VAR_4, VAR_21);

   VAR_17 = (VAR_20 / 2) | VAR_18;
   FUNC_0(VAR_10, VAR_19, VAR_17);
  }
 }


 if (VAR_11 == VAR_9) {
  FUNC_0(VAR_10, VAR_0, VAR_1);
 }
 else {
  FUNC_0(VAR_10, VAR_0, VAR_2);
 }

 return 0;
}
