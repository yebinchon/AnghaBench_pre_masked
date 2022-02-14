
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nic7018_config {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct nic7018_config* VAR_1 ;

__attribute__((used)) static const struct nic7018_config *FUNC_1(u32 VAR_2,
             u8 *VAR_3)
{
 const struct nic7018_config *VAR_4;
 u8 VAR_5;

 if (VAR_2 < 30 && VAR_2 != 16) {
  VAR_4 = &VAR_1[0];
  VAR_5 = VAR_2 / 2 + 1;
 } else {
  VAR_4 = &VAR_1[1];
  VAR_5 = FUNC_0(VAR_2 + 16, 32);

  if (VAR_5 > VAR_0)
   VAR_5 = VAR_0;
 }
 *VAR_3 = VAR_5;
 return VAR_4;
}
