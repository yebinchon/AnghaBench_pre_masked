
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct skge_hw*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct skge_hw*,scalar_t__) ;
 int FUNC_2 (struct skge_hw*,scalar_t__,int ) ;
 int FUNC_3 (struct skge_hw*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct skge_hw *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (VAR_2->chip_id != VAR_1)
  return 0;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_0 + 3, 0xff);
 VAR_4 = (FUNC_1(VAR_2, VAR_0 + 3) != 0);
 FUNC_2(VAR_2, VAR_0, VAR_3);
 return VAR_4;
}
