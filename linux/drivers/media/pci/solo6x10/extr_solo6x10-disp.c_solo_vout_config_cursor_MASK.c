
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct solo_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct solo_dev *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 20; VAR_4++)
  FUNC_1(VAR_3, FUNC_0(VAR_4), 0);

 FUNC_1(VAR_3, VAR_2, 0);

 FUNC_1(VAR_3, VAR_0,
         (0x80 << 24) | (0x80 << 16) | (0x10 << 8) | 0x80);
 FUNC_1(VAR_3, VAR_1, (0xe0 << 8) | 0x80);
}
