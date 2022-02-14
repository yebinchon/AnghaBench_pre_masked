
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u8 FUNC_1(struct qed_dev *VAR_4,
     u32 VAR_5)
{
 u8 VAR_6 = FUNC_0(VAR_5, VAR_2);
 u8 VAR_7 = FUNC_0(VAR_5, VAR_1);
 u8 VAR_8 = FUNC_0(VAR_5,
    VAR_3);
 u8 VAR_9;

 if (VAR_8)
  VAR_9 = VAR_6 + VAR_0;
 else
  VAR_9 = VAR_7;

 return VAR_9;
}
