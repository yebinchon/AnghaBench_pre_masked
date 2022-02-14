
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long long u64 ;
struct ad5933_state {int mclk_hz; unsigned long freq_start; unsigned long freq_inc; int client; } ;
typedef int __be32 ;




 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int,int *) ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (unsigned long long,int) ;

__attribute__((used)) static int FUNC_3(struct ad5933_state *VAR_1,
      unsigned int VAR_2, unsigned long VAR_3)
{
 unsigned long long VAR_4;
 union {
  __be32 d32;
  u8 d8[4];
 } VAR_5;

 VAR_4 = (u64)VAR_3 * (u64)(1 << 27);
 FUNC_2(VAR_4, VAR_1->mclk_hz / 4);

 switch (VAR_2) {
 case 128:
  VAR_1->freq_start = VAR_3;
  break;
 case 129:
  VAR_1->freq_inc = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 VAR_5.d32 = FUNC_1(VAR_4);
 return FUNC_0(VAR_1->client, VAR_2, 3, &VAR_5.d8[1]);
}
