
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_fl_payload {unsigned long tc_flower_cookie; } ;



__attribute__((used)) static inline bool FUNC_0(struct nfp_fl_payload *VAR_0)
{
 return VAR_0->tc_flower_cookie == (unsigned long)VAR_0;
}
