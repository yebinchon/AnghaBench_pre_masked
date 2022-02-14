
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_4, struct timespec64 *VAR_5)
{
 VAR_0;

 FUNC_0(12);
 VAR_3 = FUNC_2(VAR_3, &VAR_5->tv_sec);
 VAR_5->tv_nsec = FUNC_1(VAR_3++);
 if (VAR_5->tv_nsec >= (u32)1000000000)
  return VAR_2;

 VAR_1;
}
