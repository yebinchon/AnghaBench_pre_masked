
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vivid_dev {int dummy; } ;


 int FUNC_0 (struct vivid_dev*,unsigned int,unsigned int,int *,int const*) ;

__attribute__((used)) static void FUNC_1(struct vivid_dev *VAR_0, unsigned VAR_1, unsigned VAR_2,
  u8 *VAR_3, const u8 *VAR_4,
  unsigned VAR_5, unsigned VAR_6)
{
 unsigned VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++, VAR_3 += VAR_6, VAR_4 += VAR_6) {
  FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_7,
    (u16 *)VAR_3, (const u16 *)VAR_4);
 }
}
