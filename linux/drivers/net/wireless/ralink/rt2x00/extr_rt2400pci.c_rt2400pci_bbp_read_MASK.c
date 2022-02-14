
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
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__*,int ,unsigned int const) ;
 int FUNC_5 (struct rt2x00_dev*,int ,scalar_t__) ;

__attribute__((used)) static u8 FUNC_6(struct rt2x00_dev *VAR_5,
        const unsigned int VAR_6)
{
 u32 VAR_7;
 u8 VAR_8;

 FUNC_1(&VAR_5->csr_mutex);
 if (FUNC_0(VAR_5, &VAR_7)) {
  VAR_7 = 0;
  FUNC_4(&VAR_7, VAR_2, VAR_6);
  FUNC_4(&VAR_7, VAR_1, 1);
  FUNC_4(&VAR_7, VAR_4, 0);

  FUNC_5(VAR_5, VAR_0, VAR_7);

  FUNC_0(VAR_5, &VAR_7);
 }

 VAR_8 = FUNC_3(VAR_7, VAR_3);

 FUNC_2(&VAR_5->csr_mutex);

 return VAR_8;
}
