
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_verifier_log {int dummy; } ;
struct btf_verifier_env {struct btf* btf; struct bpf_verifier_log log; } ;
struct btf_header {int str_len; int str_off; int type_len; int type_off; int hdr_len; int flags; int version; int magic; } ;
struct btf {struct btf_header hdr; } ;


 int FUNC_0 (struct bpf_verifier_log*,char*,int ) ;
 int FUNC_1 (struct bpf_verifier_log*) ;

__attribute__((used)) static void FUNC_2(struct btf_verifier_env *VAR_0,
     u32 VAR_1)
{
 struct bpf_verifier_log *VAR_2 = &VAR_0->log;
 const struct btf *VAR_3 = VAR_0->btf;
 const struct btf_header *VAR_4;

 if (!FUNC_1(VAR_2))
  return;

 VAR_4 = &VAR_3->hdr;
 FUNC_0(VAR_2, "magic: 0x%x\n", VAR_4->magic);
 FUNC_0(VAR_2, "version: %u\n", VAR_4->version);
 FUNC_0(VAR_2, "flags: 0x%x\n", VAR_4->flags);
 FUNC_0(VAR_2, "hdr_len: %u\n", VAR_4->hdr_len);
 FUNC_0(VAR_2, "type_off: %u\n", VAR_4->type_off);
 FUNC_0(VAR_2, "type_len: %u\n", VAR_4->type_len);
 FUNC_0(VAR_2, "str_off: %u\n", VAR_4->str_off);
 FUNC_0(VAR_2, "str_len: %u\n", VAR_4->str_len);
 FUNC_0(VAR_2, "btf_total_size: %u\n", VAR_1);
}
