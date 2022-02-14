
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int rt; } ;
struct rt2x00_dev {int csr_mutex; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int FUNC_0 (struct rt2x00_dev*,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,unsigned int const) ;

__attribute__((used)) static u8 FUNC_7(struct rt2x00_dev *VAR_9,
       const unsigned int VAR_10)
{
 u32 VAR_11;
 u8 VAR_12;

 FUNC_2(&VAR_9->csr_mutex);
 switch (VAR_9->chip.rt) {
 case 128:
  if (FUNC_1(VAR_9, &VAR_11)) {
   VAR_11 = 0;
   FUNC_6(&VAR_11, VAR_6,
        VAR_10);
   FUNC_6(&VAR_11, VAR_8, 0);
   FUNC_6(&VAR_11, VAR_2, 1);

   FUNC_4(VAR_9, VAR_0, VAR_11);

   FUNC_1(VAR_9, &VAR_11);
  }

  VAR_12 = FUNC_5(VAR_11, VAR_4);
  break;

 default:
  if (FUNC_0(VAR_9, &VAR_11)) {
   VAR_11 = 0;
   FUNC_6(&VAR_11, VAR_5, VAR_10);
   FUNC_6(&VAR_11, VAR_7, 0);
   FUNC_6(&VAR_11, VAR_1, 1);

   FUNC_4(VAR_9, VAR_0, VAR_11);

   FUNC_0(VAR_9, &VAR_11);
  }

  VAR_12 = FUNC_5(VAR_11, VAR_3);
  break;
 }

 FUNC_3(&VAR_9->csr_mutex);

 return VAR_12;
}
