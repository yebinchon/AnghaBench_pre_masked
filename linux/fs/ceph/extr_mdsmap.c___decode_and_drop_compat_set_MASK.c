
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**,void*,int,int ) ;

__attribute__((used)) static int FUNC_2(void **VAR_1, void* VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  u32 VAR_4;
  FUNC_1(VAR_1, VAR_2, sizeof(u64) + sizeof(u32), VAR_0);

  *VAR_1 += sizeof(u64);

  VAR_4 = FUNC_0(VAR_1);
  while (VAR_4-- > 0) {
   u32 VAR_5;
   FUNC_1(VAR_1, VAR_2, sizeof(u64) + sizeof(u32),
      VAR_0);
   *VAR_1 += sizeof(u64);
   VAR_5 = FUNC_0(VAR_1);
   FUNC_1(VAR_1, VAR_2, VAR_5, VAR_0);
   *VAR_1 += VAR_5;
  }
 }
 return 0;
bad:
 return -1;
}
