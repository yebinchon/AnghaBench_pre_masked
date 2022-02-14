
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct ath10k *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = VAR_4 & 0xfffff;

 VAR_5 = FUNC_0(VAR_3, VAR_0);

 if (VAR_6 >= VAR_1 && VAR_6 <=
     (VAR_1 + VAR_2)) {



  VAR_5 |= VAR_6;
 } else {
  VAR_5 |= 0x100000 | VAR_6;
 }

 return VAR_5;
}
