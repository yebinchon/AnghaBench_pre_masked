
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct keygen_scheme {int use_hashing; int base_fqid; int hash_fqid_count; scalar_t__ match_vector; int hashShift; int symmetric_hash; int hw_port_id; scalar_t__ used; } ;
struct fman_keygen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fman_keygen*,int *) ;
 struct keygen_scheme* FUNC_1 (struct fman_keygen*,int ) ;
 int FUNC_2 (struct fman_keygen*,int ,int) ;
 int FUNC_3 (struct fman_keygen*,int ,int) ;
 int FUNC_4 (struct keygen_scheme*,int ,int) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct fman_keygen *VAR_3, u8 VAR_4,
        u32 VAR_5, u32 VAR_6)
{
 struct keygen_scheme *VAR_7;
 u8 VAR_8;
 int VAR_9;


 if (VAR_5 == 0 || (VAR_5 & ~0x00FFFFFF)) {
  FUNC_5("Base FQID must be between 1 and 2^24-1\n");
  return -VAR_2;
 }
 if (VAR_6 == 0 || (VAR_6 & (VAR_6 - 1)) != 0) {
  FUNC_5("Hash size must be power of two\n");
  return -VAR_2;
 }


 VAR_9 = FUNC_0(VAR_3, &VAR_8);
 if (VAR_9) {
  FUNC_5("The maximum number of available Schemes has been exceeded\n");
  return -VAR_2;
 }



 VAR_7 = FUNC_1(VAR_3, VAR_8);
 if (!VAR_7) {
  FUNC_5("Requested Scheme does not exist\n");
  return -VAR_2;
 }
 if (VAR_7->used) {
  FUNC_5("The requested Scheme is already used\n");
  return -VAR_2;
 }




 FUNC_4(VAR_7, 0, sizeof(struct keygen_scheme));


 VAR_7->hw_port_id = VAR_4;
 VAR_7->use_hashing = 1;
 VAR_7->base_fqid = VAR_5;
 VAR_7->hash_fqid_count = VAR_6;
 VAR_7->symmetric_hash = VAR_1;
 VAR_7->hashShift = VAR_0;




 VAR_7->match_vector = 0;

 VAR_9 = FUNC_3(VAR_3, VAR_8, 1);
 if (VAR_9 != 0) {
  FUNC_5("Scheme setup failed\n");
  return VAR_9;
 }


 VAR_9 = FUNC_2(VAR_3, VAR_8, 1);
 if (VAR_9 != 0) {
  FUNC_5("Binding port to schemes failed\n");
  return VAR_9;
 }

 return 0;
}
