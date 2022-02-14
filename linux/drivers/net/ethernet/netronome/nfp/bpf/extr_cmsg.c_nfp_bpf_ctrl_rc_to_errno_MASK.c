
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nfp_app_bpf {int dummy; } ;
struct cmsg_reply_map_simple {int rc; } ;


 size_t FUNC_0 (int const*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_app_bpf*,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct nfp_app_bpf *VAR_0,
    struct cmsg_reply_map_simple *VAR_1)
{
 static const int VAR_2[] = {
  [135] = 0,
  [139] = -133,
  [138] = -129,
  [141] = -131,
  [136] = -130,
  [140] = -132,
  [137] = -128,
  [142] = -134,
 };
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1->rc);
 if (VAR_3 >= FUNC_0(VAR_2)) {
  FUNC_2(VAR_0, "FW responded with invalid status: %u\n", VAR_3);
  return -130;
 }

 return VAR_2[VAR_3];
}
