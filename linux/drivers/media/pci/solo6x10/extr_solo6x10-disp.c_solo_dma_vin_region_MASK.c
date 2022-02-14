
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct solo_dev {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int const,int ) ;
 int FUNC_4 (struct solo_dev*,int,int *,scalar_t__,int const,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct solo_dev *VAR_2, u32 VAR_3,
          u16 VAR_4, int VAR_5)
{
 __le16 *VAR_6;
 const int VAR_7 = 64, VAR_8 = VAR_7 * sizeof(*VAR_6);
 int VAR_9, VAR_10 = 0;

 VAR_6 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_6[VAR_9] = FUNC_1(VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += VAR_8) {
  VAR_10 = FUNC_4(VAR_2, 1, VAR_6,
       FUNC_0(VAR_2) + VAR_3 + VAR_9,
       VAR_8, 0, 0);

  if (VAR_10)
   break;
 }

 FUNC_2(VAR_6);
 return VAR_10;
}
