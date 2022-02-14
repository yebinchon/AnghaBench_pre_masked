
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_change_info {int after_ctime_nsec; int after_ctime_sec; int before_ctime_nsec; int before_ctime_sec; int after_change; int before_change; scalar_t__ change_supported; int atomic; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static __be32 *FUNC_2(__be32 *VAR_0, struct nfsd4_change_info *VAR_1)
{
 *VAR_0++ = FUNC_0(VAR_1->atomic);
 if (VAR_1->change_supported) {
  VAR_0 = FUNC_1(VAR_0, VAR_1->before_change);
  VAR_0 = FUNC_1(VAR_0, VAR_1->after_change);
 } else {
  *VAR_0++ = FUNC_0(VAR_1->before_ctime_sec);
  *VAR_0++ = FUNC_0(VAR_1->before_ctime_nsec);
  *VAR_0++ = FUNC_0(VAR_1->after_ctime_sec);
  *VAR_0++ = FUNC_0(VAR_1->after_ctime_nsec);
 }
 return VAR_0;
}
