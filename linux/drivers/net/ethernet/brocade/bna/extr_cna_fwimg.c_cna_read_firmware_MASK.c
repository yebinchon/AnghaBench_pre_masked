
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;


 struct firmware const* VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (struct firmware const**,char*,int *) ;

__attribute__((used)) static u32 *
FUNC_3(struct pci_dev *VAR_1, u32 **VAR_2,
   u32 *VAR_3, char *VAR_4)
{
 const struct firmware *VAR_5;
 u32 VAR_6;

 if (FUNC_2(&VAR_5, VAR_4, &VAR_1->dev)) {
  FUNC_0(&VAR_1->dev, "can't load firmware %s\n", VAR_4);
  goto error;
 }

 *VAR_2 = (u32 *)VAR_5->data;
 *VAR_3 = VAR_5->size/sizeof(u32);
 VAR_0 = VAR_5;




 for (VAR_6 = 0; VAR_6 < *VAR_3; VAR_6++)
  FUNC_1(*VAR_2 + VAR_6);

 return *VAR_2;
error:
 return ((void*)0);
}
