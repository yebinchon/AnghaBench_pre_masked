
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_session_key {int encrypted_key_size; char* encrypted_key; } ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,size_t*) ;
 char* FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_5, struct ecryptfs_session_key *VAR_6,
      char **VAR_7, size_t *VAR_8)
{
 size_t VAR_9 = 0;
 size_t VAR_10;
 size_t VAR_11;
 char *VAR_12;
 int VAR_13;
 VAR_10 = (5 + VAR_0
      + VAR_6->encrypted_key_size);
 *VAR_7 = FUNC_2(VAR_10, VAR_3);
 VAR_12 = *VAR_7;
 if (!VAR_12) {
  FUNC_0(VAR_4, "Unable to allocate memory\n");
  VAR_13 = -VAR_2;
  goto out;
 }
 VAR_12[VAR_9++] = VAR_1;
 VAR_13 = FUNC_1(&VAR_12[VAR_9], VAR_0,
       &VAR_11);
 if (VAR_13) {
  FUNC_0(VAR_4, "Error generating tag 64 packet "
    "header; cannot generate packet length\n");
  goto out;
 }
 VAR_9 += VAR_11;
 FUNC_3(&VAR_12[VAR_9], VAR_5, VAR_0);
 VAR_9 += VAR_0;
 VAR_13 = FUNC_1(&VAR_12[VAR_9],
       VAR_6->encrypted_key_size,
       &VAR_11);
 if (VAR_13) {
  FUNC_0(VAR_4, "Error generating tag 64 packet "
    "header; cannot generate packet length\n");
  goto out;
 }
 VAR_9 += VAR_11;
 FUNC_3(&VAR_12[VAR_9], VAR_6->encrypted_key,
        VAR_6->encrypted_key_size);
 VAR_9 += VAR_6->encrypted_key_size;
 *VAR_8 = VAR_9;
out:
 return VAR_13;
}
