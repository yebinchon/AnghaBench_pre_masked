
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_sec_info {scalar_t__ len; scalar_t__ off; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct btf_sec_info *VAR_2 = VAR_0;
 const struct btf_sec_info *VAR_3 = VAR_1;

 return (int)(VAR_2->off - VAR_3->off) ? : (int)(VAR_2->len - VAR_3->len);
}
