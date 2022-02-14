
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct solo_dev*) ;
 unsigned int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*,int ,scalar_t__,scalar_t__,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct solo_dev *VAR_1, dma_addr_t VAR_2,
         unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_3 > FUNC_1(VAR_1))
  return -VAR_0;


 if (VAR_3 + VAR_4 <= FUNC_1(VAR_1)) {
  return FUNC_2(VAR_1, 0, VAR_2,
          FUNC_0(VAR_1) + VAR_3, VAR_4,
          0, 0);
 }


 VAR_5 = FUNC_2(VAR_1, 0, VAR_2,
        FUNC_0(VAR_1) + VAR_3,
        FUNC_1(VAR_1) - VAR_3, 0, 0);

 if (!VAR_5) {
  VAR_5 = FUNC_2(VAR_1, 0,
        VAR_2 + FUNC_1(VAR_1) - VAR_3,
        FUNC_0(VAR_1),
        VAR_4 + VAR_3 - FUNC_1(VAR_1), 0, 0);
 }

 return VAR_5;
}
