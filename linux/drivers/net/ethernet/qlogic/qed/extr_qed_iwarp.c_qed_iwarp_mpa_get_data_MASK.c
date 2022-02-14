
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct unaligned_opaque_data {int cid; scalar_t__ first_mpa_offset; scalar_t__ tcp_payload_offset; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct qed_hwfn *VAR_0,
         struct unaligned_opaque_data *VAR_1,
         u32 VAR_2, u32 VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 *VAR_1 = *((struct unaligned_opaque_data *)&VAR_4);

 VAR_1->first_mpa_offset = VAR_1->tcp_payload_offset +
         FUNC_1(VAR_1->first_mpa_offset);
 VAR_1->cid = FUNC_2(VAR_1->cid);
}
