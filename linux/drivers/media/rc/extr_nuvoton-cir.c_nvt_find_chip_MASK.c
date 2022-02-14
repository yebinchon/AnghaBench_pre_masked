
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvt_dev {int chip_ver; } ;
struct TYPE_3__ {int chip_ver; char const* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline const char *FUNC_1(struct nvt_dev *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if ((VAR_3 & VAR_0) == VAR_1[VAR_4].chip_ver) {
   VAR_2->chip_ver = VAR_1[VAR_4].chip_ver;
   return VAR_1[VAR_4].name;
  }

 return ((void*)0);
}
