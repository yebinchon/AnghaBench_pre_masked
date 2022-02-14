
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mt7601u_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7601u_dev*,int const,int ,int const,scalar_t__ const,int *,int ) ;
 int FUNC_1 (struct mt7601u_dev*,scalar_t__ const,int const) ;

__attribute__((used)) static int FUNC_2(struct mt7601u_dev *VAR_1, const u8 VAR_2,
          const u16 VAR_3, const u32 VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0,
      VAR_4 & 0xffff, VAR_3, ((void*)0), 0);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0,
          VAR_4 >> 16, VAR_3 + 2, ((void*)0), 0);
 FUNC_1(VAR_1, VAR_3, VAR_4);
 return VAR_5;
}
