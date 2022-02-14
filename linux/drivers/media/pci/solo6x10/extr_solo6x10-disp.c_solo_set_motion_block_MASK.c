
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct solo_dev {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct solo_dev*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned int const,int ) ;
 int FUNC_4 (struct solo_dev*,int,int *,scalar_t__,unsigned int const,int ,int ) ;

int FUNC_5(struct solo_dev *VAR_5, u8 VAR_6,
  const u16 *VAR_7)
{
 const unsigned VAR_8 = sizeof(u16) * 64;
 u32 VAR_9 = VAR_3 + VAR_6 * VAR_4 * 2;
 __le16 *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = 0;

 VAR_10 = FUNC_3(VAR_8, VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
   VAR_10[VAR_11] = FUNC_1(VAR_7[VAR_12 * VAR_2 + VAR_11]);
  VAR_13 |= FUNC_4(VAR_5, 1, VAR_10,
   FUNC_0(VAR_5) + VAR_9 + VAR_12 * VAR_8,
   VAR_8, 0, 0);
 }
 FUNC_2(VAR_10);
 return VAR_13;
}
