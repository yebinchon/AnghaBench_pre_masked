
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aac_dev {int dummy; } ;


 int FUNC_0 (struct aac_dev*,int ,int ) ;
 int FUNC_1 (struct aac_dev*,int) ;
 int FUNC_2 (struct aac_dev*) ;
 int FUNC_3 (struct aac_dev*,int) ;

__attribute__((used)) static inline void FUNC_4(struct aac_dev *VAR_0,
 int VAR_1)
{
 int VAR_2;
 int VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 < VAR_1)
  VAR_1 = VAR_2;
 else if (VAR_1 < 0)
  VAR_1 = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, VAR_3);
  VAR_5 = FUNC_3(VAR_0, VAR_3);

  FUNC_0(VAR_0, VAR_4, VAR_5);
 }
}
