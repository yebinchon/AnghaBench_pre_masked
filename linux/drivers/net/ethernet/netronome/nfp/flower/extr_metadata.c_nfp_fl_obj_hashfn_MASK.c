
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_fl_payload {int tc_flower_cookie; } ;


 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static u32 FUNC_1(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct nfp_fl_payload *VAR_3 = VAR_0;

 return FUNC_0((u32 *)&VAR_3->tc_flower_cookie,
        sizeof(VAR_3->tc_flower_cookie) / sizeof(u32),
        VAR_2);
}
