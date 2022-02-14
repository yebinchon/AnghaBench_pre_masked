
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef unsigned char u16 ;
struct ecryptfs_session_key {size_t decrypted_key_size; unsigned char* decrypted_key; } ;
struct ecryptfs_message {size_t data_len; char* data; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,size_t*,size_t*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned char*,char*,unsigned char) ;

__attribute__((used)) static int
FUNC_3(struct ecryptfs_session_key *VAR_6, u8 *VAR_7,
      struct ecryptfs_message *VAR_8)
{
 size_t VAR_9 = 0;
 char *VAR_10;
 size_t VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;
 int VAR_16;
 VAR_13 = VAR_8->data_len;
 VAR_10 = VAR_8->data;
 if (VAR_13 < 4) {
  VAR_16 = -VAR_3;
  goto out;
 }
 if (VAR_10[VAR_9++] != VAR_2) {
  FUNC_1(VAR_4, "Type should be ECRYPTFS_TAG_65\n");
  VAR_16 = -VAR_3;
  goto out;
 }
 if (VAR_10[VAR_9++]) {
  FUNC_1(VAR_4, "Status indicator has non-zero value "
    "[%d]\n", VAR_10[VAR_9-1]);
  VAR_16 = -VAR_3;
  goto out;
 }
 VAR_16 = FUNC_0(&VAR_10[VAR_9], &VAR_12, &VAR_11);
 if (VAR_16) {
  FUNC_1(VAR_5, "Error parsing packet length; "
    "rc = [%d]\n", VAR_16);
  goto out;
 }
 VAR_9 += VAR_11;
 if (VAR_13 < (VAR_9 + VAR_12)) {
  FUNC_1(VAR_4, "The message received from ecryptfsd "
    "is shorter than expected\n");
  VAR_16 = -VAR_3;
  goto out;
 }
 if (VAR_12 < 3) {
  FUNC_1(VAR_4,
    "The decrypted key is not long enough to "
    "include a cipher code and checksum\n");
  VAR_16 = -VAR_3;
  goto out;
 }
 *VAR_7 = VAR_10[VAR_9++];

 VAR_6->decrypted_key_size = VAR_12 - 3;
 if (VAR_6->decrypted_key_size > VAR_1) {
  FUNC_1(VAR_4, "key_size [%d] larger than "
    "the maximum key size [%d]\n",
    VAR_6->decrypted_key_size,
    VAR_0);
  VAR_16 = -VAR_3;
  goto out;
 }
 FUNC_2(VAR_6->decrypted_key, &VAR_10[VAR_9],
        VAR_6->decrypted_key_size);
 VAR_9 += VAR_6->decrypted_key_size;
 VAR_15 += (unsigned char)(VAR_10[VAR_9++]) << 8;
 VAR_15 += (unsigned char)(VAR_10[VAR_9++]);
 for (VAR_9 = 0; VAR_9 < VAR_6->decrypted_key_size; VAR_9++)
  VAR_14 += VAR_6->decrypted_key[VAR_9];
 if (VAR_15 != VAR_14) {
  FUNC_1(VAR_4, "Invalid checksum for file "
    "encryption  key; expected [%x]; calculated "
    "[%x]\n", VAR_15, VAR_14);
  VAR_16 = -VAR_3;
 }
out:
 return VAR_16;
}
