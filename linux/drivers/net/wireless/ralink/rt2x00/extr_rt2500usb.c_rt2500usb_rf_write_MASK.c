
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct rt2x00_dev {int csr_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct rt2x00_dev*,unsigned int const,int const) ;
 int FUNC_5 (scalar_t__*,int ,int const) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_7,
          const unsigned int VAR_8, const u32 VAR_9)
{
 u16 VAR_10;

 FUNC_1(&VAR_7->csr_mutex);





 if (FUNC_0(VAR_7, &VAR_10)) {
  VAR_10 = 0;
  FUNC_5(&VAR_10, VAR_6, VAR_9);
  FUNC_3(VAR_7, VAR_5, VAR_10);

  VAR_10 = 0;
  FUNC_5(&VAR_10, VAR_4, VAR_9 >> 16);
  FUNC_5(&VAR_10, VAR_3, 20);
  FUNC_5(&VAR_10, VAR_2, 0);
  FUNC_5(&VAR_10, VAR_1, 1);

  FUNC_3(VAR_7, VAR_0, VAR_10);
  FUNC_4(VAR_7, VAR_8, VAR_9);
 }

 FUNC_2(&VAR_7->csr_mutex);
}
