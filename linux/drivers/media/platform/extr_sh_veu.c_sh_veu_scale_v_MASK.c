
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_veu_dev {int dummy; } ;


 unsigned long FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sh_veu_dev*,int,int,int,int*,int*,int*) ;
 int FUNC_2 (struct sh_veu_dev*,int ) ;
 int FUNC_3 (struct sh_veu_dev*,int ,int) ;

__attribute__((used)) static unsigned long FUNC_4(struct sh_veu_dev *VAR_2,
        int VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6, &VAR_7, &VAR_9);


 VAR_8 = (FUNC_2(VAR_2, VAR_0) & ~0xffff0000) |
  (((VAR_6 << 12) | VAR_7) << 16);

 FUNC_3(VAR_2, VAR_0, VAR_8);


 VAR_8 = (FUNC_2(VAR_2, VAR_1) & ~0xffff0000) |
  (((VAR_9 << 12) | VAR_5) << 16);

 FUNC_3(VAR_2, VAR_1, VAR_8);

 return FUNC_0((VAR_3 * VAR_5) / VAR_4, 4);
}
