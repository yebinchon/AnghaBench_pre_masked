
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mei_device const*) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static inline u32 FUNC_3(const struct mei_device *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(FUNC_1(VAR_1), VAR_0);
 FUNC_2(VAR_1->dev, "H_CSR", VAR_0, VAR_2);

 return VAR_2;
}
