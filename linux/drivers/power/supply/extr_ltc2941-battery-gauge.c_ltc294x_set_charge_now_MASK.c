
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ltc294x_info {scalar_t__ Qlsb; int client; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ltc294x_info const*,int) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(const struct ltc294x_info *VAR_4, int VAR_5)
{
 int VAR_6;
 u8 VAR_7[2];
 u8 VAR_8;
 s32 VAR_9;

 VAR_9 = FUNC_2(VAR_4, VAR_5);

 if (VAR_4->Qlsb < 0)
  VAR_9 += 0xFFFF;
 if ((VAR_9 < 0) || (VAR_9 > 0xFFFF))
  return -VAR_0;


 VAR_6 = FUNC_3(VAR_4->client,
  VAR_2, &VAR_8, 1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 |= VAR_3;
 VAR_6 = FUNC_4(VAR_4->client,
  VAR_2, &VAR_8, 1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7[0] = FUNC_1(VAR_9);
 VAR_7[1] = FUNC_0(VAR_9);
 VAR_6 = FUNC_4(VAR_4->client,
  VAR_1, &VAR_7[0], 2);
 if (VAR_6 < 0)
  goto error_exit;

error_exit:
 VAR_8 &= ~VAR_3;
 VAR_6 = FUNC_4(VAR_4->client,
  VAR_2, &VAR_8, 1);

 return VAR_6 < 0 ? VAR_6 : 0;
}
