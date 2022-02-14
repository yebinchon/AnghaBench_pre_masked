
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath5k_hw*,int ) ;
 int FUNC_2 (struct ath5k_hw*,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct ath5k_hw *VAR_5)
{
 unsigned int VAR_6;

 FUNC_2(VAR_5, VAR_1, VAR_0);




 for (VAR_6 = 1000; VAR_6 > 0 &&
   (FUNC_1(VAR_5, VAR_0) & VAR_2) != 0;
   VAR_6--)
  FUNC_3(100);

 if (!VAR_6)
  FUNC_0(VAR_5, VAR_3,
    "failed to stop RX DMA !\n");

 return VAR_6 ? 0 : -VAR_4;
}
