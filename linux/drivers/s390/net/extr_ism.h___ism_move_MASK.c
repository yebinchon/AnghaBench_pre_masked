
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zpci_dev {int fh; } ;
struct ism_dev {int pdev; } ;


 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (void*,int ,int ) ;
 struct zpci_dev* FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct ism_dev *VAR_0, u64 VAR_1, void *VAR_2,
        unsigned int VAR_3)
{
 struct zpci_dev *VAR_4 = FUNC_2(VAR_0->pdev);
 u64 VAR_5 = FUNC_0(VAR_4->fh, 0, VAR_3);

 return FUNC_1(VAR_2, VAR_5, VAR_1);
}
