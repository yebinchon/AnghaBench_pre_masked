
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct bpf_verifier_log {char* kbuf; int len_total; int len_used; int * ubuf; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 unsigned int FUNC_2 (int,unsigned int) ;
 unsigned int FUNC_3 (char*,int,char const*,int ) ;

void FUNC_4(struct bpf_verifier_log *VAR_1, const char *VAR_2,
         va_list VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_3(VAR_1->kbuf, VAR_0, VAR_2, VAR_3);

 FUNC_0(VAR_4 >= VAR_0 - 1,
    "verifier log line truncated - local buffer too short\n");

 VAR_4 = FUNC_2(VAR_1->len_total - VAR_1->len_used - 1, VAR_4);
 VAR_1->kbuf[VAR_4] = '\0';

 if (!FUNC_1(VAR_1->ubuf + VAR_1->len_used, VAR_1->kbuf, VAR_4 + 1))
  VAR_1->len_used += VAR_4;
 else
  VAR_1->ubuf = ((void*)0);
}
