
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemini_pmx {int nconfs; struct gemini_pin_conf* confs; } ;
struct gemini_pin_conf {unsigned int pin; } ;



__attribute__((used)) static const struct gemini_pin_conf *FUNC_0(struct gemini_pmx *VAR_0,
        unsigned int VAR_1)
{
 const struct gemini_pin_conf *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nconfs; VAR_3++) {
  VAR_2 = &VAR_0->confs[VAR_3];
  if (VAR_2->pin == VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
