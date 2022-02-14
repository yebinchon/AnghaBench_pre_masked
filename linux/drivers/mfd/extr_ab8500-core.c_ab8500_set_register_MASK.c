
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int parent; } ;
struct ab8500 {int transfer_ongoing; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ab8500* FUNC_2 (int ) ;
 int FUNC_3 (struct ab8500*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, u8 VAR_1,
 u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct ab8500 *VAR_5 = FUNC_2(VAR_0->parent);

 FUNC_1(&VAR_5->transfer_ongoing);
 VAR_4 = FUNC_3(VAR_5, VAR_1, VAR_2, VAR_3);
 FUNC_0(&VAR_5->transfer_ongoing);
 return VAR_4;
}
