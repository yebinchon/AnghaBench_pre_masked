
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hantro_dev {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (unsigned char*) ;
 int FUNC_3 (struct hantro_dev*,size_t,int ) ;

__attribute__((used)) static void
FUNC_4(struct hantro_dev *VAR_1,
         unsigned char *VAR_2,
         unsigned char *VAR_3)
{
 u32 VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_2(&VAR_2[VAR_5]);
  FUNC_3(VAR_1, VAR_4, FUNC_1(VAR_5));

  VAR_4 = FUNC_2(&VAR_3[VAR_5]);
  FUNC_3(VAR_1, VAR_4, FUNC_0(VAR_5));
 }
}
