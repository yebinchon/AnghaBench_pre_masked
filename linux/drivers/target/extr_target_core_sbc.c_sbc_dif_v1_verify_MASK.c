
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct t10_pi_tuple {scalar_t__ guard_tag; int ref_tag; } ;
struct se_cmd {int prot_checks; scalar_t__ prot_type; } ;
typedef int sense_reason_t ;
typedef int sector_t ;
typedef int __u16 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned long long,unsigned int,unsigned int) ;

__attribute__((used)) static sense_reason_t
FUNC_4(struct se_cmd *VAR_6, struct t10_pi_tuple *VAR_7,
    __u16 VAR_8, sector_t VAR_9, unsigned int VAR_10)
{
 __be16 VAR_11;

 if (!(VAR_6->prot_checks & VAR_0))
  goto check_ref;

 VAR_11 = FUNC_2(VAR_8);

 if (VAR_7->guard_tag != VAR_11) {
  FUNC_3("DIFv1 checksum failed on sector %llu guard tag 0x%04x"
   " csum 0x%04x\n", (unsigned long long)VAR_9,
   FUNC_0(VAR_7->guard_tag), FUNC_0(VAR_11));
  return VAR_4;
 }

check_ref:
 if (!(VAR_6->prot_checks & VAR_1))
  return 0;

 if (VAR_6->prot_type == VAR_2 &&
     FUNC_1(VAR_7->ref_tag) != (VAR_9 & 0xffffffff)) {
  FUNC_3("DIFv1 Type 1 reference failed on sector: %llu tag: 0x%08x"
         " sector MSB: 0x%08x\n", (unsigned long long)VAR_9,
         FUNC_1(VAR_7->ref_tag), (u32)(VAR_9 & 0xffffffff));
  return VAR_5;
 }

 if (VAR_6->prot_type == VAR_3 &&
     FUNC_1(VAR_7->ref_tag) != VAR_10) {
  FUNC_3("DIFv1 Type 2 reference failed on sector: %llu tag: 0x%08x"
         " ei_lba: 0x%08x\n", (unsigned long long)VAR_9,
   FUNC_1(VAR_7->ref_tag), VAR_10);
  return VAR_5;
 }

 return 0;
}
