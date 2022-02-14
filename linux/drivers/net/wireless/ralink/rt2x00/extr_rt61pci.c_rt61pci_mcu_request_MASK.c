
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int csr_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int const) ;
 int FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_8,
    const u8 VAR_9, const u8 VAR_10,
    const u8 VAR_11, const u8 VAR_12)
{
 u32 VAR_13;

 FUNC_1(&VAR_8->csr_mutex);





 if (FUNC_0(VAR_8, &VAR_13)) {
  FUNC_3(&VAR_13, VAR_4, 1);
  FUNC_3(&VAR_13, VAR_3, VAR_10);
  FUNC_3(&VAR_13, VAR_1, VAR_11);
  FUNC_3(&VAR_13, VAR_2, VAR_12);
  FUNC_5(VAR_8, VAR_0, VAR_13);

  VAR_13 = FUNC_4(VAR_8, VAR_5);
  FUNC_3(&VAR_13, VAR_6, VAR_9);
  FUNC_3(&VAR_13, VAR_7, 1);
  FUNC_5(VAR_8, VAR_5, VAR_13);
 }

 FUNC_2(&VAR_8->csr_mutex);

}
