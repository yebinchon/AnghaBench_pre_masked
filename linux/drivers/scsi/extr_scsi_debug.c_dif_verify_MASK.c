
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t10_pi_tuple {scalar_t__ guard_tag; int ref_tag; } ;
typedef int sector_t ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void const*,int ) ;
 int FUNC_3 (char*,unsigned long,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct t10_pi_tuple *VAR_4, const void *VAR_5,
        sector_t VAR_6, u32 VAR_7)
{
 __be16 VAR_8 = FUNC_2(VAR_5, VAR_3);

 if (VAR_4->guard_tag != VAR_8) {
  FUNC_3("GUARD check failed on sector %lu rcvd 0x%04x, data 0x%04x\n",
   (unsigned long)VAR_6,
   FUNC_0(VAR_4->guard_tag),
   FUNC_0(VAR_8));
  return 0x01;
 }
 if (VAR_2 == VAR_0 &&
     FUNC_1(VAR_4->ref_tag) != (VAR_6 & 0xffffffff)) {
  FUNC_3("REF check failed on sector %lu\n",
   (unsigned long)VAR_6);
  return 0x03;
 }
 if (VAR_2 == VAR_1 &&
     FUNC_1(VAR_4->ref_tag) != VAR_7) {
  FUNC_3("REF check failed on sector %lu\n",
   (unsigned long)VAR_6);
  return 0x03;
 }
 return 0;
}
