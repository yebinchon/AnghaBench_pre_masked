
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned long u32 ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nfp_cpp*,unsigned long,int,int*) ;
 scalar_t__ FUNC_2 (unsigned long const,unsigned long const) ;

__attribute__((used)) static int
FUNC_3(struct nfp_cpp *VAR_3, u64 *VAR_4, u32 VAR_5, u64 VAR_6,
   u64 VAR_7, u64 VAR_8, u32 VAR_9)
{
 const unsigned long VAR_10 = VAR_2 + VAR_9 * VAR_1;
 int VAR_11;

 for (;;) {
  const unsigned long VAR_12 = VAR_2;

  VAR_11 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_4);
  if (VAR_11 < 0)
   return VAR_11;

  if ((*VAR_4 & VAR_7) == VAR_8)
   return 0;

  FUNC_0(25);

  if (FUNC_2(VAR_12, VAR_10))
   return -VAR_0;
 }
}
