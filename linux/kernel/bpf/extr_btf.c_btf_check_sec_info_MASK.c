
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_sec_info {size_t off; size_t len; } ;
struct btf_header {size_t hdr_len; } ;
struct btf {struct btf_header hdr; } ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (struct btf_verifier_env*,char*) ;
 int FUNC_2 (struct btf_sec_info*,size_t,int,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct btf_verifier_env *VAR_3,
         u32 VAR_4)
{
 struct btf_sec_info VAR_5[FUNC_0(VAR_2)];
 u32 VAR_6, VAR_7, VAR_8;
 const struct btf_header *VAR_9;
 const struct btf *VAR_10;

 VAR_10 = VAR_3->btf;
 VAR_9 = &VAR_10->hdr;


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++)
  VAR_5[VAR_8] = *(struct btf_sec_info *)((void *)VAR_9 +
         VAR_2[VAR_8]);

 FUNC_2(VAR_5, FUNC_0(VAR_2),
      sizeof(struct btf_sec_info), VAR_1, ((void*)0));


 VAR_6 = 0;
 VAR_7 = VAR_4 - VAR_9->hdr_len;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  if (VAR_7 < VAR_5[VAR_8].off) {
   FUNC_1(VAR_3, "Invalid section offset");
   return -VAR_0;
  }
  if (VAR_6 < VAR_5[VAR_8].off) {

   FUNC_1(VAR_3, "Unsupported section found");
   return -VAR_0;
  }
  if (VAR_6 > VAR_5[VAR_8].off) {
   FUNC_1(VAR_3, "Section overlap found");
   return -VAR_0;
  }
  if (VAR_7 - VAR_6 < VAR_5[VAR_8].len) {
   FUNC_1(VAR_3,
      "Total section length too long");
   return -VAR_0;
  }
  VAR_6 += VAR_5[VAR_8].len;
 }


 if (VAR_7 != VAR_6) {
  FUNC_1(VAR_3, "Unsupported section found");
  return -VAR_0;
 }

 return 0;
}
