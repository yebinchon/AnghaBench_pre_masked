
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tg3*,int ,int*) ;
 int FUNC_1 (struct tg3*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tg3 *VAR_3, u32 VAR_4, u32 VAR_5, u32 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_4);
 if (VAR_7)
  goto done;

 VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_5);
 if (VAR_7)
  goto done;

 VAR_7 = FUNC_1(VAR_3, VAR_1,
      VAR_2 | VAR_4);
 if (VAR_7)
  goto done;

 VAR_7 = FUNC_0(VAR_3, VAR_0, VAR_6);

done:
 return VAR_7;
}
