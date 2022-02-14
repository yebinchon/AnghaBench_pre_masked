
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog {int jited; int aux; scalar_t__ bpf_func; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct bpf_prog*) ;
 int FUNC_3 (struct bpf_prog*) ;
 int FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bpf_prog*) ;
 int FUNC_7 (struct bpf_prog*) ;
 int FUNC_8 (struct bpf_prog*) ;

struct bpf_prog *FUNC_9(struct bpf_prog *VAR_1, int *VAR_2)
{



 if (VAR_1->bpf_func)
  goto finalize;

 FUNC_8(VAR_1);







 if (!FUNC_5(VAR_1->aux)) {
  *VAR_2 = FUNC_2(VAR_1);
  if (*VAR_2)
   return VAR_1;

  VAR_1 = FUNC_1(VAR_1);
  if (!VAR_1->jited) {
   FUNC_3(VAR_1);




  } else {
   FUNC_4(VAR_1);
  }
 } else {
  *VAR_2 = FUNC_7(VAR_1);
  if (*VAR_2)
   return VAR_1;
 }

finalize:
 FUNC_6(VAR_1);






 *VAR_2 = FUNC_0(VAR_1);

 return VAR_1;
}
