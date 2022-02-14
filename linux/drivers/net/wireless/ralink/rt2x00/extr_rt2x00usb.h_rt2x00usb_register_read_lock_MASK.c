
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
typedef int reg ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ,unsigned int const,int *,int,int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct rt2x00_dev *VAR_3,
            const unsigned int VAR_4)
{
 __le32 VAR_5 = 0;
 FUNC_1(VAR_3, VAR_1,
           VAR_2, VAR_4,
           &VAR_5, sizeof(VAR_5), VAR_0);
 return FUNC_0(VAR_5);
}
