
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int nslabel_size; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct nvdimm_drvdata*) ;

__attribute__((used)) static int FUNC_2(struct nvdimm_drvdata *VAR_0)
{
 int VAR_1[] = { 128, 256 };
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  VAR_0->nslabel_size = VAR_1[VAR_2];
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 >= 0)
   return VAR_3;
 }

 return -1;
}
