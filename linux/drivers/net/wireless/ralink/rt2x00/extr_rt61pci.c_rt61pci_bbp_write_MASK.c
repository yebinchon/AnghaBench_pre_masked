
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rt2x00_dev {int csr_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,int ,int const) ;
 int FUNC_4 (struct rt2x00_dev*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_5,
         const unsigned int VAR_6, const u8 VAR_7)
{
 u32 VAR_8;

 FUNC_1(&VAR_5->csr_mutex);





 if (FUNC_0(VAR_5, &VAR_8)) {
  VAR_8 = 0;
  FUNC_3(&VAR_8, VAR_4, VAR_7);
  FUNC_3(&VAR_8, VAR_3, VAR_6);
  FUNC_3(&VAR_8, VAR_1, 1);
  FUNC_3(&VAR_8, VAR_2, 0);

  FUNC_4(VAR_5, VAR_0, VAR_8);
 }

 FUNC_2(&VAR_5->csr_mutex);
}
