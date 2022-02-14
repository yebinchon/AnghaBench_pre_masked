
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fm10k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fm10k_hw*,int ) ;

__attribute__((used)) static u16 FUNC_1(struct fm10k_hw *VAR_3)
{
 u16 VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 &= VAR_2;


 VAR_4++;

 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 return VAR_4;
}
