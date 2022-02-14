
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt9m032 {int pix_clock; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (unsigned long long,int ) ;
 int FUNC_2 (struct mt9m032*) ;

__attribute__((used)) static u32 FUNC_3(struct mt9m032 *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 u32 VAR_3;

 VAR_2 = VAR_1 + 716;
 VAR_3 = FUNC_1(1000000000ULL * VAR_2, VAR_0->pix_clock);
 FUNC_0(FUNC_2(VAR_0), "MT9M032 line time: %u ns\n", VAR_3);
 return VAR_3;
}
